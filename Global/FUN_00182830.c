// Decompiled function: FUN_00182830


void FUN_00182830(undefined8 *param_1,undefined4 param_2,long *param_3)

{
  *param_1 = &PTR__Exception_00584338;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = param_1 + 4;
                    /* try { // try from 00182860 to 00182864 has its CatchHandler @ 0018286c */
  FUN_0017bfe0(param_1 + 2,*param_3,*param_3 + param_3[1]);
  return;
}

