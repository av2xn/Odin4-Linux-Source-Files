// Decompiled function: FUN_00181d30


undefined4 FUN_00181d30(FirmwareData *param_1,basic_string *param_2)

{
  undefined4 uVar1;
  undefined *local_38 [2];
  undefined auStack_28 [16];
  
  uVar1 = 0;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = FirmwareData::parseBinary(param_1,param_2);
    if ((char)uVar1 != '\0') {
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)(param_1 + 0x88),
                 param_2);
      return uVar1;
    }
    std::operator+(local_38,"Fail parse ",param_2);
                    /* try { // try from 00181d80 to 00181d84 has its CatchHandler @ 00181dc3 */
    FUN_00184440(FirmwareData::TAG_abi_cxx11_,local_38);
    if (local_38[0] != auStack_28) {
      operator_delete(local_38[0]);
      return uVar1;
    }
  }
  return uVar1;
}

