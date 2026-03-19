import re

with open('/home/pwq/TPM/third_party/tpm2-tss/src/tss2-mu/tpmu-types.c', 'r') as f:
    content = f.read()

replacement = """TPMU_MARSHAL2(TPMU_PUBLIC_PARMS,
              TPM2_ALG_KEYEDHASH,
              ADDR,
              keyedHashDetail,
              Tss2_MU_TPMS_KEYEDHASH_PARMS_Marshal,
              TPM2_ALG_SYMCIPHER,
              ADDR,
              symDetail,
              Tss2_MU_TPMS_SYMCIPHER_PARMS_Marshal,
              TPM2_ALG_RSA,
              ADDR,
              rsaDetail,
              Tss2_MU_TPMS_RSA_PARMS_Marshal,
              TPM2_ALG_ECC,
              ADDR,
              eccDetail,
              Tss2_MU_TPMS_ECC_PARMS_Marshal,
              TPM2_ALG_SCLOUDPLUS_L1,
              ADDR,
              asymDetail,
              Tss2_MU_TPMS_ASYM_PARMS_Marshal,
              TPM2_ALG_SCLOUDPLUS_L3,
              ADDR,
              asymDetail,
              Tss2_MU_TPMS_ASYM_PARMS_Marshal,
              TPM2_ALG_SCLOUDPLUS_L5,
              ADDR,
              asymDetail,
              Tss2_MU_TPMS_ASYM_PARMS_Marshal,
              TPM2_ALG_AIGIS_SIG,
              ADDR,
              asymDetail,
              Tss2_MU_TPMS_ASYM_PARMS_Marshal)
TPMU_UNMARSHAL2(TPMU_PUBLIC_PARMS,
                TPM2_ALG_KEYEDHASH,
                keyedHashDetail,
                Tss2_MU_TPMS_KEYEDHASH_PARMS_Unmarshal,
                TPM2_ALG_SYMCIPHER,
                symDetail,
                Tss2_MU_TPMS_SYMCIPHER_PARMS_Unmarshal,
                TPM2_ALG_RSA,
                rsaDetail,
                Tss2_MU_TPMS_RSA_PARMS_Unmarshal,
                TPM2_ALG_ECC,
                eccDetail,
                Tss2_MU_TPMS_ECC_PARMS_Unmarshal,
                TPM2_ALG_SCLOUDPLUS_L1,
                asymDetail,
                Tss2_MU_TPMS_ASYM_PARMS_Unmarshal,
                TPM2_ALG_SCLOUDPLUS_L3,
                asymDetail,
                Tss2_MU_TPMS_ASYM_PARMS_Unmarshal,
                TPM2_ALG_SCLOUDPLUS_L5,
                asymDetail,
                Tss2_MU_TPMS_ASYM_PARMS_Unmarshal,
                TPM2_ALG_AIGIS_SIG,
                asymDetail,
                Tss2_MU_TPMS_ASYM_PARMS_Unmarshal)"""

# We need to replace the old block starting at TPMU_MARSHAL2(TPMU_PUBLIC_PARMS,
# and ending at TPMU_UNMARSHAL2(TPMU_PUBLIC_PARMS, ... ECC_PARMS_Unmarshal)

start_idx = content.find("TPMU_MARSHAL2(TPMU_PUBLIC_PARMS,")
end_idx = content.find("Tss2_MU_TPMS_ECC_PARMS_Unmarshal)", start_idx)
end_idx = content.find(")", end_idx) + 1

if start_idx != -1 and end_idx != -1:
    content = content[:start_idx] + replacement + content[end_idx:]
    with open('/home/pwq/TPM/third_party/tpm2-tss/src/tss2-mu/tpmu-types.c', 'w') as f:
        f.write(content)
else:
    print("Could not find block to replace")
