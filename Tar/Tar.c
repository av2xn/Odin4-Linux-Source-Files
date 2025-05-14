// Decompiled function: Tar


/* Tar::Tar(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
    */

void __thiscall Tar::Tar(Tar *this,basic_string *param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *this_00;
  long lVar4;
  undefined8 uVar5;
  
  pcVar1 = *(char **)param_1;
  this_00 = (long *)operator_new(0x208);
  std::ios_base::ios_base((ios_base *)(this_00 + 0x20));
  *(undefined *)(this_00 + 0x3c) = 0;
  this_00[0x3b] = 0;
  *(undefined *)((long)this_00 + 0x1e1) = 0;
  this_00[0x3d] = 0;
  this_00[0x3e] = 0;
  this_00[0x3f] = 0;
  this_00[0x40] = 0;
  this_00[0x20] = (long)&PTR__basic_ios_005add30;
  puVar3 = PTR_DAT_005acf00;
  puVar2 = PTR_DAT_005acef8;
  lVar4 = *(long *)(PTR_DAT_005acef8 + -0x18);
  *this_00 = (long)PTR_DAT_005acef8;
  *(undefined **)((long)this_00 + lVar4) = puVar3;
  this_00[1] = 0;
                    /* try { // try from 0017b599 to 0017b59d has its CatchHandler @ 0017b659 */
  std::basic_ios<char,std::char_traits<char>>::init
            ((basic_ios<char,std::char_traits<char>> *)((long)this_00 + *(long *)(puVar2 + -0x18)),
             (basic_streambuf *)0x0);
  this_00[0x20] = (long)&PTR__basic_ifstream_005acf50;
  *this_00 = (long)&PTR__basic_ifstream_005acf28;
                    /* try { // try from 0017b5be to 0017b5c2 has its CatchHandler @ 0017b6ac */
  std::basic_filebuf<char,std::char_traits<char>>::basic_filebuf();
                    /* try { // try from 0017b5c9 to 0017b5f5 has its CatchHandler @ 0017b68b */
  std::basic_ios<char,std::char_traits<char>>::init
            ((basic_ios<char,std::char_traits<char>> *)(this_00 + 0x20),
             (basic_streambuf *)(this_00 + 2));
  lVar4 = std::basic_filebuf<char,std::char_traits<char>>::open
                    ((basic_filebuf<char,std::char_traits<char>> *)(this_00 + 2),pcVar1,0xc);
  if (lVar4 == 0) {
                    /* try { // try from 0017b652 to 0017b656 has its CatchHandler @ 0017b68b */
    std::basic_ios<char,std::char_traits<char>>::clear();
  }
  else {
    std::basic_ios<char,std::char_traits<char>>::clear
              ((basic_ios<char,std::char_traits<char>> *)
               ((long)this_00 + *(long *)(*this_00 + -0x18)));
  }
  *(long **)this = this_00;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  std::basic_istream<char,std::char_traits<char>>::seekg
            ((basic_istream<char,std::char_traits<char>> *)this_00,0,2);
  uVar5 = std::basic_istream<char,std::char_traits<char>>::tellg();
  *(undefined8 *)(this + 0x18) = uVar5;
  std::basic_istream<char,std::char_traits<char>>::seekg
            (*(basic_istream<char,std::char_traits<char>> **)this,0,0);
  return;
}

