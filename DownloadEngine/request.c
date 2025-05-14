// Decompiled function: request


/* DownloadEngine::request(int, int, int) */

undefined8 __thiscall
DownloadEngine::request(DownloadEngine *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *local_838 [2];
  undefined local_828 [16];
  int local_818;
  int local_814;
  int local_810;
  
  puVar3 = (undefined8 *)&local_818;
  for (lVar2 = 0x100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_818 = param_1;
  local_814 = param_2;
  local_810 = param_3;
  iVar1 = (**(code **)(**(long **)(this + 0x28) + 0x10))
                    (*(long **)(this + 0x28),&local_818,*(undefined4 *)(this + 0x58));
  if (iVar1 != *(int *)(this + 0x58)) {
    local_838[0] = local_828;
    FUN_001789a0(local_838,"Fail request write","");
                    /* try { // try from 00178c1c to 00178c20 has its CatchHandler @ 00178c4f */
    FUN_001843d0(this + 0x30,local_838);
    if (local_838[0] != local_828) {
      operator_delete(local_838[0]);
    }
    return 0;
  }
  return 1;
}

