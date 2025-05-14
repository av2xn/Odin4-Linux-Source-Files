// Decompiled function: FUN_0017d780


undefined8
FUN_0017d780(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined param_5,
            undefined param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined in_stack_ffffffffffffff38;
  uint local_bc;
  undefined *local_98;
  ulong local_90;
  undefined local_88 [16];
  undefined *local_78 [2];
  undefined local_68 [16];
  undefined *local_58 [2];
  undefined auStack_48 [24];
  
  lVar6 = *(long *)(param_1 + 0x150);
  if ((*(long *)(param_1 + 0x158) - lVar6 >> 4) * 0x6db6db6db6db6db7 == 0) {
    return 1;
  }
  uVar4 = 0;
  local_bc = 0;
  do {
    local_98 = local_88;
    lVar6 = uVar4 * 0x70 + lVar6;
    FUN_0017bfe0(&local_98,*(long *)(lVar6 + 0x30),*(long *)(lVar6 + 0x30) + *(long *)(lVar6 + 0x38)
                );
    if (*(char *)(lVar6 + 0x62) != '\0') {
      uVar4 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::rfind
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_98
                         ,'.',0xffffffffffffffff);
      if (local_90 < uVar4) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0017dba0 to 0017dbbc has its CatchHandler @ 0017db88 */
        std::__throw_out_of_range_fmt
                  ("%s: __pos (which is %zu) > this->size() (which is %zu)",0x5a,(char)uVar4,
                   (char)local_90,param_5,param_6,in_stack_ffffffffffffff38);
      }
                    /* try { // try from 0017d9ee to 0017d9fd has its CatchHandler @ 0017db88 */
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_erase
                ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_98,uVar4,
                 local_90 - uVar4);
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_98,
                 (basic_string *)&local_98);
    }
    lVar2 = *(long *)(param_2 + 8);
    uVar4 = 0;
    if ((*(long *)(param_2 + 0x10) - lVar2 >> 2) * 0xf83e0f83e0f83e1 != 0) {
      do {
                    /* try { // try from 0017d892 to 0017d97f has its CatchHandler @ 0017db88 */
        iVar1 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                compare((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_98,
                        (char *)(lVar2 + 0x44 + uVar4 * 0x84));
        if (iVar1 == 0) {
          puVar5 = (undefined4 *)(uVar4 * 0x84 + *(long *)(param_2 + 8));
          *(undefined4 *)(lVar6 + 0x50) = *puVar5;
          *(undefined4 *)(lVar6 + 0x54) = puVar5[1];
          iVar1 = puVar5[2];
          *(int *)(lVar6 + 0x58) = iVar1;
          goto joined_r0x0017d8b6;
        }
        lVar2 = *(long *)(param_2 + 8);
        uVar4 = (ulong)((int)uVar4 + 1);
      } while (uVar4 < (ulong)((*(long *)(param_2 + 0x10) - lVar2 >> 2) * 0xf83e0f83e0f83e1));
    }
    iVar1 = *(int *)(lVar6 + 0x58);
joined_r0x0017d8b6:
    if (iVar1 < 0) {
      lVar2 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::rfind
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                         (lVar6 + 0x30),'.',0xffffffffffffffff);
      uVar4 = *(ulong *)(lVar6 + 0x38);
      uVar3 = lVar2 + 1;
      if (uVar4 < uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__throw_out_of_range_fmt
                  ("%s: __pos (which is %zu) > this->size() (which is %zu)",0xca,(char)uVar3,
                   (char)uVar4,param_5,param_6,in_stack_ffffffffffffff38);
      }
      local_78[0] = local_68;
      FUN_0017bfe0(local_78,*(long *)(lVar6 + 0x30) + uVar3,*(long *)(lVar6 + 0x30) + uVar4);
                    /* try { // try from 0017d98a to 0017d98e has its CatchHandler @ 0017dbbd */
      iVar1 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::compare
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)local_78,
                         "img");
      if (iVar1 == 0) {
        if (0x7fffffffffffffff - local_90 < 5) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0017db7d to 0017db81 has its CatchHandler @ 0017dbbd */
          std::__throw_length_error("basic_string::append");
        }
                    /* try { // try from 0017da2b to 0017dad5 has its CatchHandler @ 0017dbbd */
        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_append
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_98,
                   ".ext4",5);
        lVar2 = *(long *)(param_2 + 8);
        uVar4 = 0;
        if ((*(long *)(param_2 + 0x10) - lVar2 >> 2) * 0xf83e0f83e0f83e1 != 0) {
          do {
            iVar1 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                    compare((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                            &local_98,(char *)(lVar2 + 0x44 + uVar4 * 0x84));
            if (iVar1 == 0) {
              puVar5 = (undefined4 *)(uVar4 * 0x84 + *(long *)(param_2 + 8));
              *(undefined4 *)(lVar6 + 0x50) = *puVar5;
              *(undefined4 *)(lVar6 + 0x54) = puVar5[1];
              iVar1 = puVar5[2];
              *(int *)(lVar6 + 0x58) = iVar1;
              goto joined_r0x0017dab7;
            }
            lVar2 = *(long *)(param_2 + 8);
            uVar4 = (ulong)((int)uVar4 + 1);
          } while (uVar4 < (ulong)((*(long *)(param_2 + 0x10) - lVar2 >> 2) * 0xf83e0f83e0f83e1));
        }
      }
      iVar1 = *(int *)(lVar6 + 0x58);
joined_r0x0017dab7:
      if (iVar1 < 0) {
        std::operator+(local_58,"Unassigned file : ",
                       (basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                       (lVar6 + 0x30));
                    /* try { // try from 0017dae0 to 0017dae4 has its CatchHandler @ 0017db2a */
        FUN_001843d0(FirmwareData::TAG_abi_cxx11_,local_58);
        if (local_58[0] != auStack_48) {
          operator_delete(local_58[0]);
        }
        if (local_78[0] != local_68) {
          operator_delete(local_78[0]);
        }
        if (local_98 != local_88) {
          operator_delete(local_98);
        }
        return 0;
      }
      if (local_78[0] != local_68) {
        operator_delete(local_78[0]);
      }
    }
    if (local_98 != local_88) {
      operator_delete(local_98);
    }
    local_bc = local_bc + 1;
    uVar4 = (ulong)local_bc;
    lVar6 = *(long *)(param_1 + 0x150);
    if ((ulong)((*(long *)(param_1 + 0x158) - lVar6 >> 4) * 0x6db6db6db6db6db7) <= uVar4) {
      return 1;
    }
  } while( true );
}

