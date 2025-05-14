// Decompiled function: ValueTypeMismatch


/* CryptoPP::NameValuePairs::ValueTypeMismatch::ValueTypeMismatch(std::__cxx11::basic_string<char,
   std::char_traits<char>, std::allocator<char> > const&, std::type_info const&, std::type_info
   const&) */

void __thiscall
CryptoPP::NameValuePairs::ValueTypeMismatch::ValueTypeMismatch
          (ValueTypeMismatch *this,basic_string *param_1,type_info *param_2,type_info *param_3)

{
  long lVar1;
  long *plVar2;
  size_t sVar3;
  char *__s;
  char *__s_00;
  long **local_f8;
  long *local_e8;
  long local_e0;
  long **local_d8;
  long local_d0;
  long *local_c8;
  long local_c0;
  long **local_b8;
  long local_b0;
  long *local_a8;
  long local_a0;
  long **local_98;
  long local_90;
  long *local_88;
  long local_80;
  long **local_78;
  long local_70;
  long *local_68;
  long local_60;
  undefined *local_58;
  long local_50;
  undefined auStack_48 [24];
  
  __s = *(char **)(param_3 + 8) + (**(char **)(param_3 + 8) == '*');
  __s_00 = *(char **)(param_2 + 8) + (**(char **)(param_2 + 8) == '*');
  std::operator+(&local_58,"NameValuePairs: type mismatch for \'",param_1);
  if (0x7fffffffffffffffU - local_50 < 0xb) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00183615 to 00183619 has its CatchHandler @ 0018361a */
    std::__throw_length_error("basic_string::append");
  }
                    /* try { // try from 001831b4 to 001831b8 has its CatchHandler @ 0018361a */
  plVar2 = (long *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                   _M_append((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                             &local_58,"\', stored \'",0xb);
  local_78 = &local_68;
  if ((long **)*plVar2 == (long **)(plVar2 + 2)) {
    local_68 = (long *)plVar2[2];
    local_60 = plVar2[3];
  }
  else {
    local_68 = (long *)plVar2[2];
    local_78 = (long **)*plVar2;
  }
  local_70 = plVar2[1];
  *(undefined *)(plVar2 + 2) = 0;
  *plVar2 = (long)(plVar2 + 2);
  plVar2[1] = 0;
  sVar3 = strlen(__s_00);
  if (0x7fffffffffffffffU - local_70 < sVar3) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00183626 to 0018362a has its CatchHandler @ 0018362b */
    std::__throw_length_error("basic_string::append");
  }
                    /* try { // try from 00183238 to 0018323c has its CatchHandler @ 0018362b */
  plVar2 = (long *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                   _M_append((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                             &local_78,__s_00,sVar3);
  local_98 = &local_88;
  if ((long **)*plVar2 == (long **)(plVar2 + 2)) {
    local_88 = (long *)plVar2[2];
    local_80 = plVar2[3];
  }
  else {
    local_88 = (long *)plVar2[2];
    local_98 = (long **)*plVar2;
  }
  local_90 = plVar2[1];
  *(undefined *)(plVar2 + 2) = 0;
  plVar2[1] = 0;
  *plVar2 = (long)(plVar2 + 2);
  if (0x7fffffffffffffffU - local_90 < 0x17) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00183601 to 00183605 has its CatchHandler @ 00183606 */
    std::__throw_length_error("basic_string::append");
  }
                    /* try { // try from 001832bb to 001832bf has its CatchHandler @ 00183606 */
  plVar2 = (long *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                   _M_append((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                             &local_98,"\', trying to retrieve \'",0x17);
  local_b8 = &local_a8;
  if ((long **)*plVar2 == (long **)(plVar2 + 2)) {
    local_a8 = (long *)plVar2[2];
    local_a0 = plVar2[3];
  }
  else {
    local_a8 = (long *)plVar2[2];
    local_b8 = (long **)*plVar2;
  }
  local_b0 = plVar2[1];
  *(undefined *)(plVar2 + 2) = 0;
  *plVar2 = (long)(plVar2 + 2);
  plVar2[1] = 0;
  sVar3 = strlen(__s);
  if (sVar3 <= 0x7fffffffffffffffU - local_b0) {
                    /* try { // try from 0018332d to 00183331 has its CatchHandler @ 00183573 */
    plVar2 = (long *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                     _M_append((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                               &local_b8,__s,sVar3);
    local_d8 = &local_c8;
    if ((long **)*plVar2 == (long **)(plVar2 + 2)) {
      local_c8 = (long *)plVar2[2];
      local_c0 = plVar2[3];
    }
    else {
      local_c8 = (long *)plVar2[2];
      local_d8 = (long **)*plVar2;
    }
    local_d0 = plVar2[1];
    *(undefined *)(plVar2 + 2) = 0;
    plVar2[1] = 0;
    *plVar2 = (long)(plVar2 + 2);
    if (local_d0 != 0x7fffffffffffffff) {
                    /* try { // try from 0018339b to 0018339f has its CatchHandler @ 001835df */
      plVar2 = (long *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>
                       ::_M_append((basic_string<char,std::char_traits<char>,std::allocator<char>> *
                                   )&local_d8,"\'",1);
      local_f8 = &local_e8;
      if ((long **)*plVar2 == (long **)(plVar2 + 2)) {
        local_e8 = (long *)plVar2[2];
        local_e0 = plVar2[3];
      }
      else {
        local_e8 = (long *)plVar2[2];
        local_f8 = (long **)*plVar2;
      }
      lVar1 = plVar2[1];
      *(undefined *)(plVar2 + 2) = 0;
      *plVar2 = (long)(plVar2 + 2);
      plVar2[1] = 0;
      *(undefined4 *)(this + 8) = 1;
      *(undefined ***)this = &PTR__Exception_00584338;
      *(ValueTypeMismatch **)(this + 0x10) = this + 0x20;
                    /* try { // try from 00183414 to 00183418 has its CatchHandler @ 00183633 */
      FUN_0017bfe0(this + 0x10,local_f8,(long)local_f8 + lVar1);
      *(undefined ***)this = &PTR__InvalidArgument_00584360;
      if (local_f8 != &local_e8) {
        operator_delete(local_f8);
      }
      if (local_d8 != &local_c8) {
        operator_delete(local_d8);
      }
      if (local_b8 != &local_a8) {
        operator_delete(local_b8);
      }
      if (local_98 != &local_88) {
        operator_delete(local_98);
      }
      if (local_78 != &local_68) {
        operator_delete(local_78);
      }
      if (local_58 != auStack_48) {
        operator_delete(local_58);
      }
      *(undefined ***)this = &PTR__ValueTypeMismatch_005843b0;
      *(type_info **)(this + 0x30) = param_2;
      *(type_info **)(this + 0x38) = param_3;
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001835da to 001835de has its CatchHandler @ 001835df */
    std::__throw_length_error("basic_string::append");
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0018356e to 00183572 has its CatchHandler @ 00183573 */
  std::__throw_length_error("basic_string::append");
}

