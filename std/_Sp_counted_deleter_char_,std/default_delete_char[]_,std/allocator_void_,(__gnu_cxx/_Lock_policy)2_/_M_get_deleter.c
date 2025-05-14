// Decompiled function: _M_get_deleter


/* std::_Sp_counted_deleter<char*, std::default_delete<char []>, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_get_deleter(std::type_info const&) */

_Sp_counted_deleter<char*,std::default_delete<char[]>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
* __thiscall
std::
_Sp_counted_deleter<char*,std::default_delete<char[]>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_get_deleter(_Sp_counted_deleter<char*,std::default_delete<char[]>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                 *this,type_info *param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar2 = *(char **)(param_1 + 8);
  if (pcVar2 != "St14default_deleteIA_cE") {
    bVar4 = *pcVar2 == '*';
    if (bVar4) {
      return (_Sp_counted_deleter<char*,std::default_delete<char[]>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
              *)0x0;
    }
    lVar1 = 0x18;
    pcVar3 = "St14default_deleteIA_cE";
    do {
      if (lVar1 == 0) break;
      lVar1 = lVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      return (_Sp_counted_deleter<char*,std::default_delete<char[]>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
              *)0x0;
    }
  }
  return this + 0x10;
}

