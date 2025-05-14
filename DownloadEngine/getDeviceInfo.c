// Decompiled function: getDeviceInfo


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DownloadEngine::getDeviceInfo() */

undefined8 DownloadEngine::getDeviceInfo(void)

{
  undefined8 uVar1;
  long in_RDI;
  
  if (*(int *)(in_RDI + 0x5c) < 4) {
    return 1;
  }
  uVar1 = FUN_00179740();
  return uVar1;
}

