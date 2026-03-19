import re

with open('lib/tpm2_alg_util.c', 'r') as f:
    content = f.read()

content = content.replace("case TPM2_ALG_ECC:", """case TPM2_ALG_ECC:
    case TPM2_ALG_SCLOUDPLUS_L1:
    case TPM2_ALG_SCLOUDPLUS_L3:
    case TPM2_ALG_SCLOUDPLUS_L5:
    case TPM2_ALG_AIGIS_SIG:""")

with open('lib/tpm2_alg_util.c', 'w') as f:
    f.write(content)
