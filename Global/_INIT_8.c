// Decompiled function: _INIT_8


void _INIT_8(void)

{
  std::ios_base::Init::Init((Init *)&DAT_005b26e8);
  __cxa_atexit(std::ios_base::Init::~Init,&DAT_005b26e8,&__dso_handle);
  DAT_005b2570 = CryptoPP::Singleton<CryptoPP::Integer,CryptoPP::NewObject<CryptoPP::Integer>,0>::
                 Ref();
  DAT_005b2568 = CryptoPP::Singleton<CryptoPP::Integer,CryptoPP::NewInteger<1l>,0>::Ref();
  DAT_005b2560 = CryptoPP::Singleton<CryptoPP::Integer,CryptoPP::NewInteger<2l>,0>::Ref();
  return;
}

