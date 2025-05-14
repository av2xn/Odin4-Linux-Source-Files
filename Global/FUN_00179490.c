// Decompiled function: FUN_00179490


undefined4 FUN_00179490(DownloadEngine *param_1)

{
  undefined4 uVar1;
  undefined *local_88 [2];
  undefined local_78 [88];
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return 0;
  }
                    /* try { // try from 001794b7 to 001794f9 has its CatchHandler @ 001795f9 */
  uVar1 = DownloadEngine::requestAndResponse(param_1,0x67,2,(int *)0x0,0);
  if ((char)uVar1 == '\0') {
    local_88[0] = local_78;
    FUN_001789a0(local_88,"FAIL reboot download","");
                    /* try { // try from 00179501 to 00179505 has its CatchHandler @ 00179526 */
    FUN_001843d0(param_1 + 0x30,local_88);
    if (local_88[0] != local_78) {
      operator_delete(local_88[0]);
      return uVar1;
    }
  }
  return uVar1;
}

