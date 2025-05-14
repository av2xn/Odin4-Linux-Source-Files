// Decompiled function: FUN_0017c090


void FUN_0017c090(long *param_1,char *param_2)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0xffffffffffffffff;
  *param_1 = (long)(param_1 + 2);
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    pcVar2 = param_2 + sVar1;
  }
  FUN_0017bfe0(param_1,param_2,pcVar2);
  return;
}

