// Decompiled function: setupConnection


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DownloadEngine::setupConnection() */

bool DownloadEngine::setupConnection(void)

{
  int iVar1;
  long in_RDI;
  bool bVar2;
  undefined8 local_38;
  undefined local_28 [16];
  
  local_38 = local_28;
  FUN_001789a0(&local_38,"Setup Connection","");
                    /* try { // try from 00178e04 to 00178e08 has its CatchHandler @ 00178e8e */
  FUN_00184550(in_RDI + 0x30,&local_38);
  if (local_38 != local_28) {
    operator_delete(local_38);
  }
  bVar2 = false;
  iVar1 = (**(code **)(**(long **)(in_RDI + 0x28) + 0x18))
                    (*(long **)(in_RDI + 0x28),&DAT_005b1478,4,60000);
  if (iVar1 == 4) {
    iVar1 = (**(code **)(**(long **)(in_RDI + 0x28) + 0x20))
                      (*(long **)(in_RDI + 0x28),&local_38,0x40,60000,0);
    if ((((iVar1 == 4) && ((char)local_38 == 'L')) && (bVar2 = false, local_38._1_1_ == 'O')) &&
       (local_38._2_1_ == 'K')) {
      bVar2 = local_38._3_1_ == 'E';
    }
  }
  return bVar2;
}

