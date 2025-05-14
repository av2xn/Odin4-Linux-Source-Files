// Decompiled function: receivePitInfo


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DownloadEngine::receivePitInfo() */

undefined4 DownloadEngine::receivePitInfo(void)

{
  long *plVar1;
  int *piVar2;
  void *pvVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  DownloadEngine *in_RDI;
  int iVar8;
  DownloadEngine *pDVar9;
  int local_8c;
  undefined8 local_88;
  long *local_80;
  undefined *local_78 [2];
  undefined local_68 [16];
  undefined *local_58 [2];
  undefined local_48 [24];
  
  cVar4 = FUN_0017c840(*(undefined8 *)(in_RDI + 0x50));
  if (cVar4 != '\0') {
    pDVar9 = in_RDI + 0x30;
    local_58[0] = local_48;
    FUN_001789a0(local_58,"Erase...","");
                    /* try { // try from 00179fb6 to 00179fba has its CatchHandler @ 0017a3b7 */
    FUN_00184550(pDVar9,local_58);
    if (local_58[0] != local_48) {
      operator_delete(local_58[0]);
    }
    uVar5 = requestAndResponse(in_RDI,100,7,&local_8c,0);
    iVar8 = local_8c;
    if ((char)uVar5 == '\0') {
      local_58[0] = local_48;
      FUN_001789a0(local_58,"FAIL!(Erase)","");
                    /* try { // try from 0017a018 to 0017a01c has its CatchHandler @ 0017a3d9 */
      FUN_00184550(pDVar9,local_58);
      goto LAB_0017a01d;
    }
    local_58[0] = local_48;
    FUN_001789a0(local_58,"ERASE_SECTOR: ","");
                    /* try { // try from 0017a1e5 to 0017a1e9 has its CatchHandler @ 0017a3d3 */
    FUN_00184450(pDVar9,local_58,iVar8);
    if (local_58[0] != local_48) {
      operator_delete(local_58[0]);
    }
  }
  pDVar9 = in_RDI + 0x30;
  local_58[0] = local_48;
  FUN_001789a0(local_58,"Receive PIT Info","");
                    /* try { // try from 00179ee0 to 00179ee4 has its CatchHandler @ 0017a3cf */
  FUN_00184550(pDVar9,local_58);
  if (local_58[0] != local_48) {
    operator_delete(local_58[0]);
  }
  uVar5 = requestAndResponse(in_RDI,0x65,1,&local_8c,0);
  if ((char)uVar5 == '\0') {
    local_58[0] = local_48;
    FUN_001789a0(local_58,"fail receive pit info request","");
                    /* try { // try from 0017a30d to 0017a311 has its CatchHandler @ 0017a3d7 */
    FUN_001843d0(pDVar9,local_58);
    goto LAB_0017a01d;
  }
  if (0x100000 < local_8c) {
    local_58[0] = local_48;
    FUN_001789a0(local_58,"fail receive pit info size","");
                    /* try { // try from 00179f57 to 00179f5b has its CatchHandler @ 0017a3d1 */
    FUN_00184400(pDVar9,local_58,local_8c);
    if (local_58[0] != local_48) {
      operator_delete(local_58[0]);
    }
    return 0;
  }
  iVar8 = 0;
  pvVar7 = operator_new__((long)(local_8c + 500));
  pvVar3 = pvVar7;
  while ((0 < local_8c && (cVar4 = request(in_RDI,0x65,2,iVar8), cVar4 != '\0'))) {
    iVar6 = 500;
    if (local_8c < 0x1f5) {
      iVar6 = local_8c;
    }
    iVar8 = iVar8 + 1;
    iVar6 = (**(code **)(**(long **)(in_RDI + 0x28) + 0x20))
                      (*(long **)(in_RDI + 0x28),pvVar3,iVar6,60000);
    local_8c = local_8c - iVar6;
    pvVar3 = (void *)((long)pvVar3 + 500);
  }
  FUN_0017be00(in_RDI + 8,pvVar7);
  operator_delete__(pvVar7);
  if (*(long *)(*(long *)(in_RDI + 0x50) + 0xd0) != 0) {
    FUN_0017e130(&local_88);
                    /* try { // try from 0017a107 to 0017a13a has its CatchHandler @ 0017a3b2 */
    uVar5 = FUN_0017bd10(in_RDI + 8,local_88);
    if ((char)uVar5 == '\0') {
      local_78[0] = local_68;
      FUN_001789a0(local_78,"Partition is not same. Please check your binaries.","");
                    /* try { // try from 0017a141 to 0017a145 has its CatchHandler @ 0017a372 */
      FUN_001843d0(pDVar9,local_78);
      if (local_78[0] != local_68) {
        operator_delete(local_78[0]);
      }
                    /* try { // try from 0017a15c to 0017a160 has its CatchHandler @ 0017a3b2 */
      closeConnection();
      if (local_80 == (long *)0x0) {
        return uVar5;
      }
      if (PTR___pthread_key_create_005b0e00 == (undefined *)0x0) {
        iVar8 = *(int *)(local_80 + 1);
        *(int *)(local_80 + 1) = iVar8 + -1;
        if (iVar8 != 1) {
          return uVar5;
        }
        (**(code **)(*local_80 + 0x10))(local_80);
        iVar8 = *(int *)((long)local_80 + 0xc);
        *(int *)((long)local_80 + 0xc) = iVar8 + -1;
      }
      else {
        LOCK();
        plVar1 = local_80 + 1;
        *(int *)plVar1 = *(int *)plVar1 + -1;
        UNLOCK();
        if (*(int *)plVar1 != 0) {
          return uVar5;
        }
        (**(code **)(*local_80 + 0x10))(local_80);
        LOCK();
        piVar2 = (int *)((long)local_80 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
      }
      if (iVar8 != 1) {
        return uVar5;
      }
      (**(code **)(*local_80 + 0x18))(local_80);
      return uVar5;
    }
    local_58[0] = local_48;
                    /* try { // try from 0017a22a to 0017a22e has its CatchHandler @ 0017a3b2 */
    FUN_001789a0(local_58,"Partition is same.","");
                    /* try { // try from 0017a235 to 0017a239 has its CatchHandler @ 0017a39f */
    FUN_00184550(pDVar9,local_58);
    if (local_58[0] != local_48) {
      operator_delete(local_58[0]);
    }
    if (local_80 != (long *)0x0) {
      if (PTR___pthread_key_create_005b0e00 == (undefined *)0x0) {
        iVar8 = *(int *)(local_80 + 1);
        *(int *)(local_80 + 1) = iVar8 + -1;
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 0x10))(local_80);
          iVar8 = *(int *)((long)local_80 + 0xc);
          *(int *)((long)local_80 + 0xc) = iVar8 + -1;
          goto LAB_0017a284;
        }
      }
      else {
        LOCK();
        plVar1 = local_80 + 1;
        *(int *)plVar1 = *(int *)plVar1 + -1;
        UNLOCK();
        if (*(int *)plVar1 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
          LOCK();
          piVar2 = (int *)((long)local_80 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
LAB_0017a284:
          if (iVar8 == 1) {
            (**(code **)(*local_80 + 0x18))(local_80);
          }
        }
      }
    }
  }
  uVar5 = requestAndResponse(in_RDI,0x65,3,(int *)0x0,0);
  local_58[0] = local_48;
  FUN_001789a0(local_58,"success getpit","");
                    /* try { // try from 0017a2d7 to 0017a2db has its CatchHandler @ 0017a3d5 */
  FUN_00184550(pDVar9,local_58);
LAB_0017a01d:
  if (local_58[0] != local_48) {
    operator_delete(local_58[0]);
  }
  return uVar5;
}

