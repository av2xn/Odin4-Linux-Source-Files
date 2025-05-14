// Decompiled function: ~_Sp_counted_deleter


/* std::_Sp_counted_deleter<char*, std::default_delete<char []>, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_deleter() */

void __thiscall
std::
_Sp_counted_deleter<char*,std::default_delete<char[]>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_deleter
          (_Sp_counted_deleter<char*,std::default_delete<char[]>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  operator_delete(this,0x18);
  return;
}

