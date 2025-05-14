// Decompiled function: FUN_0017ccc0


bool FUN_0017ccc0(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    return false;
  }
  iVar1 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::compare
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                     (param_1 + 0x130),"NOTAPPLIED");
  return iVar1 != 0;
}

