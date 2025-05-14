// Decompiled function: FUN_0017e130


char ** FUN_0017e130(char **param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 *puVar6;
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
  
  pcVar5 = *(char **)(param_2 + 200);
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
                    /* try { // try from 0017e1ea to 0017e1ee has its CatchHandler @ 0017e3e9 */
  std::basic_ios<char,std::char_traits<char>>::init
            ((basic_ios<char,std::char_traits<char>> *)
             ((long)local_248 + *(long *)(PTR_DAT_005acef8 + -0x18)),(basic_streambuf *)0x0);
  local_248[0] = &PTR__basic_ifstream_005acf28;
  local_148[0] = &PTR__basic_ifstream_005acf50;
                    /* try { // try from 0017e20f to 0017e213 has its CatchHandler @ 0017e3e7 */
  std::basic_filebuf<char,std::char_traits<char>>::basic_filebuf();
                    /* try { // try from 0017e21f to 0017e250 has its CatchHandler @ 0017e397 */
  std::basic_ios<char,std::char_traits<char>>::init
            ((basic_ios<char,std::char_traits<char>> *)local_148,(basic_streambuf *)(local_248 + 2))
  ;
  lVar3 = std::basic_filebuf<char,std::char_traits<char>>::open
                    ((basic_filebuf<char,std::char_traits<char>> *)(local_248 + 2),pcVar5,0xc);
  if (lVar3 == 0) {
                    /* try { // try from 0017e37a to 0017e37e has its CatchHandler @ 0017e397 */
    std::basic_ios<char,std::char_traits<char>>::clear();
  }
  else {
    std::basic_ios<char,std::char_traits<char>>::clear
              ((basic_ios<char,std::char_traits<char>> *)((long)local_248 + (long)local_248[0][-3]))
    ;
  }
                    /* try { // try from 0017e25b to 0017e274 has its CatchHandler @ 0017e384 */
  std::basic_istream<char,std::char_traits<char>>::seekg
            ((basic_istream<char,std::char_traits<char>> *)local_248,0,2);
  uVar4 = std::basic_istream<char,std::char_traits<char>>::tellg();
  pcVar5 = (char *)operator_new__(uVar4);
  *param_1 = pcVar5;
  param_1[1] = (char *)0x0;
                    /* try { // try from 0017e28a to 0017e28e has its CatchHandler @ 0017e402 */
  puVar6 = (undefined8 *)operator_new(0x18);
  *(undefined4 *)(puVar6 + 1) = 1;
  *(undefined4 *)((long)puVar6 + 0xc) = 1;
  puVar6[2] = pcVar5;
  param_1[1] = (char *)puVar6;
  *puVar6 = &PTR___Sp_counted_deleter_00585538;
                    /* try { // try from 0017e2bb to 0017e2d0 has its CatchHandler @ 0017e3ee */
  std::basic_istream<char,std::char_traits<char>>::seekg
            ((basic_istream<char,std::char_traits<char>> *)local_248,0,0);
  std::basic_istream<char,std::char_traits<char>>::read
            ((basic_istream<char,std::char_traits<char>> *)local_248,*param_1,uVar4);
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

