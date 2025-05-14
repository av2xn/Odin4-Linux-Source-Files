// Decompiled function: FUN_0017bc50


ulong FUN_0017bc50(long param_1)

{
  long lVar1;
  undefined auVar2 [16];
  
  lVar1 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::find
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                     (param_1 + 0x10),"meta-data/",0,10);
  if (lVar1 != -1) {
    return 1;
  }
  auVar2 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::find
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                      (param_1 + 0x10),"meta-data\\",0,10);
  return CONCAT71(auVar2._9_7_,auVar2._0_8_ != -1) & 0xffffffff;
}

