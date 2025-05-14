// Decompiled function: operator+


/* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >
   std::TEMPNAMEPLACEHOLDERVALUE(char const*, std::__cxx11::basic_string<char,
   std::char_traits<char>, std::allocator<char> > const&) */

long * std::operator+(long *param_1,char *param_2,char **param_3)

{
  char *pcVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_2);
  param_1[1] = 0;
  *(undefined *)(param_1 + 2) = 0;
  pcVar1 = param_3[1];
  *param_1 = (long)(param_1 + 2);
                    /* try { // try from 001830ba to 00183108 has its CatchHandler @ 00183109 */
  __cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::reserve
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)param_1,
             (ulong)(pcVar1 + sVar2));
  if (sVar2 <= 0x7fffffffffffffffU - param_1[1]) {
    __cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_append
              ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)param_1,param_2,
               sVar2);
    __cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_append
              ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)param_1,*param_3,
               (ulong)param_3[1]);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __throw_length_error("basic_string::append");
}

