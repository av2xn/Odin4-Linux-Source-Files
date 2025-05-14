// Decompiled function: FUN_0017bfe0


void FUN_0017bfe0(undefined8 *param_1,undefined *param_2,long param_3)

{
  undefined *__dest;
  ulong __n;
  ulong local_20;
  
  if ((param_2 == (undefined *)0x0) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  __n = param_3 - (long)param_2;
  local_20 = __n;
  if (__n < 0x10) {
    __dest = (undefined *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined *)*param_1;
      goto LAB_0017c02b;
    }
    if (__n == 0) goto LAB_0017c02b;
  }
  else {
    __dest = (undefined *)
             std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_create
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)param_1,
                        &local_20,0);
    *param_1 = __dest;
    param_1[2] = local_20;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined *)*param_1;
LAB_0017c02b:
  param_1[1] = local_20;
  __dest[local_20] = 0;
  return;
}

