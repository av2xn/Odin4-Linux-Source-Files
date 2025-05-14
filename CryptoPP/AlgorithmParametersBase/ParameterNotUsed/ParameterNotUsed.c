// Decompiled function: ParameterNotUsed


/* CryptoPP::AlgorithmParametersBase::ParameterNotUsed::ParameterNotUsed(char const*) */

void __thiscall
CryptoPP::AlgorithmParametersBase::ParameterNotUsed::ParameterNotUsed
          (ParameterNotUsed *this,char *param_1)

{
  long lVar1;
  size_t sVar2;
  long *plVar3;
  long **local_88;
  long *local_78;
  long local_70;
  long **local_68;
  long local_60;
  long *local_58;
  long local_50;
  undefined *local_48;
  long local_40;
  undefined local_38 [16];
  
  local_48 = local_38;
  FUN_0017bfe0(&local_48,"AlgorithmParametersBase: parameter \"","");
  sVar2 = strlen(param_1);
  if (0x7fffffffffffffffU - local_40 < sVar2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00182bce to 00182bd2 has its CatchHandler @ 00182bd3 */
    std::__throw_length_error("basic_string::append");
  }
                    /* try { // try from 00182a4f to 00182a53 has its CatchHandler @ 00182bd3 */
  plVar3 = (long *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                   _M_append((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                             &local_48,param_1,sVar2);
  local_68 = &local_58;
  if ((long **)*plVar3 == (long **)(plVar3 + 2)) {
    local_58 = (long *)plVar3[2];
    local_50 = plVar3[3];
  }
  else {
    local_58 = (long *)plVar3[2];
    local_68 = (long **)*plVar3;
  }
  local_60 = plVar3[1];
  *(undefined *)(plVar3 + 2) = 0;
  plVar3[1] = 0;
  *plVar3 = (long)(plVar3 + 2);
  if (9 < 0x7fffffffffffffffU - local_60) {
                    /* try { // try from 00182ac1 to 00182ac5 has its CatchHandler @ 00182bfd */
    plVar3 = (long *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                     _M_append((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                               &local_68,"\" not used",10);
    local_88 = &local_78;
    if ((long **)*plVar3 == (long **)(plVar3 + 2)) {
      local_78 = (long *)plVar3[2];
      local_70 = plVar3[3];
    }
    else {
      local_78 = (long *)plVar3[2];
      local_88 = (long **)*plVar3;
    }
    lVar1 = plVar3[1];
    *(undefined *)(plVar3 + 2) = 0;
    *plVar3 = (long)(plVar3 + 2);
    plVar3[1] = 0;
    *(undefined4 *)(this + 8) = 6;
    *(undefined ***)this = &PTR__Exception_00584338;
    *(ParameterNotUsed **)(this + 0x10) = this + 0x20;
                    /* try { // try from 00182b31 to 00182b35 has its CatchHandler @ 00182c15 */
    FUN_0017bfe0(this + 0x10,local_88,(long)local_88 + lVar1);
    if (local_88 != &local_78) {
      operator_delete(local_88);
    }
    if (local_68 != &local_58) {
      operator_delete(local_68);
    }
    if (local_48 != local_38) {
      operator_delete(local_48);
    }
    *(undefined ***)this = &PTR__ParameterNotUsed_005843d8;
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00182bf8 to 00182bfc has its CatchHandler @ 00182bfd */
  std::__throw_length_error("basic_string::append");
}

