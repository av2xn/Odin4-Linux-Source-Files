// Decompiled function: DeviceinfoAnalysis


/* DownloadEngine::DeviceinfoAnalysis(char*) */

undefined4 __thiscall DownloadEngine::DeviceinfoAnalysis(DownloadEngine *this,char *param_1)

{
  char *__s;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  size_t sVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *local_68;
  long local_60;
  undefined local_58 [16];
  undefined *local_48 [2];
  undefined local_38 [24];
  
  if (*(int *)param_1 != 0x12345678) {
    local_48[0] = local_38;
    FUN_001789a0(local_48,"Invalid Data","");
                    /* try { // try from 00178ef0 to 00178ef4 has its CatchHandler @ 001790c8 */
    FUN_001843d0(this + 0x30,local_48);
LAB_00178ef5:
    if (local_48[0] != local_38) {
      operator_delete(local_48[0]);
    }
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4);
  uVar4 = FUN_0017ccc0(*(undefined8 *)(this + 0x50));
  if ((char)uVar4 == '\0') {
    local_48[0] = local_38;
    FUN_001789a0(local_48,"FAIL! SHA256 is invalid","");
                    /* try { // try from 00178feb to 00178fef has its CatchHandler @ 001790f5 */
    FUN_00184550(this + 0x30,local_48);
    puVar8 = local_48[0];
    if (local_48[0] == local_38) {
      return uVar4;
    }
  }
  else {
    if (iVar1 < 1) {
LAB_00178f87:
      local_48[0] = local_38;
      FUN_001789a0(local_48,"FAIL! Invalid DEVINFO","");
                    /* try { // try from 00178fb2 to 00178fb6 has its CatchHandler @ 001790aa */
      FUN_00184550(this + 0x30,local_48);
      goto LAB_00178ef5;
    }
    iVar2 = *(int *)(param_1 + 0xc);
    if (*(int *)(param_1 + 8) != 0) {
      piVar5 = (int *)(param_1 + 0x14);
      do {
        if ((int *)(param_1 + (ulong)(iVar1 - 1) * 0xc + 0x14) == piVar5) goto LAB_00178f87;
        iVar3 = *piVar5;
        iVar2 = piVar5[1];
        piVar5 = piVar5 + 3;
      } while (iVar3 != 0);
    }
    __s = param_1 + (long)iVar2 + 8;
    pcVar7 = (char *)0xffffffffffffffff;
    local_68 = local_58;
    if (__s != (char *)0x0) {
      sVar6 = strlen(__s);
      pcVar7 = __s + sVar6;
    }
    FUN_001789a0(&local_68,__s,pcVar7);
    local_48[0] = local_38;
                    /* try { // try from 0017906c to 00179070 has its CatchHandler @ 001790f0 */
    FUN_001789a0(local_48,local_68,local_68 + local_60);
                    /* try { // try from 00179078 to 0017907c has its CatchHandler @ 001790ca */
    uVar4 = FUN_0017cd00(*(undefined8 *)(this + 0x50),local_48);
    if (local_48[0] != local_38) {
      operator_delete(local_48[0]);
    }
    puVar8 = local_68;
    if (local_68 == local_58) {
      return uVar4;
    }
  }
  operator_delete(puVar8);
  return uVar4;
}

