// Decompiled function: FUN_00181e30


void FUN_00181e30(long *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x88);
  uVar1 = (**(code **)(*param_1 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00181e56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar1);
  return;
}

