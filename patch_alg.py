with open('lib/tpm2_alg_util.c', 'r') as f:
    content = f.read()

# I want to make sure I don't touch handle_scheme or handle_asym_detail.
# I just want to add the fix for handle_scheme_sign.

content = content.replace("""static alg_parser_rc handle_scheme_sign(const char *scheme,
        TPM2B_PUBLIC *public) {""", """static alg_parser_rc handle_scheme_sign(const char *scheme,
        TPM2B_PUBLIC *public) {
        
    if (public->publicArea.type == TPM2_ALG_SCLOUDPLUS_L1 ||
        public->publicArea.type == TPM2_ALG_SCLOUDPLUS_L3 ||
        public->publicArea.type == TPM2_ALG_SCLOUDPLUS_L5 ||
        public->publicArea.type == TPM2_ALG_AIGIS_SIG) {
        
        if (!scheme || scheme[0] == '\\0' || !strcmp(scheme, "null")) {
            public->publicArea.parameters.asymDetail.scheme.scheme = TPM2_ALG_NULL;
            return alg_parser_rc_done;
        } else {
            return alg_parser_rc_error;
        }
    }""")

with open('lib/tpm2_alg_util.c', 'w') as f:
    f.write(content)

