// Decompiled function: extractGzipFile


/* FirmwareData::extractGzipFile(std::__cxx11::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&) */

void __thiscall
FirmwareData::extractGzipFile(FirmwareData *this,basic_string *param_1,basic_string *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  uchar *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  undefined in_R8B;
  undefined in_R9B;
  int iVar12;
  byte bVar13;
  undefined in_stack_fffffffffffffbf8;
  undefined *local_3f8 [2];
  undefined local_3e8 [16];
  long **local_3d8;
  long local_3d0;
  long *local_3c8;
  long local_3c0;
  undefined **local_3b8;
  undefined **local_3b0;
  undefined local_3a8;
  long *local_3a0;
  ByteQueue aBStack_388 [112];
  undefined4 *local_318;
  long local_308;
  undefined8 *local_300;
  long local_2f0;
  undefined4 *local_2d8;
  long local_2c8;
  undefined8 *local_2c0;
  long local_2b0;
  long local_288;
  undefined *local_280;
  undefined **local_248;
  long *local_240;
  undefined8 local_238;
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
  
  bVar13 = 0;
  lVar5 = *(long *)param_2;
  puVar3 = (undefined8 *)operator_new(0x28);
                    /* try { // try from 00180fe9 to 00180fed has its CatchHandler @ 0018161c */
  CryptoPP::Algorithm::Algorithm((Algorithm *)puVar3,false);
  puVar3[3] = 0;
  puVar3[1] = &PTR__FileSink_00589410;
  *puVar3 = &PTR__FileSink_00589288;
                    /* try { // try from 0018101a to 0018101e has its CatchHandler @ 0018175b */
  CryptoPP::AlgorithmParameters::AlgorithmParameters((AlgorithmParameters *)&local_248);
                    /* try { // try from 00181024 to 0018107a has its CatchHandler @ 001816ea */
  plVar4 = (long *)operator_new(0x28);
  *(undefined *)(plVar4 + 2) = 1;
  *(undefined *)((long)plVar4 + 0x11) = 0;
  plVar4[4] = lVar5;
  plVar4[1] = (long)"OutputFileName";
  plVar4[3] = (long)local_240;
  local_238 = (undefined **)CONCAT71(local_238._1_7_,1);
  *plVar4 = (long)&PTR__AlgorithmParametersTemplate_00584440;
  local_240 = plVar4;
  CryptoPP::AlgorithmParameters::AlgorithmParameters
            ((AlgorithmParameters *)&local_3b8,(AlgorithmParameters *)&local_248);
  local_248 = &PTR__AlgorithmParameters_0058acb0;
  if (local_240 != (long *)0x0) {
    (**(code **)(*local_240 + 8))();
  }
                    /* try { // try from 001810ad to 001810f6 has its CatchHandler @ 001816b5 */
  plVar4 = (long *)operator_new(0x28);
  *(undefined *)(plVar4 + 2) = local_3a8;
  *(undefined *)((long)plVar4 + 0x11) = 0;
  *(undefined *)(plVar4 + 4) = 1;
  plVar4[1] = (long)"OutputBinaryMode";
  *plVar4 = (long)&PTR__AlgorithmParametersTemplate_0058f888;
  plVar4[3] = (long)local_3b0;
  local_3b0 = (undefined **)plVar4;
  CryptoPP::FileSink::IsolatedInitialize((FileSink *)puVar3,(NameValuePairs *)&local_3b8);
  local_3b8 = &PTR__AlgorithmParameters_0058acb0;
  if (local_3b0 != (undefined **)0x0) {
    (**(code **)((long)*local_3b0 + 8))();
  }
  CryptoPP::Gunzip::Gunzip((Gunzip *)&local_3b8,(BufferedTransformation *)puVar3,false,-1);
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
  local_248 = (undefined **)PTR_DAT_005acef8;
  *(undefined **)((long)&local_248 + *(long *)(PTR_DAT_005acef8 + -0x18)) = PTR_DAT_005acf00;
  local_240 = (long *)0x0;
                    /* try { // try from 001811cb to 001811cf has its CatchHandler @ 001816b0 */
  std::basic_ios<char,std::char_traits<char>>::init
            ((basic_ios<char,std::char_traits<char>> *)
             ((long)&local_248 + *(long *)(PTR_DAT_005acef8 + -0x18)),(basic_streambuf *)0x0);
  local_248 = &PTR__basic_ifstream_005acf28;
  local_148[0] = &PTR__basic_ifstream_005acf50;
                    /* try { // try from 001811fa to 001811fe has its CatchHandler @ 0018166c */
  std::basic_filebuf<char,std::char_traits<char>>::basic_filebuf();
                    /* try { // try from 0018120a to 0018123e has its CatchHandler @ 00181715 */
  std::basic_ios<char,std::char_traits<char>>::init
            ((basic_ios<char,std::char_traits<char>> *)local_148,(basic_streambuf *)&local_238);
  lVar5 = std::basic_filebuf<char,std::char_traits<char>>::open
                    ((basic_filebuf<char,std::char_traits<char>> *)&local_238,pcVar1,0xc);
  if (lVar5 == 0) {
                    /* try { // try from 001815dc to 001815e0 has its CatchHandler @ 00181715 */
    std::basic_ios<char,std::char_traits<char>>::clear();
  }
  else {
    std::basic_ios<char,std::char_traits<char>>::clear
              ((basic_ios<char,std::char_traits<char>> *)((long)&local_248 + (long)local_248[-3]));
  }
                    /* try { // try from 00181249 to 001812b6 has its CatchHandler @ 00181634 */
  std::basic_istream<char,std::char_traits<char>>::seekg
            ((basic_istream<char,std::char_traits<char>> *)&local_248,0,2);
  lVar5 = std::basic_istream<char,std::char_traits<char>>::tellg();
  std::basic_istream<char,std::char_traits<char>>::seekg((fpos)&local_248);
  puVar6 = (uchar *)operator_new__(0x100000);
  lVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::rfind
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)param_1,'/',
                     0xffffffffffffffff);
  uVar9 = *(ulong *)(param_1 + 8);
  uVar8 = lVar7 + 1;
  if (uVar9 < uVar8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0018177b to 0018177f has its CatchHandler @ 00181634 */
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)",0xca,(char)uVar8,(char)uVar9
               ,in_R8B,in_R9B,in_stack_fffffffffffffbf8);
  }
  local_3f8[0] = local_3e8;
  FUN_0017bfe0(local_3f8,*(long *)param_1 + uVar8,*(long *)param_1 + uVar9);
                    /* try { // try from 001812cb to 001812cf has its CatchHandler @ 00181763 */
  plVar4 = (long *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                   _M_replace((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                              local_3f8,0,0,"Extract ",8);
  local_3d8 = &local_3c8;
  if ((long **)*plVar4 == (long **)(plVar4 + 2)) {
    local_3c8 = (long *)plVar4[2];
    local_3c0 = plVar4[3];
  }
  else {
    local_3c8 = (long *)plVar4[2];
    local_3d8 = (long **)*plVar4;
  }
  local_3d0 = plVar4[1];
  *(undefined *)(plVar4 + 2) = 0;
  *plVar4 = (long)(plVar4 + 2);
  plVar4[1] = 0;
                    /* try { // try from 0018131e to 00181322 has its CatchHandler @ 00181726 */
  FUN_00184550(TAG_abi_cxx11_,&local_3d8);
  if (local_3d8 != &local_3c8) {
    operator_delete(local_3d8);
  }
  if (local_3f8[0] != local_3e8) {
    operator_delete(local_3f8[0]);
  }
  if (0 < lVar5) {
    lVar7 = 0;
    iVar12 = 0;
    do {
      uVar9 = lVar5 - lVar7;
      if (0x100000 < (long)uVar9) {
        uVar9 = 0x100000;
      }
                    /* try { // try from 00181377 to 001813d7 has its CatchHandler @ 00181634 */
      std::basic_istream<char,std::char_traits<char>>::read
                ((basic_istream<char,std::char_traits<char>> *)&local_248,(char *)puVar6,uVar9);
      lVar7 = lVar7 + uVar9;
      CryptoPP::Inflator::Put2((Inflator *)&local_3b8,puVar6,uVar9,(uint)(lVar5 <= lVar7),true);
      uVar9 = (lVar7 * 100) / lVar5;
      iVar2 = (int)uVar9;
      if (iVar2 != iVar12) {
        FUN_00184740(uVar9 & 0xffffffff,0,(lVar7 * 100) % lVar5);
      }
      iVar12 = iVar2;
    } while (lVar7 < lVar5);
  }
  operator_delete__(puVar6);
  lVar5 = std::basic_filebuf<char,std::char_traits<char>>::close();
  if (lVar5 == 0) {
                    /* try { // try from 00181612 to 00181616 has its CatchHandler @ 00181634 */
    std::basic_ios<char,std::char_traits<char>>::clear
              ((basic_ios<char,std::char_traits<char>> *)((long)&local_248 + (long)local_248[-3]),
               *(uint *)((long)auStack_228 + (long)local_248[-3]) | 4);
  }
  local_248 = &PTR__basic_ifstream_005acf28;
  local_148[0] = &PTR__basic_ifstream_005acf50;
  local_238 = &PTR__basic_filebuf_005ace30;
  std::basic_filebuf<char,std::char_traits<char>>::close();
  std::__basic_file<char>::~__basic_file(local_1d0);
  local_238 = &PTR__basic_streambuf_005ae810;
  std::locale::~locale(local_200);
  local_248 = (undefined **)PTR_DAT_005acef8;
  *(undefined **)((long)&local_248 + *(long *)(PTR_DAT_005acef8 + -0x18)) = PTR_DAT_005acf00;
  local_240 = (long *)0x0;
  local_148[0] = &PTR__basic_ios_005add30;
  std::ios_base::~ios_base((ios_base *)local_148);
  local_3b0 = &PTR__Inflator_0058d418;
  local_3b8 = &PTR__Inflator_0058d248;
  puVar10 = local_280;
  for (; local_288 != 0; local_288 = local_288 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + (ulong)bVar13 * -2 + 1;
  }
  CryptoPP::UnalignedDeallocate(local_280);
  if (local_2c0 != (undefined8 *)0x0) {
    puVar3 = local_2c0;
    for (lVar5 = local_2b0 - (long)local_2c0 >> 3; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar13 * -2 + 1;
    }
    CryptoPP::UnalignedDeallocate(local_2c0);
  }
  lVar5 = local_2c8 - (long)local_2d8 >> 2;
  puVar11 = local_2d8;
  if (local_2d8 != (undefined4 *)0x0) {
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
    }
    CryptoPP::UnalignedDeallocate(local_2d8);
  }
  if (local_300 != (undefined8 *)0x0) {
    puVar3 = local_300;
    for (lVar5 = local_2f0 - (long)local_300 >> 3; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar13 * -2 + 1;
    }
    CryptoPP::UnalignedDeallocate(local_300);
  }
  lVar5 = local_308 - (long)local_318 >> 2;
  puVar11 = local_318;
  if (local_318 != (undefined4 *)0x0) {
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
    }
    CryptoPP::UnalignedDeallocate(local_318);
  }
  CryptoPP::ByteQueue::~ByteQueue(aBStack_388);
  local_3b0 = (undefined **)&DAT_005a6678;
  local_3b8 = (undefined **)&DAT_005a64d8;
  if (local_3a0 != (long *)0x0) {
    (**(code **)(*local_3a0 + 8))();
  }
  return;
}

