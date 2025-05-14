// Decompiled function: VerifyTruncatedDigest


/* CryptoPP::HashTransformation::VerifyTruncatedDigest(unsigned char const*, unsigned long, unsigned
   char const*, unsigned long) */

void __thiscall
CryptoPP::HashTransformation::VerifyTruncatedDigest
          (HashTransformation *this,uchar *param_1,ulong param_2,uchar *param_3,ulong param_4)

{
  (**(code **)(*(long *)this + 0x20))(this,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00181ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x88))(this,param_1,param_2);
  return;
}

