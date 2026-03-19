#include <stdio.h>
#include <string.h>

int main() {
    char buf[] = "scloudplus_l3";
    char *b = buf;
    char *tok = NULL;
    char *saveptr = NULL;
    unsigned i = 0;
    
    char *object = NULL;
    char *scheme = NULL;
    char *symdetail = NULL;
    
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
            printf("error\n");
            return 1;
        }
        i++;
    }
    printf("i=%d, object=%s, scheme=%s, sym=%s\n", i, object, scheme, symdetail);
    return 0;
}
