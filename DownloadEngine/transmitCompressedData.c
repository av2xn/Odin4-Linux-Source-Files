// Decompiled function: transmitCompressedData


/* DownloadEngine::transmitCompressedData(std::shared_ptr<char>, FirmwareInfo const&) */

char __thiscall
DownloadEngine::transmitCompressedData
          (DownloadEngine *this,shared_ptr param_1,FirmwareInfo *param_2)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  undefined uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined4 in_register_00000034;
  int local_298;
  undefined4 local_294;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  FirmwareItem local_278 [536];
  undefined8 local_60;
  long *local_58;
  
  FirmwareItem::FirmwareItem(local_278,param_2);
  puVar4 = PTR___pthread_key_create_005b0e00;
  local_60 = *(undefined8 *)CONCAT44(in_register_00000034,param_1);
  plVar2 = (long *)((undefined8 *)CONCAT44(in_register_00000034,param_1))[1];
  if (plVar2 == (long *)0x0) {
    if (local_58 == (long *)0x0) goto LAB_0017a7a6;
    if (PTR___pthread_key_create_005b0e00 == (undefined *)0x0) {
LAB_0017a970:
      iVar9 = *(int *)(local_58 + 1);
      *(int *)(local_58 + 1) = iVar9 + -1;
      if (iVar9 == 1) {
        (**(code **)(*local_58 + 0x10))(local_58);
        iVar9 = *(int *)((long)local_58 + 0xc);
        *(int *)((long)local_58 + 0xc) = iVar9 + -1;
LAB_0017a9d5:
        if (iVar9 == 1) {
          (**(code **)(*local_58 + 0x18))(local_58);
        }
      }
    }
    else {
LAB_0017a77b:
      plVar11 = local_58 + 1;
      LOCK();
      *(int *)plVar11 = *(int *)plVar11 + -1;
      UNLOCK();
      if (*(int *)plVar11 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
        LOCK();
        piVar1 = (int *)((long)local_58 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        goto LAB_0017a9d5;
      }
    }
LAB_0017a785:
    local_58 = plVar2;
    if (plVar2 == (long *)0x0) goto LAB_0017a7a6;
LAB_0017a792:
    if (puVar4 == (undefined *)0x0) goto LAB_0017a924;
    LOCK();
    plVar11 = plVar2 + 1;
    *(int *)plVar11 = *(int *)plVar11 + -1;
    UNLOCK();
    if (*(int *)plVar11 != 0) goto LAB_0017a7a6;
    (**(code **)(*plVar2 + 0x10))(plVar2);
    LOCK();
    piVar1 = (int *)((long)plVar2 + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  else {
    plVar11 = plVar2 + 1;
    if (PTR___pthread_key_create_005b0e00 != (undefined *)0x0) {
      LOCK();
      *(int *)plVar11 = *(int *)plVar11 + 1;
      UNLOCK();
      if (local_58 != plVar2) {
        LOCK();
        *(int *)plVar11 = *(int *)plVar11 + 1;
        UNLOCK();
        if (local_58 != (long *)0x0) goto LAB_0017a77b;
        goto LAB_0017a785;
      }
      goto LAB_0017a792;
    }
    *(int *)(plVar2 + 1) = *(int *)(plVar2 + 1) + 1;
    if (plVar2 != local_58) {
      *(int *)(plVar2 + 1) = *(int *)(plVar2 + 1) + 1;
      if (local_58 != (long *)0x0) goto LAB_0017a970;
      goto LAB_0017a785;
    }
LAB_0017a924:
    iVar9 = *(int *)(plVar2 + 1);
    *(int *)(plVar2 + 1) = iVar9 + -1;
    if (iVar9 != 1) goto LAB_0017a7a6;
    (**(code **)(*plVar2 + 0x10))(plVar2);
    iVar9 = *(int *)((long)plVar2 + 0xc);
    *(int *)((long)plVar2 + 0xc) = iVar9 + -1;
  }
  if (iVar9 == 1) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
LAB_0017a7a6:
                    /* try { // try from 0017a7b3 to 0017a91e has its CatchHandler @ 0017aa1f */
  FUN_00184550(this + 0x30,param_2 + 0x30);
  while ((cVar5 = FUN_0017c4c0(local_278), cVar5 == '\0' &&
         (cVar6 = requestAndResponse(this,0x66,5,(int *)0x0,0), cVar6 != '\0'))) {
    uVar8 = FUN_0017c3e0(local_278,0x1e00000);
    iVar9 = FUN_0017c400(local_278,uVar8);
    local_290 = 0;
    local_288 = 0;
    local_280 = 0;
    local_298 = iVar9;
    local_294 = uVar8;
    cVar6 = requestAndResponse(this,0x66,6,(int *)0x0,&local_298);
    while( true ) {
      if (cVar6 == '\0') goto LAB_0017a8a0;
      if (iVar9 < 1) break;
      iVar10 = 0x100000;
      if (iVar9 < 0x100001) {
        iVar10 = iVar9;
      }
      iVar9 = iVar9 - iVar10;
      if (iVar9 == 0) {
        iVar10 = FUN_0017c650(local_278,uVar8,iVar10);
      }
      else {
        iVar10 = FUN_0017c650(local_278,0,iVar10);
      }
      cVar6 = sendData((char *)this,iVar10);
    }
    local_298 = 0;
    local_290 = *(undefined8 *)(param_2 + 0x50);
    uVar3 = local_288 >> 0x20;
    local_288 = CONCAT44((int)uVar3,*(undefined4 *)(param_2 + 0x58));
    local_294 = uVar8;
    uVar7 = FUN_0017c4c0(local_278);
    local_288 = (ulong)CONCAT14(uVar7,(undefined4)local_288);
    cVar6 = requestAndResponse(this,0x66,7,(int *)0x0,&local_298);
    if (cVar6 == '\0') break;
    FUN_0017d710(*(undefined8 *)(this + 0x50),uVar8);
  }
LAB_0017a8a0:
  FirmwareItem::~FirmwareItem(local_278);
  return cVar5;
}

