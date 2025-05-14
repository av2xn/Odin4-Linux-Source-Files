// Decompiled function: _M_release


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release() */

void std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(void)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long *in_RDI;
  
  if (PTR___pthread_key_create_005b0e00 == (undefined *)0x0) {
    iVar3 = *(int *)(in_RDI + 1);
    *(int *)(in_RDI + 1) = iVar3 + -1;
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*in_RDI + 0x10))();
    iVar3 = *(int *)((long)in_RDI + 0xc);
    *(int *)((long)in_RDI + 0xc) = iVar3 + -1;
  }
  else {
    LOCK();
    plVar1 = in_RDI + 1;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    UNLOCK();
    if (*(int *)plVar1 != 0) {
      return;
    }
    (**(code **)(*in_RDI + 0x10))();
    LOCK();
    piVar2 = (int *)((long)in_RDI + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  if (iVar3 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0017b420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_RDI + 0x18))();
  return;
}

