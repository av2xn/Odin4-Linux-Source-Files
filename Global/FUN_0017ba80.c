// Decompiled function: FUN_0017ba80


ulong FUN_0017ba80(long param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined in_R8B;
  undefined in_R9B;
  undefined in_stack_ffffffffffffffb8;
  char *__s1;
  ulong local_40;
  char local_38 [16];
  
  if ((DAT_005b2260 == '\0') && (iVar2 = __cxa_guard_acquire(&DAT_005b2260), iVar2 != 0)) {
    DAT_005b2280 = &DAT_005b2290;
                    /* try { // try from 0017bbb7 to 0017bbbb has its CatchHandler @ 0017bc15 */
    FUN_0017b430(&DAT_005b2280,&DAT_00300cc5,&DAT_00300cc9);
    __cxa_guard_release(&DAT_005b2260);
    __cxa_atexit(std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                 ~basic_string,&DAT_005b2280,&__dso_handle);
  }
  uVar1 = *(ulong *)(param_1 + 0x18);
  pcVar5 = (char *)0x0;
  if (uVar1 < 4) goto LAB_0017baaa;
  uVar3 = uVar1 - 4;
  if (uVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)",0xca,(char)uVar3,(char)uVar1
               ,in_R8B,in_R9B,in_stack_ffffffffffffffb8);
  }
  pcVar4 = local_38;
  FUN_0017b430(&stack0xffffffffffffffb8,*(long *)(param_1 + 0x10) + uVar3,
               uVar1 + *(long *)(param_1 + 0x10));
  pcVar5 = pcVar4 + local_40;
  uVar1 = DAT_005b2288;
  __s1 = pcVar4;
  for (; DAT_005b2288 = uVar1, pcVar5 != pcVar4; pcVar4 = pcVar4 + 1) {
    iVar2 = toupper((int)*pcVar4);
    *pcVar4 = (char)iVar2;
    uVar1 = DAT_005b2288;
  }
  uVar3 = local_40;
  if (uVar1 <= local_40) {
    uVar3 = uVar1;
  }
  if (uVar3 == 0) {
LAB_0017bb37:
    if ((local_40 - uVar1) + 0x80000000 < 0x100000000) {
      pcVar5 = (char *)CONCAT71((int7)((ulong)pcVar5 >> 8),(int)(local_40 - uVar1) == 0);
    }
    else {
      pcVar5 = (char *)0x0;
    }
  }
  else {
    pcVar5 = (char *)0x0;
    iVar2 = memcmp(__s1,DAT_005b2280,uVar3);
    if (iVar2 == 0) goto LAB_0017bb37;
  }
  if (__s1 != local_38) {
    operator_delete(__s1);
    return (ulong)pcVar5 & 0xffffffff;
  }
LAB_0017baaa:
  return (ulong)pcVar5 & 0xffffffff;
}

