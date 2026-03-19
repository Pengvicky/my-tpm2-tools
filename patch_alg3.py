with open('lib/tpm2_alg_util.c', 'r') as f:
    content = f.read()

content = content.replace("""static alg_parser_rc handle_asym_detail(const char *detail,
        TPM2B_PUBLIC *public) {

    bool is_restricted = !!(public->publicArea.objectAttributes""", """static alg_parser_rc handle_asym_detail(const char *detail,
        TPM2B_PUBLIC *public) {

    if (public->publicArea.type == TPM2_ALG_SCLOUDPLUS_L1 ||
        public->publicArea.type == TPM2_ALG_SCLOUDPLUS_L3 ||
        public->publicArea.type == TPM2_ALG_SCLOUDPLUS_L5 ||
        public->publicArea.type == TPM2_ALG_AIGIS_SIG) {
        
        if (!detail || detail[0] == '\\0' || !strcmp(detail, "null")) {
            public->publicArea.parameters.asymDetail.symmetric.algorithm = TPM2_ALG_NULL;
            return alg_parser_rc_done;
        } else {
            return alg_parser_rc_error;
        }
    }

    bool is_restricted = !!(public->publicArea.objectAttributes""")

with open('lib/tpm2_alg_util.c', 'w') as f:
    f.write(content)

