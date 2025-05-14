// Decompiled function: closeConnection


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DownloadEngine::closeConnection() */

undefined4 DownloadEngine::closeConnection(void)

{
  undefined4 uVar1;
  DownloadEngine *in_RDI;
  undefined *local_48 [2];
  undefined local_38 [24];
  
  local_48[0] = local_38;
  FUN_001789a0(local_48,"Close Connection","");
                    /* try { // try from 00179659 to 0017965d has its CatchHandler @ 0017971a */
  FUN_00184550(in_RDI + 0x30,local_48);
  if (local_48[0] != local_38) {
    operator_delete(local_48[0]);
  }
  uVar1 = requestAndResponse(in_RDI,0x67,0,(int *)0x0,0);
  if ((char)uVar1 == '\0') {
    local_48[0] = local_38;
    FUN_001789a0(local_48,"FAIL close","");
                    /* try { // try from 001796b0 to 001796b4 has its CatchHandler @ 001796fd */
    FUN_00184550(in_RDI + 0x30,local_48);
    if (local_48[0] != local_38) {
      operator_delete(local_48[0]);
    }
    return uVar1;
  }
                    /* try { // try from 001796ea to 001796ee has its CatchHandler @ 0017971c */
  requestAndResponse(in_RDI,0x67,1,(int *)0x0,0);
  return uVar1;
}

