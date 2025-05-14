// Decompiled function: FUN_00180bf0


void FUN_00180bf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  __normal_iterator _Var4;
  ulong uVar5;
  undefined4 extraout_var;
  undefined8 *puVar6;
  undefined8 *puVar7;
  random_access_iterator_tag rVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puStack_70;
  undefined *local_58;
  ulong local_50;
  undefined local_48 [24];
  
  if ((*(long *)(param_1 + 0x168) != *(long *)(param_1 + 0x170)) &&
     (puVar12 = *(undefined8 **)(param_1 + 0x150), puVar12 != *(undefined8 **)(param_1 + 0x158))) {
    do {
      rVar8 = (random_access_iterator_tag)param_4;
      puStack_70 = (undefined8 *)0x180c70;
      local_58 = local_48;
      FUN_0017bfe0(&local_58,puVar12[6],puVar12[6] + puVar12[7]);
      if (*(char *)((long)puVar12 + 0x62) != '\0') {
        uVar5 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::rfind
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                           &local_58,'.',0xffffffffffffffff);
        if (local_50 < uVar5) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00180f93 to 00180f97 has its CatchHandler @ 00180f98 */
          std::__throw_out_of_range_fmt
                    ("%s: __pos (which is %zu) > this->size() (which is %zu)",0x5a,(char)uVar5,
                     (char)local_50,(char)param_5,(char)param_6);
        }
        uVar9 = local_50;
                    /* try { // try from 00180ca4 to 00180cb3 has its CatchHandler @ 00180f98 */
        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_erase
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_58,uVar5
                   ,local_50 - uVar5);
        rVar8 = (random_access_iterator_tag)uVar9;
        puStack_70 = (undefined8 *)0x180cb4;
        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_58,
                   (basic_string *)&local_58);
      }
      lVar1 = *(long *)(param_1 + 0x170);
      _Var4 = std::
              __find_if<__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>*,std::vector<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>,__gnu_cxx::__ops::_Iter_equals_val<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const>>
                        ((__normal_iterator)*(undefined8 *)(param_1 + 0x168),
                         (__normal_iterator)lVar1,(_Iter_equals_val)&local_58,rVar8);
      if (lVar1 == CONCAT44(extraout_var,_Var4)) {
        if (*(char *)((long)puVar12 + 0x62) == '\0') {
          *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) - puVar12[4];
        }
        else {
          *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) - puVar12[0xd];
        }
        puVar10 = *(undefined8 **)(param_1 + 0x158);
        puVar11 = puVar12 + 0xe;
        if (puVar10 != puVar11) {
          puStack_70 = (undefined8 *)0x6db6db6db6db6db7;
          param_5 = (long)puVar10 - (long)puVar11;
          puVar11 = puVar10;
          if (0 < (param_5 >> 4) * 0x6db6db6db6db6db7) {
            puVar11 = (undefined8 *)((long)puVar12 + param_5);
            puVar10 = puVar12;
            do {
              puVar7 = (undefined8 *)puVar10[0xe];
              puVar2 = puVar10 + 0x10;
              puVar6 = (undefined8 *)*puVar10;
              if (puVar2 == puVar7) {
                std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                _M_assign((basic_string<char,std::char_traits<char>,std::allocator<char>> *)puVar10,
                          (basic_string *)(puVar10 + 0xe));
                puVar6 = (undefined8 *)puVar10[0xe];
              }
              else {
                if (puVar10 + 2 == puVar6) {
                  *puVar10 = puVar7;
                  puVar10[1] = puVar10[0xf];
                  puVar10[2] = puVar10[0x10];
                }
                else {
                  *puVar10 = puVar7;
                  uVar3 = puVar10[2];
                  puVar10[1] = puVar10[0xf];
                  puVar10[2] = puVar10[0x10];
                  if (puVar6 != (undefined8 *)0x0) {
                    puVar10[0xe] = puVar6;
                    puVar10[0x10] = uVar3;
                    goto LAB_00180d72;
                  }
                }
                puVar10[0xe] = puVar2;
                puVar6 = puVar2;
              }
LAB_00180d72:
              param_6 = puVar10 + 0xe;
              puVar10[0xf] = 0;
              *(undefined *)puVar6 = 0;
              puStack_70 = puVar10 + 0x16;
              puVar2 = (undefined8 *)puVar10[0x14];
              puVar10[4] = puVar10[0x12];
              puVar10[5] = puVar10[0x13];
              puVar7 = (undefined8 *)puVar10[6];
              if (puStack_70 == puVar2) {
                std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                _M_assign((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                          (puVar10 + 6),(basic_string *)(puVar10 + 0x14));
                puVar7 = (undefined8 *)puVar10[0x14];
              }
              else {
                if (puVar7 == puVar10 + 8) {
                  puVar10[6] = puVar2;
                  puVar10[7] = puVar10[0x15];
                  puVar10[8] = puVar10[0x16];
                }
                else {
                  puVar10[6] = puVar2;
                  uVar3 = puVar10[8];
                  puVar10[7] = puVar10[0x15];
                  puVar10[8] = puVar10[0x16];
                  if (puVar7 != (undefined8 *)0x0) {
                    puVar10[0x14] = puVar7;
                    puVar10[0x16] = uVar3;
                    goto LAB_00180df0;
                  }
                }
                puVar10[0x14] = puStack_70;
                puVar7 = puStack_70;
              }
LAB_00180df0:
              puVar10[0x15] = 0;
              *(undefined *)puVar7 = 0;
              *(undefined4 *)(puVar10 + 10) = *(undefined4 *)(puVar10 + 0x18);
              puVar10[0xd] = puVar10[0x1b];
              *(undefined4 *)((long)puVar10 + 0x54) = *(undefined4 *)((long)puVar10 + 0xc4);
              *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)(puVar10 + 0x19);
              puVar10[0xc] = puVar10[0x1a];
              puVar10 = param_6;
            } while (puVar11 != param_6);
            puVar11 = *(undefined8 **)(param_1 + 0x158);
          }
        }
        puVar10 = (undefined8 *)puVar11[-8];
        *(undefined8 **)(param_1 + 0x158) = puVar11 + -0xe;
        if (puVar10 != puVar11 + -6) {
          operator_delete(puVar10);
        }
        if ((undefined8 *)puVar11[-0xe] != puVar11 + -0xc) {
          operator_delete((undefined8 *)puVar11[-0xe]);
        }
      }
      else {
        puVar12 = puVar12 + 0xe;
      }
      if (local_58 != local_48) {
        operator_delete(local_58);
      }
      param_4 = puStack_70;
    } while (*(undefined8 **)(param_1 + 0x158) != puVar12);
  }
  return;
}

