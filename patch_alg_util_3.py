import re
with open('/home/pwq/TPM/third_party/tpm2-tools/lib/tpm2_alg_util.c', 'r') as f:
    content = f.read()

scloud_handlers = """
static alg_parser_rc handle_scloud(TPM2_ALG_ID type, TPM2B_PUBLIC *public) {
    public->publicArea.type = type;
    public->publicArea.parameters.asymDetail.symmetric.algorithm = TPM2_ALG_NULL;
    public->publicArea.parameters.asymDetail.symmetric.keyBits.aes = 0;
    public->publicArea.parameters.asymDetail.symmetric.mode.aes = TPM2_ALG_NULL;
    public->publicArea.parameters.asymDetail.scheme.scheme = TPM2_ALG_NULL;
    return alg_parser_rc_continue;
}
"""
if "handle_scloud" not in content:
    content = content.replace('static alg_parser_rc handle_rsa', scloud_handlers + '\nstatic alg_parser_rc handle_rsa')

scloud_objects = """
    } else if (!strncmp(object, "scloudplus_l1", 13)) {
        return handle_scloud(TPM2_ALG_SCLOUDPLUS_L1, public);
    } else if (!strncmp(object, "scloudplus_l3", 13)) {
        return handle_scloud(TPM2_ALG_SCLOUDPLUS_L3, public);
    } else if (!strncmp(object, "scloudplus_l5", 13)) {
        return handle_scloud(TPM2_ALG_SCLOUDPLUS_L5, public);
    } else if (!strncmp(object, "aigis_sig", 9)) {
        return handle_scloud(TPM2_ALG_AIGIS_SIG, public);
"""
if "scloudplus_l1" not in content[content.find("handle_object("):]:
    content = content.replace('} else if (!strcmp(object, "hmac")) {', scloud_objects + '} else if (!strcmp(object, "hmac")) {')

with open('/home/pwq/TPM/third_party/tpm2-tools/lib/tpm2_alg_util.c', 'w') as f:
    f.write(content)
