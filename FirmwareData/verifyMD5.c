// Decompiled function: verifyMD5


/* FirmwareData::verifyMD5(std::__cxx11::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&) */

undefined8 __thiscall FirmwareData::verifyMD5(FirmwareData *this,basic_string *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uchar *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  uint *puVar18;
  undefined4 *puVar19;
  undefined in_R8B;
  undefined in_R9B;
  undefined8 uVar20;
  bool bVar21;
  byte bVar22;
  undefined in_stack_fffffffffffffac8;
  uchar local_4f8 [16];
  undefined **local_4e8;
  long *local_4e0;
  undefined local_4d8;
  undefined **local_4c8;
  long *local_4c0;
  undefined local_4b8;
  undefined8 *local_4a8;
  ulong local_4a0;
  undefined8 local_498 [2];
  undefined8 *local_488;
  ulong local_480;
  undefined8 local_478 [2];
  undefined *local_468;
  undefined8 local_460;
  undefined local_458 [16];
  undefined *local_448;
  long local_440;
  undefined local_438 [16];
  undefined *local_428;
  undefined8 local_420;
  undefined local_418 [16];
  undefined *local_408 [2];
  undefined auStack_3f8 [16];
  undefined *local_3e8 [2];
  undefined local_3d8 [16];
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  uint local_3a8;
  undefined **local_398;
  undefined **local_390;
  long *local_380;
  long local_340;
  undefined *local_338;
  long *local_310;
  undefined **local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 auStack_2f8 [16];
  undefined local_2b7;
  long local_2b0;
  undefined4 *local_2a8;
  uint local_2a0 [16];
  undefined local_25f;
  long local_258;
  uint *local_250;
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
  
  bVar22 = 0;
  pcVar1 = *(char **)param_1;
  std::ios_base::ios_base((ios_base *)local_148);
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
                    /* try { // try from 0017f522 to 0017f526 has its CatchHandler @ 00180140 */
  std::basic_ios<char,std::char_traits<char>>::init
            ((basic_ios<char,std::char_traits<char>> *)
             ((long)local_248 + *(long *)(PTR_DAT_005acef8 + -0x18)),(basic_streambuf *)0x0);
  local_248[0] = &PTR__basic_ifstream_005acf28;
  local_148[0] = &PTR__basic_ifstream_005acf50;
                    /* try { // try from 0017f551 to 0017f555 has its CatchHandler @ 001803a0 */
  std::basic_filebuf<char,std::char_traits<char>>::basic_filebuf();
                    /* try { // try from 0017f561 to 0017f595 has its CatchHandler @ 00180182 */
  std::basic_ios<char,std::char_traits<char>>::init
            ((basic_ios<char,std::char_traits<char>> *)local_148,(basic_streambuf *)(local_248 + 2))
  ;
  lVar6 = std::basic_filebuf<char,std::char_traits<char>>::open
                    ((basic_filebuf<char,std::char_traits<char>> *)(local_248 + 2),pcVar1,0xc);
  if (lVar6 == 0) {
                    /* try { // try from 0018002d to 00180031 has its CatchHandler @ 00180182 */
    std::basic_ios<char,std::char_traits<char>>::clear
              ((basic_ios<char,std::char_traits<char>> *)((long)local_248 + (long)local_248[0][-3]),
               *(uint *)((long)auStack_228 + (long)local_248[0][-3]) | 4);
  }
  else {
    std::basic_ios<char,std::char_traits<char>>::clear
              ((basic_ios<char,std::char_traits<char>> *)((long)local_248 + (long)local_248[0][-3]),
               0);
  }
  local_4a8 = local_498;
                    /* try { // try from 0017f5c4 to 0017f5c8 has its CatchHandler @ 001801be */
  FUN_0017bfe0(&local_4a8,*(long *)param_1,*(long *)param_1 + *(long *)(param_1 + 8));
                    /* try { // try from 0017f5df to 0017f72a has its CatchHandler @ 001801b6 */
  lVar6 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::find_last_of
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_4a8,
                     "\\/",0xffffffffffffffff,2);
  if (lVar6 == -1) goto LAB_0017f6dc;
  uVar15 = (local_4a0 - 1) - lVar6;
  uVar7 = lVar6 + 1;
  if (local_4a0 < uVar7) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0018039b to 0018039f has its CatchHandler @ 001801b6 */
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)",0xca,(char)uVar7,
               (char)local_4a0,in_R8B,in_R9B,in_stack_fffffffffffffac8);
  }
  local_488 = local_478;
  uVar12 = local_4a0 - uVar7;
  if (uVar15 < local_4a0 - uVar7) {
    uVar12 = uVar15;
  }
  FUN_0017bfe0(&local_488,(undefined *)(uVar7 + (long)local_4a8),
               (undefined *)(uVar7 + (long)local_4a8) + uVar12);
  uVar20 = local_498[0];
  puVar9 = local_4a8;
  if (local_488 == local_478) {
    std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_4a8,
               (basic_string *)&local_488);
  }
  else {
    if (local_4a8 != local_498) {
      local_4a8 = local_488;
      local_4a0 = local_480;
      local_498[0] = local_478[0];
      if (puVar9 != (undefined8 *)0x0) {
        local_488 = puVar9;
        local_478[0] = uVar20;
        goto LAB_0017f6b7;
      }
    }
    local_498[0] = local_478[0];
    local_4a0 = local_480;
    local_4a8 = local_488;
    local_488 = local_478;
  }
LAB_0017f6b7:
  local_480 = 0;
  *(undefined *)local_488 = 0;
  if (local_488 != local_478) {
    operator_delete(local_488);
  }
LAB_0017f6dc:
  std::basic_istream<char,std::char_traits<char>>::seekg
            ((basic_istream<char,std::char_traits<char>> *)local_248,0,2);
  lVar6 = std::basic_istream<char,std::char_traits<char>>::tellg();
  std::basic_istream<char,std::char_traits<char>>::seekg
            ((basic_istream<char,std::char_traits<char>> *)local_248,0,0);
  lVar6 = (lVar6 - local_4a0) + -0x1f;
  CryptoPP::Algorithm::Algorithm((Algorithm *)&local_308,true);
  local_250 = local_2a0;
  local_300 = 0;
  local_2a8 = auStack_2f8;
  local_2fc = 0;
  local_2b0 = 0x10;
  local_2b7 = 1;
  local_258 = 0x10;
  local_25f = 1;
  local_308 = &PTR__IteratedHashWithStaticTransform_005857b0;
                    /* try { // try from 0017f793 to 0017f797 has its CatchHandler @ 0018020b */
  CryptoPP::Weak1::MD5::InitState(local_250);
  local_308 = &PTR__MD5_00585888;
                    /* try { // try from 0017f7ac to 0017f868 has its CatchHandler @ 00180203 */
  puVar8 = (uchar *)operator_new__(0x100000);
  if (0 < lVar6) {
    lVar16 = 0;
    iVar3 = 0;
    do {
      uVar7 = lVar6 - lVar16;
      if (0x100000 < (long)uVar7) {
        uVar7 = 0x100000;
      }
      std::basic_istream<char,std::char_traits<char>>::read
                ((basic_istream<char,std::char_traits<char>> *)local_248,(char *)puVar8,uVar7);
      CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::Update
                ((IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *)&local_308,puVar8,
                 uVar7);
      lVar16 = lVar16 + uVar7;
      uVar7 = (lVar16 * 100) / lVar6;
      iVar2 = (int)uVar7;
      if (iVar2 != iVar3) {
        FUN_00184740(uVar7 & 0xffffffff,0,(lVar16 * 100) % lVar6);
      }
      iVar3 = iVar2;
    } while (lVar16 < lVar6);
  }
  operator_delete__(puVar8);
  CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::TruncatedFinal
            ((IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *)&local_308,local_4f8,
             0x10);
  local_448 = local_438;
  FUN_0017bfe0(&local_448,&DAT_00311ecb);
  local_468 = local_458;
                    /* try { // try from 0017f88f to 0017f893 has its CatchHandler @ 001801fe */
  FUN_0017bfe0(&local_468,&DAT_00316417,&DAT_00316418);
                    /* try { // try from 0017f899 to 0017f89d has its CatchHandler @ 001801c6 */
  puVar9 = (undefined8 *)operator_new(0x70);
                    /* try { // try from 0017f8a6 to 0017f8aa has its CatchHandler @ 001803a5 */
  CryptoPP::Filter::Filter((Filter *)puVar9,(BufferedTransformation *)0x0);
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  puVar9[1] = &PTR__Grouper_0058dbf8;
  *puVar9 = &PTR__Grouper_0058da58;
                    /* try { // try from 0017f8f9 to 0017f8fd has its CatchHandler @ 00180318 */
  CryptoPP::Filter::Detach((Filter *)puVar9,(BufferedTransformation *)0x0);
                    /* try { // try from 0017f903 to 0017f907 has its CatchHandler @ 001801c6 */
  puVar10 = (undefined8 *)operator_new(0x68);
                    /* try { // try from 0017f910 to 0017f914 has its CatchHandler @ 00180313 */
  CryptoPP::Filter::Filter((Filter *)puVar10,(BufferedTransformation *)0x0);
  puVar10[6] = 0;
  *(undefined4 *)(puVar10 + 7) = 0;
  *(undefined4 *)((long)puVar10 + 0x3c) = 0;
  *(undefined4 *)(puVar10 + 8) = 0;
  *(undefined4 *)((long)puVar10 + 0x44) = 0;
  *(undefined4 *)(puVar10 + 9) = 0;
  puVar10[1] = &PTR__BaseN_Encoder_0058d850;
  puVar10[0xb] = 0;
  *puVar10 = &PTR__BaseN_Encoder_0058d6a8;
  puVar10[0xc] = 0;
                    /* try { // try from 0017f96e to 0017f972 has its CatchHandler @ 001802bd */
  CryptoPP::Filter::Detach((Filter *)puVar10,(BufferedTransformation *)puVar9);
                    /* try { // try from 0017f988 to 0017f98c has its CatchHandler @ 001801c6 */
  CryptoPP::ProxyFilter::ProxyFilter
            ((ProxyFilter *)&local_398,(BufferedTransformation *)puVar10,0,0,
             (BufferedTransformation *)0x0);
  puVar17 = local_448;
  puVar13 = local_468;
  local_390 = &PTR__HexEncoder_00589690;
  local_398 = &PTR__HexEncoder_00589488;
                    /* try { // try from 0017f9ea to 0017f9ee has its CatchHandler @ 001802b8 */
  CryptoPP::AlgorithmParameters::AlgorithmParameters((AlgorithmParameters *)&local_4c8);
                    /* try { // try from 0017f9f4 to 0017fa43 has its CatchHandler @ 00180293 */
  plVar11 = (long *)operator_new(0x28);
  *(undefined *)(plVar11 + 2) = 1;
  *(undefined *)((long)plVar11 + 0x11) = 0;
  plVar11[1] = (long)"Uppercase";
  *(undefined *)(plVar11 + 4) = 0;
  local_4b8 = 1;
  *plVar11 = (long)&PTR__AlgorithmParametersTemplate_0058f888;
  plVar11[3] = (long)local_4c0;
  local_4c0 = plVar11;
  CryptoPP::AlgorithmParameters::AlgorithmParameters
            ((AlgorithmParameters *)&local_4e8,(AlgorithmParameters *)&local_4c8);
  local_4c8 = &PTR__AlgorithmParameters_0058acb0;
  if (local_4c0 != (long *)0x0) {
    (**(code **)(*local_4c0 + 8))();
  }
                    /* try { // try from 0017fa6e to 0017fb7a has its CatchHandler @ 0018021b */
  puVar9 = (undefined8 *)operator_new(0x28);
  *(undefined *)(puVar9 + 2) = local_4d8;
  *(undefined *)((long)puVar9 + 0x11) = 0;
  *(undefined4 *)(puVar9 + 4) = 0;
  puVar9[1] = "GroupSize";
  *puVar9 = &PTR__AlgorithmParametersTemplate_0058f8b8;
  puVar9[3] = local_4e0;
  local_4e0 = puVar9;
  puVar9 = (undefined8 *)operator_new(0x50);
  *(undefined *)(puVar9 + 2) = local_4d8;
  *(undefined *)((long)puVar9 + 0x11) = 0;
  *(undefined *)(puVar9 + 4) = 0;
  puVar9[8] = 0;
  puVar9[1] = "Separator";
  puVar9[9] = 0;
  *puVar9 = &PTR__AlgorithmParametersTemplate_0058f8e8;
  puVar9[5] = puVar13;
  puVar9[3] = local_4e0;
  puVar9[6] = local_460;
  local_4e0 = puVar9;
  plVar11 = (long *)operator_new(0x50);
  *(undefined *)(plVar11 + 2) = local_4d8;
  *(undefined *)((long)plVar11 + 0x11) = 0;
  *(undefined *)(plVar11 + 4) = 0;
  plVar11[8] = 0;
  plVar11[1] = (long)"Terminator";
  plVar11[9] = 0;
  *plVar11 = (long)&PTR__AlgorithmParametersTemplate_0058f8e8;
  plVar11[5] = (long)puVar17;
  plVar11[3] = (long)local_4e0;
  plVar11[6] = local_440;
  local_4e0 = plVar11;
  CryptoPP::HexEncoder::IsolatedInitialize((HexEncoder *)&local_398,(NameValuePairs *)&local_4e8);
  local_4e8 = &PTR__AlgorithmParameters_0058acb0;
  if (local_4e0 != (long *)0x0) {
    (**(code **)(*local_4e0 + 8))();
  }
  puVar14 = (undefined *)0x0;
  puVar17 = puVar14;
  for (puVar13 = puVar14; puVar13 != (undefined *)0x0; puVar13 = puVar13 + -1) {
    *puVar17 = 0;
    puVar17 = puVar17 + (ulong)bVar22 * -2 + 1;
  }
  CryptoPP::UnalignedDeallocate((void *)0x0);
  puVar13 = puVar14;
  for (; puVar14 != (undefined *)0x0; puVar14 = puVar14 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (ulong)bVar22 * -2 + 1;
  }
  CryptoPP::UnalignedDeallocate((void *)0x0);
  if (local_468 != local_458) {
    operator_delete(local_468);
  }
  if (local_448 != local_438) {
    operator_delete(local_448);
  }
  local_420 = 0;
  local_418[0] = 0;
  local_3c8 = 0;
  local_428 = local_418;
  local_3c0 = 0;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3a8 = 0;
                    /* try { // try from 0017fc55 to 0017fc59 has its CatchHandler @ 00180213 */
  puVar9 = (undefined8 *)operator_new(0x20);
                    /* try { // try from 0017fc62 to 0017fc66 has its CatchHandler @ 0018016a */
  CryptoPP::Algorithm::Algorithm((Algorithm *)puVar9,false);
  puVar9[3] = &local_428;
  puVar9[1] = &PTR__StringSinkTemplate_00591770;
  *puVar9 = &PTR__StringSinkTemplate_005915e8;
                    /* try { // try from 0017fc8a to 0017fcf0 has its CatchHandler @ 00180213 */
  CryptoPP::BufferedTransformation::Attach
            ((BufferedTransformation *)&local_398,(BufferedTransformation *)puVar9);
  CryptoPP::FilterWithBufferedInput::PutMaybeModifiable
            ((FilterWithBufferedInput *)&local_398,local_4f8,0x10,0,true,false);
  CryptoPP::FilterWithBufferedInput::PutMaybeModifiable
            ((FilterWithBufferedInput *)&local_398,(uchar *)0x0,0,-1,true,false);
  std::basic_istream<char,std::char_traits<char>>::read
            ((basic_istream<char,std::char_traits<char>> *)local_248,(char *)&local_3c8,0x20);
  local_3a8 = local_3a8 & 0xffffff00;
  iVar3 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::compare
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_428,
                     (char *)&local_3c8);
  uVar20 = 1;
  if (iVar3 != 0) {
                    /* try { // try from 0017ff0a to 0017ff0e has its CatchHandler @ 00180213 */
    std::operator+(local_408,"md5 fail : ",&local_428);
                    /* try { // try from 0017ff19 to 0017ff1d has its CatchHandler @ 001803aa */
    FUN_001843d0(TAG_abi_cxx11_,local_408);
    if (local_408[0] != auStack_3f8) {
      operator_delete(local_408[0]);
    }
    local_3e8[0] = local_3d8;
    puVar9 = &local_3c8;
    do {
      puVar10 = puVar9;
      uVar4 = *(uint *)puVar10 + 0xfefefeff & ~*(uint *)puVar10;
      uVar5 = uVar4 & 0x80808080;
      puVar9 = (undefined8 *)((long)puVar10 + 4);
    } while (uVar5 == 0);
    bVar21 = (uVar4 & 0x8080) == 0;
    if (bVar21) {
      uVar5 = uVar5 >> 0x10;
    }
    if (bVar21) {
      puVar9 = (undefined8 *)((long)puVar10 + 6);
    }
                    /* try { // try from 0017ff86 to 0017ff8a has its CatchHandler @ 00180213 */
    FUN_0017bfe0(local_3e8,&local_3c8,
                 (char *)((long)puVar9 + (-3 - (ulong)CARRY1((byte)uVar5,(byte)uVar5))),
                 uVar5 & 0xffffff00);
                    /* try { // try from 0017ff95 to 0017ff99 has its CatchHandler @ 00180051 */
    FUN_001843d0(TAG_abi_cxx11_,local_3e8);
    if (local_3e8[0] != local_3d8) {
      operator_delete(local_3e8[0]);
    }
    uVar20 = 0;
  }
  if (local_428 != local_418) {
    operator_delete(local_428);
  }
  local_390 = (undefined **)&DAT_005a6e70;
  local_398 = (undefined **)&DAT_005a6c68;
  if (local_310 != (long *)0x0) {
    (**(code **)(*local_310 + 8))();
  }
  local_390 = (undefined **)&DAT_005a6a80;
  local_398 = (undefined **)&DAT_005a6878;
  puVar13 = local_338;
  for (; local_340 != 0; local_340 = local_340 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (ulong)bVar22 * -2 + 1;
  }
  CryptoPP::UnalignedDeallocate(local_338);
  local_390 = (undefined **)&DAT_005a6678;
  local_398 = (undefined **)&DAT_005a64d8;
  if (local_380 != (long *)0x0) {
    (**(code **)(*local_380 + 8))();
  }
  if (local_250 == local_2a0) {
    local_25f = 0;
    puVar18 = local_2a0;
    for (lVar6 = local_258; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar18 = 0;
      puVar18 = puVar18 + (ulong)bVar22 * -2 + 1;
    }
  }
  local_308 = (undefined **)&DAT_005856d8;
  if (local_2a8 == auStack_2f8) {
    local_2b7 = 0;
    puVar19 = auStack_2f8;
    for (lVar6 = local_2b0; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar19 = 0;
      puVar19 = puVar19 + (ulong)bVar22 * -2 + 1;
    }
  }
  if (local_4a8 != local_498) {
    operator_delete(local_4a8);
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
  return uVar20;
}

