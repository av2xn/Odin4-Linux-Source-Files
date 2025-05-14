// Decompiled function: parseBIN


/* FirmwareData::parseBIN(std::__cxx11::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&, int) */

undefined8 __thiscall FirmwareData::parseBIN(FirmwareData *this,basic_string *param_1,int param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  undefined in_R8B;
  undefined in_R9B;
  long *plVar5;
  undefined uVar6;
  char *pcVar7;
  ulong *local_2d8;
  long local_2d0;
  ulong local_2c8 [2];
  undefined *local_2b8;
  long local_2b0;
  undefined local_2a8 [16];
  long local_298;
  long local_290;
  ulong *local_288;
  long local_280;
  ulong local_278 [2];
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  long local_258;
  long local_250;
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
  
  pcVar7 = *(char **)param_1;
  std::ios_base::ios_base((ios_base *)local_148);
  local_68 = 0;
  local_70 = 0;
  local_67 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_148[0] = &PTR__basic_ios_005add30;
  local_48 = 0;
  local_248[0] = (undefined **)PTR_DAT_005acef8;
  *(undefined **)((long)local_248 + *(long *)(PTR_DAT_005acef8 + -0x18)) = PTR_DAT_005acf00;
  local_248[1] = (undefined **)0x0;
                    /* try { // try from 0017e4fd to 0017e501 has its CatchHandler @ 0017e985 */
  std::basic_ios<char,std::char_traits<char>>::init
            ((basic_ios<char,std::char_traits<char>> *)
             ((long)local_248 + *(long *)(PTR_DAT_005acef8 + -0x18)),(basic_streambuf *)0x0);
  local_248[0] = &PTR__basic_ifstream_005acf28;
  local_148[0] = &PTR__basic_ifstream_005acf50;
                    /* try { // try from 0017e525 to 0017e529 has its CatchHandler @ 0017e98a */
  std::basic_filebuf<char,std::char_traits<char>>::basic_filebuf();
                    /* try { // try from 0017e535 to 0017e56a has its CatchHandler @ 0017e92c */
  std::basic_ios<char,std::char_traits<char>>::init
            ((basic_ios<char,std::char_traits<char>> *)local_148,(basic_streambuf *)(local_248 + 2))
  ;
  lVar3 = std::basic_filebuf<char,std::char_traits<char>>::open
                    ((basic_filebuf<char,std::char_traits<char>> *)(local_248 + 2),pcVar7,0xc);
  uVar6 = SUB81(pcVar7,0);
  if (lVar3 == 0) {
                    /* try { // try from 0017e8ba to 0017e8be has its CatchHandler @ 0017e92c */
    std::basic_ios<char,std::char_traits<char>>::clear();
  }
  else {
    std::basic_ios<char,std::char_traits<char>>::clear
              ((basic_ios<char,std::char_traits<char>> *)((long)local_248 + (long)local_248[0][-3]))
    ;
  }
                    /* try { // try from 0017e575 to 0017e598 has its CatchHandler @ 0017e9a5 */
  std::basic_istream<char,std::char_traits<char>>::seekg
            ((basic_istream<char,std::char_traits<char>> *)local_248,0,2);
  lVar3 = std::basic_istream<char,std::char_traits<char>>::tellg();
  std::basic_istream<char,std::char_traits<char>>::seekg((fpos)local_248);
  *(long *)(this + 0x120) = *(long *)(this + 0x120) + (lVar3 - param_2);
  local_2b0 = 0;
  local_2a8[0] = 0;
  local_2b8 = local_2a8;
  local_280 = 0;
  local_278[0] = local_278[0] & 0xffffffffffffff00;
  local_288 = local_278;
                    /* try { // try from 0017e5d9 to 0017e706 has its CatchHandler @ 0017e911 */
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_2b8,param_1);
  local_290 = 0;
  local_298 = lVar3 - param_2;
  lVar3 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::find_last_of
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)param_1,"/\\"
                     ,0xffffffffffffffff,2);
  uVar1 = *(ulong *)(param_1 + 8);
  uVar4 = lVar3 + 1;
  if (uVar1 < uVar4) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0017e90c to 0017e910 has its CatchHandler @ 0017e911 */
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)",0xca,(char)uVar4,(char)uVar1
               ,in_R8B,in_R9B,uVar6);
  }
  local_2d8 = local_2c8;
  FUN_0017bfe0(&local_2d8,*(long *)param_1 + uVar4,uVar1 + *(long *)param_1);
  uVar1 = local_278[0];
  puVar2 = local_288;
  if (local_2d8 == local_2c8) {
    std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_288,
               (basic_string *)&local_2d8);
  }
  else {
    if (local_288 != local_278) {
      local_288 = local_2d8;
      local_280 = local_2d0;
      local_278[0] = local_2c8[0];
      if (puVar2 != (ulong *)0x0) {
        local_2d8 = puVar2;
        local_2c8[0] = uVar1;
        goto LAB_0017e68e;
      }
    }
    local_278[0] = local_2c8[0];
    local_280 = local_2d0;
    local_288 = local_2d8;
    local_2d8 = local_2c8;
  }
LAB_0017e68e:
  local_2d0 = 0;
  *(undefined *)local_2d8 = 0;
  if (local_2d8 != local_2c8) {
    operator_delete(local_2d8);
  }
  plVar5 = *(long **)(this + 0x158);
  local_258 = 0;
  local_260 = 0xffffffff;
  local_250 = 0;
  if (plVar5 == *(long **)(this + 0x160)) {
                    /* try { // try from 0017e8d2 to 0017e8d6 has its CatchHandler @ 0017e911 */
    std::vector<FirmwareInfo,std::allocator<FirmwareInfo>>::_M_emplace_back_aux<FirmwareInfo_const&>
              ((vector<FirmwareInfo,std::allocator<FirmwareInfo>> *)(this + 0x150),
               (FirmwareInfo *)&local_2b8);
  }
  else {
    if (plVar5 != (long *)0x0) {
      *plVar5 = (long)(plVar5 + 2);
      FUN_0017bfe0(plVar5,local_2b8,local_2b8 + local_2b0);
      plVar5[4] = local_298;
      plVar5[5] = local_290;
      plVar5[6] = (long)(plVar5 + 8);
                    /* try { // try from 0017e737 to 0017e73b has its CatchHandler @ 0017e98c */
      FUN_0017bfe0(plVar5 + 6,local_288,(undefined *)((long)local_288 + local_280));
      *(undefined4 *)(plVar5 + 10) = local_268;
      *(undefined4 *)((long)plVar5 + 0x54) = local_264;
      *(undefined4 *)(plVar5 + 0xb) = local_260;
      plVar5[0xd] = local_250;
      plVar5[0xc] = local_258;
      plVar5 = *(long **)(this + 0x158);
    }
    *(long **)(this + 0x158) = plVar5 + 0xe;
  }
  if (local_288 != local_278) {
    operator_delete(local_288);
  }
  if (local_2b8 != local_2a8) {
    operator_delete(local_2b8);
  }
  local_248[0] = &PTR__basic_ifstream_005acf28;
  local_148[0] = &PTR__basic_ifstream_005acf50;
  local_248[2] = &PTR__basic_filebuf_005ace30;
  std::basic_filebuf<char,std::char_traits<char>>::close();
  std::__basic_file<char>::~__basic_file(local_1d0);
  local_248[2] = &PTR__basic_streambuf_005ae810;
  std::locale::~locale(local_200);
  local_248[0] = (undefined **)PTR_DAT_005acef8;
  *(undefined **)((long)local_248 + *(long *)(PTR_DAT_005acef8 + -0x18)) = PTR_DAT_005acf00;
  local_248[1] = (undefined **)0x0;
  local_148[0] = &PTR__basic_ios_005add30;
  std::ios_base::~ios_base((ios_base *)local_148);
  return 1;
}

