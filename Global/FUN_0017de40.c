// Decompiled function: FUN_0017de40


char ** FUN_0017de40(char **param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined **local_248 [4];
  uint auStack_228 [10];
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
  
  pcVar3 = (char *)operator_new__(*(ulong *)(param_2 + 0x110));
  param_1[1] = (char *)0x0;
  *param_1 = pcVar3;
                    /* try { // try from 0017de78 to 0017de7c has its CatchHandler @ 0017e0ff */
  puVar4 = (undefined8 *)operator_new(0x18);
  puVar4[2] = pcVar3;
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((long)puVar4 + 0xc) = 1;
  param_1[1] = (char *)puVar4;
  *puVar4 = &PTR___Sp_counted_deleter_00585538;
  pcVar3 = *(char **)(param_2 + 0xa8);
  std::ios_base::ios_base((ios_base *)local_148);
  puVar2 = PTR_DAT_005acf00;
  puVar1 = PTR_DAT_005acef8;
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
                    /* try { // try from 0017df4d to 0017df51 has its CatchHandler @ 0017e0fa */
  std::basic_ios<char,std::char_traits<char>>::init
            ((basic_ios<char,std::char_traits<char>> *)
             ((long)local_248 + *(long *)(PTR_DAT_005acef8 + -0x18)),(basic_streambuf *)0x0);
  local_248[0] = &PTR__basic_ifstream_005acf28;
  local_148[0] = &PTR__basic_ifstream_005acf50;
                    /* try { // try from 0017df72 to 0017df76 has its CatchHandler @ 0017e0f8 */
  std::basic_filebuf<char,std::char_traits<char>>::basic_filebuf();
                    /* try { // try from 0017df82 to 0017dfb5 has its CatchHandler @ 0017e0ae */
  std::basic_ios<char,std::char_traits<char>>::init
            ((basic_ios<char,std::char_traits<char>> *)local_148,(basic_streambuf *)(local_248 + 2))
  ;
  lVar5 = std::basic_filebuf<char,std::char_traits<char>>::open
                    ((basic_filebuf<char,std::char_traits<char>> *)(local_248 + 2),pcVar3,0xc);
  if (lVar5 == 0) {
                    /* try { // try from 0017e082 to 0017e086 has its CatchHandler @ 0017e0ae */
    std::basic_ios<char,std::char_traits<char>>::clear
              ((basic_ios<char,std::char_traits<char>> *)((long)local_248 + (long)local_248[0][-3]),
               *(uint *)((long)auStack_228 + (long)local_248[0][-3]) | 4);
  }
  else {
    std::basic_ios<char,std::char_traits<char>>::clear
              ((basic_ios<char,std::char_traits<char>> *)((long)local_248 + (long)local_248[0][-3]),
               0);
  }
                    /* try { // try from 0017dfc2 to 0017dfd9 has its CatchHandler @ 0017e08c */
  std::basic_istream<char,std::char_traits<char>>::seekg
            ((basic_istream<char,std::char_traits<char>> *)local_248,*(long *)(param_2 + 0x118),0);
  std::basic_istream<char,std::char_traits<char>>::read
            ((basic_istream<char,std::char_traits<char>> *)local_248,*param_1,
             *(long *)(param_2 + 0x110));
  local_248[0] = &PTR__basic_ifstream_005acf28;
  local_148[0] = &PTR__basic_ifstream_005acf50;
  local_248[2] = &PTR__basic_filebuf_005ace30;
  std::basic_filebuf<char,std::char_traits<char>>::close();
  std::__basic_file<char>::~__basic_file(local_1d0);
  local_248[2] = &PTR__basic_streambuf_005ae810;
  std::locale::~locale(local_200);
  local_248[0] = (undefined **)puVar1;
  *(undefined **)((long)local_248 + *(long *)(puVar1 + -0x18)) = puVar2;
  local_248[1] = (undefined **)0x0;
  local_148[0] = &PTR__basic_ios_005add30;
  std::ios_base::~ios_base((ios_base *)local_148);
  return param_1;
}

