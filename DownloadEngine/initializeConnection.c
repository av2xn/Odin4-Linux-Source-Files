// Decompiled function: initializeConnection


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DownloadEngine::initializeConnection() */

undefined4 DownloadEngine::initializeConnection(void)

{
  DownloadEngine *pDVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  DownloadEngine *in_RDI;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48 [2];
  undefined local_38 [24];
  
  pDVar1 = in_RDI + 0x30;
  local_48[0] = local_38;
  FUN_001789a0(local_48,"initializeConnection","");
                    /* try { // try from 00179a5b to 00179a5f has its CatchHandler @ 00179cc4 */
  FUN_00184550(pDVar1,local_48);
  if (local_48[0] != local_38) {
    operator_delete(local_48[0]);
  }
  cVar2 = requestAndResponse(in_RDI,100,0,&local_6c,4);
  if (cVar2 != '\0') {
    uVar3 = (uint)local_6c._2_2_;
    *(uint *)(in_RDI + 0x5c) = (uint)local_6c._2_2_;
    if (1 < local_6c._2_2_) {
      cVar2 = requestAndResponse(in_RDI,100,5,(int *)0x0,0x100000);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar3 = *(uint *)(in_RDI + 0x5c);
    }
    if (((int)uVar3 < 3) || ((local_6c._1_1_ & 0x80) == 0)) {
      in_RDI[0x60] = (DownloadEngine)0x0;
      cVar2 = (**(code **)(**(long **)(in_RDI + 0x28) + 0x30))();
    }
    else {
      in_RDI[0x60] = (DownloadEngine)0x1;
      cVar2 = (**(code **)(**(long **)(in_RDI + 0x28) + 0x30))();
    }
    if (((cVar2 != '\0') &&
        (*(code **)(**(long **)(in_RDI + 0x28) + 0x38) != UsbDevice::isSupportedZLP)) &&
       (cVar2 = (**(code **)(**(long **)(in_RDI + 0x28) + 0x38))(), cVar2 == '\0')) {
      local_48[0] = local_38;
      FUN_001789a0(local_48,"change RequestSize for systemLSI","");
                    /* try { // try from 00179c80 to 00179c84 has its CatchHandler @ 00179ca4 */
      FUN_00184440(pDVar1,local_48);
      if (local_48[0] != local_38) {
        operator_delete(local_48[0]);
      }
      *(undefined4 *)(in_RDI + 0x58) = 0x800;
    }
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_00180bf0(*(undefined8 *)(in_RDI + 0x50));
    local_68 = *(undefined8 *)(*(long *)(in_RDI + 0x50) + 0x120);
    uVar4 = requestAndResponse(in_RDI,100,2,(int *)0x0,(int *)&local_68);
    if ((char)uVar4 != '\0') {
      cVar2 = FUN_0017c860(*(undefined8 *)(in_RDI + 0x50));
      if (cVar2 == '\0') {
        return uVar4;
      }
      local_48[0] = local_38;
      FUN_001789a0(local_48,"Send lock information..","");
                    /* try { // try from 00179b9a to 00179b9e has its CatchHandler @ 00179cc2 */
      FUN_00184550(pDVar1,local_48);
      if (local_48[0] != local_38) {
        operator_delete(local_48[0]);
      }
      cVar2 = requestAndResponse(in_RDI,100,3,(int *)0x0,1);
      if (cVar2 != '\0') {
        return uVar4;
      }
      local_48[0] = local_38;
      FUN_001789a0(local_48,"Lock operation failed.","");
                    /* try { // try from 00179bf5 to 00179bf9 has its CatchHandler @ 00179cc6 */
      FUN_00184550(pDVar1,local_48);
      if (local_48[0] != local_38) {
        operator_delete(local_48[0]);
      }
    }
  }
  return 0;
}

