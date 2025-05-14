// Decompiled function: _INIT_7


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_7(void)

{
  FUN_00191a00(&DAT_005b2540,&DAT_00311ecb);
  __cxa_atexit(std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
               ~basic_string,&DAT_005b2540,&__dso_handle);
  FUN_00191a00(&DAT_005b2520,&DAT_00302dff);
  __cxa_atexit(std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
               ~basic_string,&DAT_005b2520,&__dso_handle);
  CryptoPP::DEFAULT_CHANNEL_abi_cxx11_ = &DAT_005b24d0;
  FUN_00191950(&CryptoPP::DEFAULT_CHANNEL_abi_cxx11_,DAT_005b2540,DAT_005b2540 + _DAT_005b2548);
  __cxa_atexit(std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
               ~basic_string,&CryptoPP::DEFAULT_CHANNEL_abi_cxx11_,&__dso_handle);
  CryptoPP::AAD_CHANNEL_abi_cxx11_ = &DAT_005b24b0;
  FUN_00191950(&CryptoPP::AAD_CHANNEL_abi_cxx11_,DAT_005b2520,DAT_005b2520 + _DAT_005b2528);
  __cxa_atexit(std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
               ~basic_string,&CryptoPP::AAD_CHANNEL_abi_cxx11_,&__dso_handle);
  DAT_005b2518 = (undefined8 *)operator_new(8);
  *DAT_005b2518 = &PTR__NullNameValuePairs_00587380;
  __cxa_atexit(CryptoPP::simple_ptr<CryptoPP::NullNameValuePairs>::~simple_ptr,&DAT_005b2518,
               &__dso_handle);
  CryptoPP::g_nullNameValuePairs = DAT_005b2518;
  return;
}

