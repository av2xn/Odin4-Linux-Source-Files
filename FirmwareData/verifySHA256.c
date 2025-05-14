// Decompiled function: verifySHA256


/* FirmwareData::verifySHA256(std::__cxx11::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&) */

undefined4 __thiscall FirmwareData::verifySHA256(FirmwareData *this,basic_string *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>> *this_00;
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong __n;
  Manifest aMStack_d8 [64];
  void *local_98;
  ulong local_90;
  
  this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)(this + 0x130);
  iVar2 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::compare
                    (this_00,"NOTAPPLIED");
  if (iVar2 == 0) {
    return 0;
  }
  Manifest::Manifest(aMStack_d8,*(char **)param_1);
                    /* try { // try from 0017cc01 to 0017cc8c has its CatchHandler @ 0017cca3 */
  uVar3 = FUN_00187390(aMStack_d8);
  uVar1 = *(ulong *)(this + 0x138);
  if ((char)uVar3 != '\0') {
    if (uVar1 == 0) {
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_assign
                (this_00,(basic_string *)&local_98);
      goto LAB_0017cc6c;
    }
    __n = uVar1;
    if ((((local_90 < uVar1) && (__n = local_90, local_90 == 0)) ||
        (iVar2 = memcmp(*(void **)(this + 0x130),local_98,__n), iVar2 == 0)) &&
       (((uVar1 - local_90) + 0x80000000 < 0x100000000 && ((int)(uVar1 - local_90) == 0))))
    goto LAB_0017cc6c;
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_replace
            (this_00,0,uVar1,"NOTAPPLIED",10);
  uVar3 = 0;
LAB_0017cc6c:
  Manifest::~Manifest(aMStack_d8);
  return uVar3;
}

