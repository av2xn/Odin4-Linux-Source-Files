// Decompiled function: FUN_0017d6c0


long FUN_0017d6c0(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined param_5,
                 undefined param_6)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x150);
  uVar2 = (*(long *)(param_1 + 0x158) - lVar1 >> 4) * 0x6db6db6db6db6db7;
  if ((ulong)(long)param_2 < uVar2) {
    return (long)param_2 * 0x70 + lVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_out_of_range_fmt
            ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",
             (char)param_2,(char)uVar2,(char)lVar1,param_5,param_6);
}

