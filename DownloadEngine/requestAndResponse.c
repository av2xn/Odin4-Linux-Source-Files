// Decompiled function: requestAndResponse


/* DownloadEngine::requestAndResponse(int, int, int*, int*) */

undefined8 __thiscall
DownloadEngine::requestAndResponse
          (DownloadEngine *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int local_860;
  int local_85c;
  undefined *local_858 [2];
  undefined local_848 [16];
  int local_838;
  int local_834;
  undefined4 local_830 [512];
  
  lVar4 = 0;
  puVar6 = (undefined8 *)&local_838;
  for (lVar5 = 0x100; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  do {
    *(undefined4 *)((long)local_830 + lVar4) = *(undefined4 *)((long)param_4 + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x20);
  local_838 = param_1;
  local_834 = param_2;
  iVar2 = (**(code **)(**(long **)(this + 0x28) + 0x10))
                    (*(long **)(this + 0x28),&local_838,*(undefined4 *)(this + 0x58));
  if (iVar2 == *(int *)(this + 0x58)) {
    iVar2 = 2;
    do {
      iVar3 = (**(code **)(**(long **)(this + 0x28) + 0x20))
                        (*(long **)(this + 0x28),&local_860,0x40,60000,0);
      iVar1 = local_85c;
      if (iVar3 != 0) {
        if (iVar3 != 8) {
          return 0;
        }
        if (param_3 != (int *)0x0) {
          *param_3 = local_85c;
        }
        if ((local_860 != -1) && (param_1 == local_860)) {
          return 1;
        }
        local_858[0] = local_848;
        FUN_001789a0(local_858,"Fail request receive","");
                    /* try { // try from 001799a3 to 001799a7 has its CatchHandler @ 001799f4 */
        FUN_00184400(this + 0x30,local_858,iVar1);
        if (local_858[0] != local_848) {
          operator_delete(local_858[0]);
        }
        if (local_860 != -1) {
          return 0;
        }
        if (param_1 != 0x66) {
          return 0;
        }
        if (param_2 != 3) {
          return 0;
        }
        writeProtectionFail(this,local_85c);
        return 0;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else {
    local_858[0] = local_848;
    FUN_001789a0(local_858,"Fail request write","");
                    /* try { // try from 001798ee to 001798f2 has its CatchHandler @ 00179a12 */
    FUN_001843d0(this + 0x30,local_858);
    if (local_858[0] != local_848) {
      operator_delete(local_858[0]);
    }
  }
  return 0;
}

