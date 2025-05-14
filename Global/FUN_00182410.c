// Decompiled function: FUN_00182410


void FUN_00182410(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x20))(param_1,param_3,param_4);
  lVar1 = *param_1;
  if (*(code **)(lVar1 + 0x30) == FUN_00181e00) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x78);
    uVar2 = (**(code **)(lVar1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00182452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00182462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x30))(param_1,param_2);
  return;
}

