// Decompiled function: FUN_00176a86


void FUN_00176a86(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = param_2; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (0xf < (ulong)(param_2 * 8)) {
    CryptoPP::AlignedDeallocate(param_1);
    return;
  }
  CryptoPP::UnalignedDeallocate(param_1);
  return;
}

