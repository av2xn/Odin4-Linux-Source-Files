// Decompiled function: transmitData


/* DownloadEngine::transmitData(std::shared_ptr<char>, FirmwareInfo const&) */

char __thiscall
DownloadEngine::transmitData(DownloadEngine *this,shared_ptr param_1,FirmwareInfo *param_2)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  undefined uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  undefined4 in_register_00000034;
  long local_298;
  undefined4 local_290;
  undefined4 local_28c;
  ulong local_288;
  undefined8 local_280;
  FirmwareItem local_278 [536];
  undefined8 local_60;
  long *local_58;
  
  FirmwareItem::FirmwareItem(local_278,param_2);
  puVar4 = PTR___pthread_key_create_005b0e00;
  local_60 = *(undefined8 *)CONCAT44(in_register_00000034,param_1);
  plVar2 = (long *)((undefined8 *)CONCAT44(in_register_00000034,param_1))[1];
  if (plVar2 == (long *)0x0) {
    if (local_58 == (long *)0x0) goto LAB_0017a486;
    if (PTR___pthread_key_create_005b0e00 == (undefined *)0x0) {
LAB_0017a62f:
      iVar9 = *(int *)(local_58 + 1);
      *(int *)(local_58 + 1) = iVar9 + -1;
      if (iVar9 == 1) {
        (**(code **)(*local_58 + 0x10))(local_58);
        iVar9 = *(int *)((long)local_58 + 0xc);
        *(int *)((long)local_58 + 0xc) = iVar9 + -1;
LAB_0017a694:
        if (iVar9 == 1) {
          (**(code **)(*local_58 + 0x18))(local_58);
        }
      }
    }
    else {
LAB_0017a45b:
      plVar10 = local_58 + 1;
      LOCK();
      *(int *)plVar10 = *(int *)plVar10 + -1;
      UNLOCK();
      if (*(int *)plVar10 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
        LOCK();
        piVar1 = (int *)((long)local_58 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        goto LAB_0017a694;
      }
    }
LAB_0017a465:
    local_58 = plVar2;
    if (plVar2 == (long *)0x0) goto LAB_0017a486;
LAB_0017a472:
    if (puVar4 == (undefined *)0x0) goto LAB_0017a5e3;
    LOCK();
    plVar10 = plVar2 + 1;
    *(int *)plVar10 = *(int *)plVar10 + -1;
    UNLOCK();
    if (*(int *)plVar10 != 0) goto LAB_0017a486;
    (**(code **)(*plVar2 + 0x10))(plVar2);
    LOCK();
    piVar1 = (int *)((long)plVar2 + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  else {
    plVar10 = plVar2 + 1;
    if (PTR___pthread_key_create_005b0e00 != (undefined *)0x0) {
      LOCK();
      *(int *)plVar10 = *(int *)plVar10 + 1;
      UNLOCK();
      if (local_58 != plVar2) {
        LOCK();
        *(int *)plVar10 = *(int *)plVar10 + 1;
        UNLOCK();
        if (local_58 != (long *)0x0) goto LAB_0017a45b;
        goto LAB_0017a465;
      }
      goto LAB_0017a472;
    }
    *(int *)(plVar2 + 1) = *(int *)(plVar2 + 1) + 1;
    if (local_58 != plVar2) {
      *(int *)(plVar2 + 1) = *(int *)(plVar2 + 1) + 1;
      if (local_58 != (long *)0x0) goto LAB_0017a62f;
      goto LAB_0017a465;
    }
LAB_0017a5e3:
    iVar9 = *(int *)(plVar2 + 1);
    *(int *)(plVar2 + 1) = iVar9 + -1;
    if (iVar9 != 1) goto LAB_0017a486;
    (**(code **)(*plVar2 + 0x10))(plVar2);
    iVar9 = *(int *)((long)plVar2 + 0xc);
    *(int *)((long)plVar2 + 0xc) = iVar9 + -1;
  }
  if (iVar9 == 1) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
LAB_0017a486:
                    /* try { // try from 0017a493 to 0017a5dd has its CatchHandler @ 0017a6de */
  FUN_00184550(this + 0x30,param_2 + 0x30);
  while ((cVar5 = FUN_0017c4c0(local_278), cVar5 == '\0' &&
         (cVar6 = requestAndResponse(this,0x66,0,(int *)0x0,0), cVar6 != '\0'))) {
    uVar8 = FUN_0017c3e0(local_278,0x1e00000);
    cVar6 = requestAndResponse(this,0x66,2,(int *)0x0,(uVar8 - 1 & 0xfffe0000) + 0x20000);
    uVar3 = uVar8;
    if (cVar6 == '\0') break;
    for (; 0 < (int)uVar3; uVar3 = uVar3 - uVar11) {
      uVar11 = 0x100000;
      if ((int)uVar3 < 0x100001) {
        uVar11 = uVar3;
      }
      iVar9 = FUN_0017c4d0(local_278,uVar11);
      cVar6 = sendData((char *)this,iVar9);
      if (cVar6 == '\0') goto LAB_0017a545;
    }
    local_280 = 0;
    local_298 = (ulong)uVar8 << 0x20;
    local_290 = *(undefined4 *)(param_2 + 0x50);
    local_28c = *(undefined4 *)(param_2 + 0x54);
    local_288 = (ulong)*(uint *)(param_2 + 0x58);
    uVar7 = FUN_0017c4c0(local_278);
    local_288 = (ulong)CONCAT14(uVar7,(undefined4)local_288);
    cVar6 = requestAndResponse(this,0x66,3,(int *)0x0,(int *)&local_298);
    if (cVar6 == '\0') break;
    FUN_0017d710(*(undefined8 *)(this + 0x50),uVar8);
  }
LAB_0017a545:
  FirmwareItem::~FirmwareItem(local_278);
  return cVar5;
}

