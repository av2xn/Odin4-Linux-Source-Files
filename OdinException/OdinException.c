// Decompiled function: OdinException


/* OdinException::OdinException(std::__cxx11::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&) */

void __thiscall OdinException::OdinException(OdinException *this,basic_string *param_1)

{
  OdinException *__src;
  ulong __n;
  OdinException *__dest;
  ulong local_20;
  
  __dest = this + 0x18;
  *(undefined ***)this = &PTR__OdinException_005842f0;
  *(OdinException **)(this + 8) = __dest;
  __src = *(OdinException **)param_1;
  __n = *(ulong *)(param_1 + 8);
  if ((__src + __n != (OdinException *)0x0) && (__src == (OdinException *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00178899 to 001788df has its CatchHandler @ 00178912 */
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  local_20 = __n;
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x18] = *__src;
      goto LAB_001788ba;
    }
    if (__n != 0) goto LAB_001788f0;
  }
  else {
    __dest = (OdinException *)
             std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_create
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)(this + 8)
                        ,&local_20,0);
    *(OdinException **)(this + 8) = __dest;
    *(ulong *)(this + 0x18) = local_20;
LAB_001788f0:
    memcpy(__dest,__src,__n);
  }
  __dest = *(OdinException **)(this + 8);
  __n = local_20;
LAB_001788ba:
  *(ulong *)(this + 0x10) = __n;
  __dest[__n] = (OdinException)0x0;
  return;
}

