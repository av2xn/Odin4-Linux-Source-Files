// Decompiled function: FUN_0017d710


void FUN_0017d710(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x128);
  *(long *)(param_1 + 0x128) = param_2 + lVar1;
  lVar2 = *(long *)(param_1 + 0x120) / 100;
  lVar3 = (param_2 + lVar1) / lVar2;
  if ((int)lVar3 != (int)(lVar1 / lVar2)) {
    FUN_00184740(lVar3,1,lVar1 % lVar2);
    return;
  }
  return;
}

