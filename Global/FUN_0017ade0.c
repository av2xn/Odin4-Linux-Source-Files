// Decompiled function: FUN_0017ade0


undefined4 FUN_0017ade0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *local_a8;
  ulong local_a0;
  undefined local_98 [16];
  undefined *local_88 [2];
  undefined local_78 [80];
  
  local_a8 = local_98;
  local_a0 = 0;
  local_98[0] = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
    return 0;
  }
                    /* try { // try from 0017ae28 to 0017af87 has its CatchHandler @ 0017b02b */
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_replace
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_a8,0,0,
             "Setup Connection",0x10);
  cVar1 = DownloadEngine::setupConnection();
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
    puVar3[2] = 0;
    *(undefined *)(puVar3 + 3) = 0;
    *puVar3 = &PTR__OdinException_005842f0;
    puVar3[1] = puVar3 + 3;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&OdinException::typeinfo,OdinException::~OdinException);
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_replace
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_a8,0,local_a0,
             "Initialize Connection",0x15);
  cVar1 = DownloadEngine::initializeConnection();
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
    puVar3[2] = 0;
    *(undefined *)(puVar3 + 3) = 0;
    *puVar3 = &PTR__OdinException_005842f0;
    puVar3[1] = puVar3 + 3;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0017b08f to 0017b1dd has its CatchHandler @ 0017b02b */
    __cxa_throw(puVar3,&OdinException::typeinfo,OdinException::~OdinException);
  }
  if (3 < *(int *)(param_1 + 0x5c)) {
    uVar2 = FUN_00179740(param_1);
    if ((char)uVar2 == '\0') {
      local_88[0] = local_78;
      FUN_001789a0(local_88,"Fail Initialize Connection","");
                    /* try { // try from 0017af8f to 0017af93 has its CatchHandler @ 0017b2f2 */
      FUN_00184550(param_1 + 0x30);
      if (local_88[0] != local_78) {
        operator_delete(local_88[0]);
      }
                    /* try { // try from 0017afbe to 0017b014 has its CatchHandler @ 0017b02b */
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_replace
                ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_a8,0,
                 local_a0,"Close Connection",0x10);
      cVar1 = DownloadEngine::closeConnection();
      if (cVar1 == '\0') {
        puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
        puVar3[2] = 0;
        *(undefined *)(puVar3 + 3) = 0;
        *puVar3 = &PTR__OdinException_005842f0;
        puVar3[1] = puVar3 + 3;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&OdinException::typeinfo,OdinException::~OdinException);
      }
      goto LAB_0017af26;
    }
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_replace
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_a8,0,local_a0,
             "send PIT info",0xd);
  cVar1 = DownloadEngine::sendPitInfo();
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
    puVar3[2] = 0;
    *(undefined *)(puVar3 + 3) = 0;
    *puVar3 = &PTR__OdinException_005842f0;
    puVar3[1] = puVar3 + 3;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&OdinException::typeinfo,OdinException::~OdinException);
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_replace
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_a8,0,local_a0,
             "receive PIT info",0x10);
  cVar1 = DownloadEngine::receivePitInfo();
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
    puVar3[2] = 0;
    *(undefined *)(puVar3 + 3) = 0;
    *puVar3 = &PTR__OdinException_005842f0;
    puVar3[1] = puVar3 + 3;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&OdinException::typeinfo,OdinException::~OdinException);
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_replace
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_a8,0,local_a0,
             "uploadBinaries",0xe);
  cVar1 = DownloadEngine::uploadBinaries();
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
    puVar3[2] = 0;
    *(undefined *)(puVar3 + 3) = 0;
    *puVar3 = &PTR__OdinException_005842f0;
    puVar3[1] = puVar3 + 3;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&OdinException::typeinfo,OdinException::~OdinException);
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_replace
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_a8,0,local_a0,
             "Close Connection",0x10);
  uVar2 = DownloadEngine::closeConnection();
  if ((char)uVar2 == '\0') {
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
    puVar3[2] = 0;
    *(undefined *)(puVar3 + 3) = 0;
    *puVar3 = &PTR__OdinException_005842f0;
    puVar3[1] = puVar3 + 3;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&OdinException::typeinfo,OdinException::~OdinException);
  }
LAB_0017af26:
  if (local_a8 != local_98) {
    operator_delete(local_a8);
  }
  return uVar2;
}

