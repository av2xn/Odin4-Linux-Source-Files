// Decompiled function: _M_dispose


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Sp_counted_deleter<char*, std::default_delete<char []>, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void std::
     _Sp_counted_deleter<char*,std::default_delete<char[]>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
     ::_M_dispose(void)

{
  long in_RDI;
  
  if (*(void **)(in_RDI + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(in_RDI + 0x10));
    return;
  }
  return;
}

