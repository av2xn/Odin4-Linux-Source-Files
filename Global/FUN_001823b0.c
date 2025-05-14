// Decompiled function: FUN_001823b0


void FUN_001823b0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x20))(param_1,param_3,param_4);
  lVar1 = *param_1;
  if (*(code **)(lVar1 + 0x68) == FUN_00181e30) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x88);
    uVar2 = (**(code **)(lVar1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x001823f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0018240a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x68))(param_1,param_2);
  return;
}

