import re
with open('lib/tpm2_alg_util.c', 'r') as f:
    content = f.read()

sm2_intercept = """
    if (!strncmp(object, "sm2", 3)) {
        object += 3;
        return handle_ecc("_sm2", public);
    } else """

if 'if (!strncmp(object, "sm2"' not in content:
    content = content.replace('if (!strncmp(object, "rsa", 3)) {', sm2_intercept + 'if (!strncmp(object, "rsa", 3)) {')

with open('lib/tpm2_alg_util.c', 'w') as f:
    f.write(content)
