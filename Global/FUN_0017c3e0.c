// Decompiled function: FUN_0017c3e0


ulong FUN_0017c3e0(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x210) & 0xffffffff;
  if ((long)(int)param_2 <= (long)*(ulong *)(param_1 + 0x210)) {
    uVar1 = (ulong)param_2;
  }
  return uVar1;
}

