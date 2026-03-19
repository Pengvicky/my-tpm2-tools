import re
with open('/home/pwq/TPM/third_party/tpm2-tools/lib/tpm2_alg_util.c', 'r') as f:
    content = f.read()

content = content.replace('.any.', '.asymDetail.')

with open('/home/pwq/TPM/third_party/tpm2-tools/lib/tpm2_alg_util.c', 'w') as f:
    f.write(content)
