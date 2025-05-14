// Decompiled function: FUN_00176b28


void FUN_00176b28(allocator *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (PTR___pthread_key_create_005b0e00 == (undefined *)0x0) {
    iVar2 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar2 + -1;
  }
  else {
    LOCK();
    piVar1 = (int *)(param_1 + 0x10);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (iVar2 < 1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>>::_Rep::_M_destroy(param_1);
    return;
  }
  return;
}

