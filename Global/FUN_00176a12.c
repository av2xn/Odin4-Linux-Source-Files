// Decompiled function: FUN_00176a12


void FUN_00176a12(long *param_1,char *param_2)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)0xffffffffffffffff;
  *param_1 = (long)(param_1 + 2);
  if (param_2 != (char *)0x0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = param_2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = param_2 + (~uVar2 - 1);
  }
  FUN_001b9870(param_1,param_2,pcVar3);
  return;
}

