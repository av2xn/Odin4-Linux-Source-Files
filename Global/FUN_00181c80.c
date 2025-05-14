// Decompiled function: FUN_00181c80


undefined4 FUN_00181c80(FirmwareData *param_1,basic_string *param_2)

{
  undefined4 uVar1;
  undefined *local_38 [2];
  undefined auStack_28 [16];
  
  uVar1 = 0;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = FirmwareData::parseBinary(param_1,param_2);
    if ((char)uVar1 != '\0') {
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)(param_1 + 0x68),
                 param_2);
      return uVar1;
    }
    std::operator+(local_38,"Fail parse ",param_1 + 0x68);
                    /* try { // try from 00181cd2 to 00181cd6 has its CatchHandler @ 00181d10 */
    FUN_001843d0(FirmwareData::TAG_abi_cxx11_,local_38);
    if (local_38[0] != auStack_28) {
      operator_delete(local_38[0]);
      return uVar1;
    }
  }
  return uVar1;
}

