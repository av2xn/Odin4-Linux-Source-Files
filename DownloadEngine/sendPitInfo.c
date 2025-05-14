// Decompiled function: sendPitInfo


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DownloadEngine::sendPitInfo() */

ulong DownloadEngine::sendPitInfo(void)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  ulong uVar4;
  int iVar5;
  DownloadEngine *in_RDI;
  char *local_38;
  long *local_30;
  char local_28 [24];
  
  if (*(long *)(*(long *)(in_RDI + 0x50) + 0x110) == 0) {
    return 1;
  }
  local_38 = local_28;
  FUN_001789a0(&local_38,"Set Partition","");
                    /* try { // try from 00179d1c to 00179d20 has its CatchHandler @ 00179e71 */
  FUN_00184550(in_RDI + 0x30,&local_38);
  if (local_38 != local_28) {
    operator_delete(local_38);
  }
  cVar3 = requestAndResponse(in_RDI,0x65,0,(int *)0x0,0);
  if ((cVar3 == '\0') ||
     (cVar3 = requestAndResponse(in_RDI,0x65,2,(int *)0x0,*(int *)(*(long *)(in_RDI + 0x50) + 0x110)
                                ), cVar3 == '\0')) {
    return 0;
  }
  FUN_0017de40(&local_38,*(undefined8 *)(in_RDI + 0x50));
                    /* try { // try from 00179d9a to 00179e1e has its CatchHandler @ 00179e57 */
  uVar4 = sendPitData(in_RDI,local_38,(int)*(undefined8 *)(*(long *)(in_RDI + 0x50) + 0x110));
  if ((char)uVar4 != '\0') {
    uVar4 = requestAndResponse(in_RDI,0x65,3,(int *)0x0,*(int *)(*(long *)(in_RDI + 0x50) + 0x110));
  }
  if (local_30 == (long *)0x0) {
    return uVar4;
  }
  if (PTR___pthread_key_create_005b0e00 == (undefined *)0x0) {
    iVar5 = *(int *)(local_30 + 1);
    *(int *)(local_30 + 1) = iVar5 + -1;
    if (iVar5 != 1) {
      return uVar4;
    }
    (**(code **)(*local_30 + 0x10))(local_30);
    iVar5 = *(int *)((long)local_30 + 0xc);
    *(int *)((long)local_30 + 0xc) = iVar5 + -1;
  }
  else {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    UNLOCK();
    if (*(int *)plVar1 != 0) {
      return uVar4;
    }
    (**(code **)(*local_30 + 0x10))(local_30);
    LOCK();
    piVar2 = (int *)((long)local_30 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  if (iVar5 != 1) {
    return uVar4 & 0xff;
  }
  (**(code **)(*local_30 + 0x18))(local_30);
  return uVar4 & 0xff;
}

