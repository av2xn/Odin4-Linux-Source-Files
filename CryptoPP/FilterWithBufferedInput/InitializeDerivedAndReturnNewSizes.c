// Decompiled function: InitializeDerivedAndReturnNewSizes


/* CryptoPP::FilterWithBufferedInput::InitializeDerivedAndReturnNewSizes(CryptoPP::NameValuePairs
   const&, unsigned long&, unsigned long&, unsigned long&) */

void CryptoPP::FilterWithBufferedInput::InitializeDerivedAndReturnNewSizes
               (NameValuePairs *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  if (*(code **)(*(long *)param_1 + 0x1b8) == InitializeDerived) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001823a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x1b8))();
  return;
}

