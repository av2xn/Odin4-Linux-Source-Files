// Decompiled function: parseBinary


/* FirmwareData::parseBinary(std::__cxx11::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&) */

ulong __thiscall FirmwareData::parseBinary(FirmwareData *this,basic_string *param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  long **pplVar7;
  undefined in_R8B;
  undefined in_R9B;
  char *pcVar8;
  undefined in_stack_ffffffffffffff58;
  char *local_98;
  long local_90;
  char local_88 [16];
  long **local_78;
  long local_70;
  long *local_68;
  long local_60;
  long **local_58;
  long local_50;
  long *local_48 [3];
  
  if (*(ulong *)(param_1 + 8) < 4) {
    return 0;
  }
  uVar3 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::rfind
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)param_1,'.',
                     0xffffffffffffffff);
  if (uVar3 == 0xffffffffffffffff) {
    uVar3 = parseBinaryInternal(this,param_1);
    return uVar3;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  uVar5 = uVar3 + 1;
  if (uVar1 < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)",0xca,(char)uVar5,(char)uVar1
               ,in_R8B,in_R9B,in_stack_ffffffffffffff58);
  }
  local_98 = local_88;
  FUN_0017bfe0(&local_98,*(long *)param_1 + uVar5,uVar1 + *(long *)param_1);
  pcVar8 = local_98 + local_90;
  for (pcVar6 = local_98; pcVar8 != pcVar6; pcVar6 = pcVar6 + 1) {
    iVar2 = toupper((int)*pcVar6);
    *pcVar6 = (char)iVar2;
  }
                    /* try { // try from 0018182e to 00181863 has its CatchHandler @ 00181a34 */
  iVar2 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::compare
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_98,
                     "GZ");
  if (iVar2 == 0) {
    local_58 = local_48;
    if (*(ulong *)(param_1 + 8) < uVar3) {
      uVar3 = *(ulong *)(param_1 + 8);
    }
    FUN_0017bfe0(&local_58,*(long *)param_1,*(long *)param_1 + uVar3);
                    /* try { // try from 0018186d to 0018187c has its CatchHandler @ 00181a54 */
    extractGzipFile(this,param_1,(basic_string *)&local_58);
    uVar3 = parseBinaryInternal(this,(basic_string *)&local_58);
    pplVar7 = local_58;
    if (local_58 == local_48) goto LAB_00181899;
  }
  else {
                    /* try { // try from 001818d2 to 00181906 has its CatchHandler @ 00181a34 */
    iVar2 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::compare
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_98,
                       "TGZ");
    if (iVar2 != 0) {
                    /* try { // try from 001819c6 to 001819ca has its CatchHandler @ 00181a34 */
      uVar3 = parseBinaryInternal(this,param_1);
      goto LAB_00181899;
    }
    local_58 = local_48;
    uVar5 = *(ulong *)(param_1 + 8);
    if (uVar3 <= *(ulong *)(param_1 + 8)) {
      uVar5 = uVar3;
    }
    FUN_0017bfe0(&local_58,*(long *)param_1,uVar5 + *(long *)param_1);
    if (0x7fffffffffffffffU - local_50 < 4) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00181a2f to 00181a33 has its CatchHandler @ 001819f7 */
      std::__throw_length_error("basic_string::append");
    }
                    /* try { // try from 0018192f to 00181933 has its CatchHandler @ 001819f7 */
    plVar4 = (long *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                     _M_append((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                               &local_58,".tar",4);
    local_78 = &local_68;
    if ((long **)*plVar4 == (long **)(plVar4 + 2)) {
      local_68 = (long *)plVar4[2];
      local_60 = plVar4[3];
    }
    else {
      local_68 = (long *)plVar4[2];
      local_78 = (long **)*plVar4;
    }
    local_70 = plVar4[1];
    *(undefined *)(plVar4 + 2) = 0;
    *plVar4 = (long)(plVar4 + 2);
    plVar4[1] = 0;
    if (local_58 != local_48) {
      operator_delete(local_58);
    }
                    /* try { // try from 00181995 to 001819a4 has its CatchHandler @ 00181a56 */
    extractGzipFile(this,param_1,(basic_string *)&local_78);
    uVar3 = parseBinaryInternal(this,(basic_string *)&local_78);
    pplVar7 = local_78;
    if (local_78 == &local_68) goto LAB_00181899;
  }
  operator_delete(pplVar7);
  uVar3 = uVar3 & 0xff;
LAB_00181899:
  if (local_98 != local_88) {
    operator_delete(local_98);
    uVar3 = uVar3 & 0xff;
  }
  return uVar3;
}

