// Decompiled function: uploadBinaries


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DownloadEngine::uploadBinaries() */

char DownloadEngine::uploadBinaries(void)

{
  long *plVar1;
  long *plVar2;
  DownloadEngine DVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  FirmwareInfo *pFVar10;
  shared_ptr sVar11;
  DownloadEngine *in_RDI;
  undefined *puVar12;
  int iVar13;
  char local_5a;
  timespec local_58;
  undefined local_48 [24];
  
  local_58.tv_sec = (__time_t)local_48;
  FUN_001789a0(&local_58,"Upload Binaries","");
                    /* try { // try from 0017aa7f to 0017aa83 has its CatchHandler @ 0017adca */
  FUN_00184550(in_RDI + 0x30,&local_58);
  if ((undefined *)local_58.tv_sec != local_48) {
    operator_delete((void *)local_58.tv_sec);
  }
  local_5a = FUN_0017d780(*(undefined8 *)(in_RDI + 0x50),in_RDI + 8);
  if (local_5a == '\0') {
    local_58.tv_sec = (__time_t)local_48;
    FUN_001789a0(&local_58,"Binary arrange fail. Binary is invalid","");
                    /* try { // try from 0017aad1 to 0017aad5 has its CatchHandler @ 0017adac */
    FUN_00184550(in_RDI + 0x30,&local_58);
    if ((undefined *)local_58.tv_sec != local_48) {
      operator_delete((void *)local_58.tv_sec);
    }
  }
  else {
    puVar6 = (undefined *)operator_new__(0x100000);
                    /* try { // try from 0017ab0f to 0017ab13 has its CatchHandler @ 0017ad83 */
    plVar7 = (long *)operator_new(0x18);
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((long)plVar7 + 0xc) = 1;
    plVar7[2] = (long)puVar6;
    *plVar7 = (long)&PTR___Sp_counted_deleter_00585538;
                    /* try { // try from 0017abb2 to 0017ac1b has its CatchHandler @ 0017ad70 */
    for (iVar13 = 0; iVar5 = FUN_0017d690(*(undefined8 *)(in_RDI + 0x50)),
        puVar12 = PTR___pthread_key_create_005b0e00, iVar13 < iVar5; iVar13 = iVar13 + 1) {
      local_58.tv_sec = 0;
      local_58.tv_nsec = 200000000;
      do {
        iVar5 = nanosleep(&local_58,&local_58);
        sVar11 = (shared_ptr)&local_58;
        if (iVar5 != -1) {
          DVar3 = in_RDI[0x60];
          goto joined_r0x0017ab44;
        }
        piVar8 = __errno_location();
      } while (*piVar8 == 4);
      DVar3 = in_RDI[0x60];
joined_r0x0017ab44:
      if ((DVar3 == (DownloadEngine)0x0) ||
         (lVar9 = FUN_0017d6c0(*(undefined8 *)(in_RDI + 0x50),iVar13),
         *(char *)(lVar9 + 0x62) == '\0')) {
                    /* try { // try from 0017ab51 to 0017ab55 has its CatchHandler @ 0017ad70 */
        pFVar10 = (FirmwareInfo *)FUN_0017d6c0(*(undefined8 *)(in_RDI + 0x50),iVar13);
        puVar12 = PTR___pthread_key_create_005b0e00;
        if (PTR___pthread_key_create_005b0e00 == (undefined *)0x0) {
          *(int *)(plVar7 + 1) = *(int *)(plVar7 + 1) + 1;
        }
        else {
          LOCK();
          *(int *)(plVar7 + 1) = *(int *)(plVar7 + 1) + 1;
          UNLOCK();
        }
        local_58.tv_sec = (__time_t)puVar6;
        local_58.tv_nsec = (long)plVar7;
                    /* try { // try from 0017ab7f to 0017ab83 has its CatchHandler @ 0017ad98 */
        cVar4 = transmitData(in_RDI,sVar11,pFVar10);
      }
      else {
        pFVar10 = (FirmwareInfo *)FUN_0017d6c0(*(undefined8 *)(in_RDI + 0x50),iVar13);
        puVar12 = PTR___pthread_key_create_005b0e00;
        if (PTR___pthread_key_create_005b0e00 == (undefined *)0x0) {
          *(int *)(plVar7 + 1) = *(int *)(plVar7 + 1) + 1;
        }
        else {
          LOCK();
          *(int *)(plVar7 + 1) = *(int *)(plVar7 + 1) + 1;
          UNLOCK();
        }
        local_58.tv_sec = (__time_t)puVar6;
        local_58.tv_nsec = (long)plVar7;
                    /* try { // try from 0017ac45 to 0017ac49 has its CatchHandler @ 0017adcc */
        cVar4 = transmitCompressedData(in_RDI,sVar11,pFVar10);
      }
      plVar2 = (long *)local_58.tv_nsec;
      if ((long *)local_58.tv_nsec != (long *)0x0) {
        if (puVar12 == (undefined *)0x0) {
          iVar5 = *(int *)(local_58.tv_nsec + 8);
          *(int *)(local_58.tv_nsec + 8) = iVar5 + -1;
          if (iVar5 == 1) {
            (**(code **)(*(long *)local_58.tv_nsec + 0x10))(local_58.tv_nsec);
            iVar5 = *(int *)((long)plVar2 + 0xc);
            *(int *)((long)plVar2 + 0xc) = iVar5 + -1;
            goto LAB_0017ac85;
          }
        }
        else {
          LOCK();
          plVar1 = (long *)(local_58.tv_nsec + 8);
          *(int *)plVar1 = *(int *)plVar1 + -1;
          UNLOCK();
          if (*(int *)plVar1 == 0) {
            (**(code **)(*(long *)local_58.tv_nsec + 0x10))(local_58.tv_nsec);
            LOCK();
            piVar8 = (int *)((long)plVar2 + 0xc);
            iVar5 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
LAB_0017ac85:
            if (iVar5 == 1) {
              (**(code **)(*plVar2 + 0x18))(plVar2);
            }
          }
        }
      }
      if (cVar4 == '\0') {
        local_5a = '\0';
        break;
      }
    }
    if (puVar12 == (undefined *)0x0) {
      iVar13 = *(int *)(plVar7 + 1);
      *(int *)(plVar7 + 1) = iVar13 + -1;
      if (iVar13 != 1) {
        return local_5a;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7);
      iVar13 = *(int *)((long)plVar7 + 0xc);
      *(int *)((long)plVar7 + 0xc) = iVar13 + -1;
    }
    else {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = *(int *)plVar2 + -1;
      UNLOCK();
      if (*(int *)plVar2 != 0) {
        return local_5a;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7);
      LOCK();
      piVar8 = (int *)((long)plVar7 + 0xc);
      iVar13 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
    }
    if (iVar13 == 1) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  return local_5a;
}

