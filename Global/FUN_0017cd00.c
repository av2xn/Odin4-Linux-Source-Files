// Decompiled function: FUN_0017cd00


undefined8 FUN_0017cd00(long param_1,void **param_2)

{
  void *pvVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  void *__n;
  long lVar5;
  undefined *local_58;
  void *local_50;
  undefined local_48 [24];
  
  uVar4 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::find
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                     (param_1 + 0x130),'_',0);
  local_58 = local_48;
  if (*(ulong *)(param_1 + 0x138) < uVar4) {
    uVar4 = *(ulong *)(param_1 + 0x138);
  }
  FUN_0017bfe0(&local_58,*(long *)(param_1 + 0x130),*(long *)(param_1 + 0x130) + uVar4);
  puVar2 = local_58;
  pvVar1 = param_2[1];
  __n = local_50;
  if (pvVar1 <= local_50) {
    __n = pvVar1;
  }
  if ((__n == (void *)0x0) || (iVar3 = memcmp(*param_2,local_58,(size_t)__n), iVar3 == 0)) {
    lVar5 = (long)pvVar1 - (long)local_50;
    iVar3 = 0x7fffffff;
    if (0x7fffffff < lVar5) goto LAB_0017cd93;
    if (lVar5 < -0x80000000) {
      iVar3 = -0x80000000;
      goto LAB_0017cd93;
    }
    iVar3 = (int)lVar5;
    if (puVar2 != local_48) goto LAB_0017cd9c;
  }
  else {
LAB_0017cd93:
    if (puVar2 == local_48) goto LAB_0017cdf8;
LAB_0017cd9c:
    operator_delete(puVar2);
  }
  if (iVar3 == 0) {
    return 1;
  }
LAB_0017cdf8:
  local_58 = local_48;
  FUN_0017bfe0(&local_58,"FAIL! Model dismatch fail","");
                    /* try { // try from 0017ce21 to 0017ce25 has its CatchHandler @ 0017cebe */
  FUN_001843d0(FirmwareData::TAG_abi_cxx11_,&local_58);
  if (local_58 != local_48) {
    operator_delete(local_58);
  }
  FUN_001843d0(FirmwareData::TAG_abi_cxx11_,param_2);
  uVar4 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::find
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                     (param_1 + 0x130),'_',0);
  local_58 = local_48;
  if (*(ulong *)(param_1 + 0x138) < uVar4) {
    uVar4 = *(ulong *)(param_1 + 0x138);
  }
  FUN_0017bfe0(&local_58,*(long *)(param_1 + 0x130),*(long *)(param_1 + 0x130) + uVar4);
                    /* try { // try from 0017ce8b to 0017ce8f has its CatchHandler @ 0017cedc */
  FUN_001843d0(FirmwareData::TAG_abi_cxx11_,&local_58);
  if (local_58 != local_48) {
    operator_delete(local_58);
  }
  return 0;
}

