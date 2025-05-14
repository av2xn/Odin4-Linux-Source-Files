// Decompiled function: parseLZ4FrameHeader


/* FirmwareData::parseLZ4FrameHeader(char const*, FirmwareInfo&) */

undefined8 __thiscall
FirmwareData::parseLZ4FrameHeader(FirmwareData *this,char *param_1,FirmwareInfo *param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined *local_38 [2];
  undefined local_28 [24];
  
  if (*(int *)param_1 == 0x184d2204) {
    *(undefined2 *)(param_2 + 0x60) = 7;
    bVar1 = param_1[4];
    if ((bVar1 & 8) != 0) {
      cVar2 = param_1[5];
      if (cVar2 == 'P') {
        *(undefined4 *)(param_2 + 100) = 0x40000;
      }
      else if (cVar2 == '`') {
        *(undefined4 *)(param_2 + 100) = 0x100000;
      }
      else {
        if (cVar2 != '@') {
          local_38[0] = local_28;
          FUN_0017bfe0(local_38,"Unsupported block size","");
                    /* try { // try from 0017cf9a to 0017cf9e has its CatchHandler @ 0017d04c */
          FUN_001843d0(TAG_abi_cxx11_,local_38);
          goto LAB_0017cf1f;
        }
        *(undefined4 *)(param_2 + 100) = 0x10000;
      }
      lVar3 = *(long *)(param_1 + 6);
      *(long *)(param_2 + 0x68) = lVar3;
      *(ushort *)(param_2 + 0x60) = (-(ushort)((bVar1 & 1) == 0) & 0xfffc) + 0x13;
      if ((bVar1 & 0x10) != 0) {
        param_2[99] = (FirmwareInfo)0x1;
      }
      *(long *)(this + 0x120) = *(long *)(this + 0x120) + lVar3;
      param_2[0x62] = (FirmwareInfo)0x1;
      return 1;
    }
    local_38[0] = local_28;
    FUN_0017bfe0(local_38,"Contens size is not defined","");
                    /* try { // try from 0017d01c to 0017d020 has its CatchHandler @ 0017d06b */
    FUN_001843d0(TAG_abi_cxx11_,local_38);
  }
  else {
    local_38[0] = local_28;
    FUN_0017bfe0(local_38,"File Format Error","");
                    /* try { // try from 0017cf1a to 0017cf1e has its CatchHandler @ 0017d069 */
    FUN_001843d0(TAG_abi_cxx11_,local_38);
  }
LAB_0017cf1f:
  if (local_38[0] != local_28) {
    operator_delete(local_38[0]);
  }
  return 0;
}

