// Decompiled function: ~Tar


/* Tar::~Tar() */

void __thiscall Tar::~Tar(Tar *this)

{
  long *plVar1;
  long lVar2;
  basic_ios<char,std::char_traits<char>> *pbVar3;
  
  plVar1 = *(long **)this;
  lVar2 = std::basic_filebuf<char,std::char_traits<char>>::close();
  if (lVar2 == 0) {
    pbVar3 = (basic_ios<char,std::char_traits<char>> *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
    std::basic_ios<char,std::char_traits<char>>::clear(pbVar3,*(uint *)(pbVar3 + 0x20) | 4);
  }
  if (*(long **)this != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0017b6ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)this + 8))();
    return;
  }
  return;
}

