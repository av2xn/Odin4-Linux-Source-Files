// Decompiled function: FUN_0017c890


undefined8 FUN_0017c890(long param_1,char **param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *local_268 [2];
  undefined local_258 [16];
  undefined **local_248 [9];
  locale local_200 [48];
  __basic_file<char> local_1d0 [136];
  undefined **local_148 [27];
  undefined8 local_70;
  undefined local_68;
  undefined local_67;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar5 = 0;
  if (param_2[1] != (char *)0x0) {
    pcVar1 = *param_2;
    std::ios_base::ios_base((ios_base *)local_148);
    puVar3 = PTR_DAT_005acf00;
    puVar2 = PTR_DAT_005acef8;
    local_68 = 0;
    local_70 = 0;
    local_67 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_148[0] = &PTR__basic_ios_005add30;
    local_248[0] = (undefined **)PTR_DAT_005acef8;
    *(undefined **)((long)local_248 + *(long *)(PTR_DAT_005acef8 + -0x18)) = PTR_DAT_005acf00;
    local_248[1] = (undefined **)0x0;
                    /* try { // try from 0017c96d to 0017c971 has its CatchHandler @ 0017cb14 */
    std::basic_ios<char,std::char_traits<char>>::init
              ((basic_ios<char,std::char_traits<char>> *)
               ((long)local_248 + *(long *)(PTR_DAT_005acef8 + -0x18)),(basic_streambuf *)0x0);
    local_248[0] = &PTR__basic_ifstream_005acf28;
    local_148[0] = &PTR__basic_ifstream_005acf50;
                    /* try { // try from 0017c992 to 0017c996 has its CatchHandler @ 0017cb3e */
    std::basic_filebuf<char,std::char_traits<char>>::basic_filebuf();
                    /* try { // try from 0017c9a2 to 0017c9d5 has its CatchHandler @ 0017cb85 */
    std::basic_ios<char,std::char_traits<char>>::init
              ((basic_ios<char,std::char_traits<char>> *)local_148,
               (basic_streambuf *)(local_248 + 2));
    lVar4 = std::basic_filebuf<char,std::char_traits<char>>::open
                      ((basic_filebuf<char,std::char_traits<char>> *)(local_248 + 2),pcVar1,0xc);
    if (lVar4 == 0) {
                    /* try { // try from 0017cb0a to 0017cb0e has its CatchHandler @ 0017cb85 */
      std::basic_ios<char,std::char_traits<char>>::clear();
    }
    else {
      std::basic_ios<char,std::char_traits<char>>::clear
                ((basic_ios<char,std::char_traits<char>> *)
                 ((long)local_248 + (long)local_248[0][-3]));
    }
                    /* try { // try from 0017c9e0 to 0017ca3d has its CatchHandler @ 0017cb5a */
    std::basic_istream<char,std::char_traits<char>>::seekg
              ((basic_istream<char,std::char_traits<char>> *)local_248,0,2);
    lVar4 = std::basic_istream<char,std::char_traits<char>>::tellg();
    *(long *)(param_1 + 0x110) = lVar4;
    if (lVar4 < 1) {
      uVar5 = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x118) = 0;
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)(param_1 + 0xa8),
                 (basic_string *)param_2);
      local_268[0] = local_258;
      FUN_0017bfe0(local_268,"SET PIT SUCCESS","");
                    /* try { // try from 0017ca48 to 0017ca4c has its CatchHandler @ 0017cb6d */
      FUN_001843d0(FirmwareData::TAG_abi_cxx11_,local_268);
      if (local_268[0] != local_258) {
        operator_delete(local_268[0]);
      }
      uVar5 = 1;
    }
    local_248[0] = &PTR__basic_ifstream_005acf28;
    local_148[0] = &PTR__basic_ifstream_005acf50;
    local_248[2] = &PTR__basic_filebuf_005ace30;
    std::basic_filebuf<char,std::char_traits<char>>::close();
    std::__basic_file<char>::~__basic_file(local_1d0);
    local_248[2] = &PTR__basic_streambuf_005ae810;
    std::locale::~locale(local_200);
    local_248[0] = (undefined **)puVar2;
    *(undefined **)((long)local_248 + *(long *)(puVar2 + -0x18)) = puVar3;
    local_248[1] = (undefined **)0x0;
    local_148[0] = &PTR__basic_ios_005add30;
    std::ios_base::~ios_base((ios_base *)local_148);
  }
  return uVar5;
}

