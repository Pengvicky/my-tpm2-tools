#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define TPM2B_PUBLIC int
#define LOG_ERR(...) printf(__VA_ARGS__); printf("\n")

typedef enum {
    alg_parser_rc_done,
    alg_parser_rc_error,
    alg_parser_rc_continue
} alg_parser_rc;

alg_parser_rc handle_object(char* object, int* public) {
    if (!strncmp(object, "scloudplus_l3", 13)) {
        return alg_parser_rc_continue;
    }
    return alg_parser_rc_error;
}
alg_parser_rc handle_scheme(char* scheme, int* public) {
    if (!scheme || scheme[0] == '\0' || !strcmp(scheme, "null")) {
        return alg_parser_rc_done;
    }
    return alg_parser_rc_error;
}
alg_parser_rc handle_asym_detail(char* detail, int* public) {
    if (!detail || detail[0] == '\0' || !strcmp(detail, "null")) {
        // we added SCLOUD to handle_asym_detail earlier! But wait, does handle_asym_detail return DONE or CONTINUE if "null"? 
        // let's look at the actual code
        return alg_parser_rc_done;
    }
    return alg_parser_rc_error;
}

bool tpm2_alg_util_handle_ext_alg(const char *alg_spec, TPM2B_PUBLIC *public) {
    char buf[256];

    if (!alg_spec) {
        return false;
    }

    int rc = snprintf(buf, sizeof(buf), "%s", alg_spec);
    if (rc < 0 || (size_t) rc >= sizeof(buf)) {
        goto error;
    }

    char *object = NULL;
    char *scheme = NULL;
    char *symdetail = NULL;

    char *b = buf;
    char *tok = NULL;
    char *saveptr = NULL;
    unsigned i = 0;
    while ((tok = strtok_r(b, ":", &saveptr))) {
        b = NULL;

        switch (i) {
        case 0:
            object = tok;
            break;
        case 1:
            scheme = tok;
            break;
        case 2:
            symdetail = tok;
            break;
        default:
            goto error;
        }
        i++;
    }

    if (i == 0) {
        goto error;
    }

    alg_parser_rc prc = handle_object(object, public);
    if (prc == alg_parser_rc_done) {
        /* we must have exhausted all the entries or it's an error */
        return scheme || symdetail ? false : true;
    }

    if (prc == alg_parser_rc_error) {
        return false;
    }

    /*
     * at this point we either have scheme or asym detail, if it
     * doesn't process as a scheme shuffle it to asym detail
     */
    for (i = 0; i < 2; i++) {
        prc = handle_scheme(scheme, public);
        if (prc == alg_parser_rc_done) {
            /* we must have exhausted all the entries or it's an error */
            return symdetail ? false : true;
        }

        if (prc == alg_parser_rc_error) {
            /*
             * if symdetail is set scheme must be consumed
             * unless scheme has been skipped by setting it
             * to NULL
             */
            if (symdetail && scheme) {
                return false;
            }

            symdetail = scheme;
            scheme = NULL;
            continue;
        }

        /* success in processing scheme */
        break;
    }

    /* handle asym detail */
    prc = handle_asym_detail(symdetail, public);
    if (prc != alg_parser_rc_done) {
        goto error;
    }

    return true;

    error:
    LOG_ERR("Could not handle algorithm spec: \"%s\"", alg_spec);
    return false;
}

int main() {
    int p = 0;
    bool res = tpm2_alg_util_handle_ext_alg("scloudplus_l3", &p);
    printf("res=%d\n", res);
    return 0;
}
