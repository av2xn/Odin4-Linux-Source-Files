// Decompiled function: sendData


/* DownloadEngine::sendData(char*, int) */

undefined8 DownloadEngine::sendData(char *param_1,int param_2)

{
  int iVar1;
  undefined4 in_register_00000034;
  undefined local_40 [8];
  undefined *local_38 [2];
  undefined local_28 [24];
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
                    (*(long **)(param_1 + 0x28),CONCAT44(in_register_00000034,param_2),0x100000,
                     60000);
  if (iVar1 == 0x100000) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
                      (*(long **)(param_1 + 0x28),local_40,0x40,60000,0);
    if (iVar1 == 8) {
      return 1;
    }
    local_38[0] = local_28;
    FUN_001789a0(local_38,"transmitData Read Fail","");
                    /* try { // try from 00178d2c to 00178d30 has its CatchHandler @ 00178d44 */
    FUN_00184550(param_1 + 0x30,local_38);
  }
  else {
    local_38[0] = local_28;
    FUN_001789a0(local_38,"transmitData Write Fail","");
                    /* try { // try from 00178cbf to 00178cc3 has its CatchHandler @ 00178d62 */
    FUN_00184550(param_1 + 0x30,local_38);
  }
  if (local_38[0] != local_28) {
    operator_delete(local_38[0]);
  }
  return 0;
}

