// Decompiled function: parseTAR


/* FirmwareData::parseTAR(std::__cxx11::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&, int) */

undefined4 FirmwareData::parseTAR(basic_string *param_1,int param_2)

{
  void **ppvVar1;
  void **ppvVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  char *__s;
  size_t sVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 in_register_00000034;
  basic_string *pbVar10;
  undefined8 *this;
  undefined in_R8B;
  undefined in_R9B;
  void **ppvVar11;
  Tar *this_00;
  Tar local_258 [32];
  undefined *local_238;
  long local_230;
  undefined local_228 [16];
  undefined *local_218;
  long local_210;
  undefined local_208 [16];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  long local_1f0;
  undefined *local_1e8;
  ulong local_1e0;
  undefined local_1d8 [16];
  undefined ***local_1c8;
  long local_1c0;
  undefined **local_1b8 [2];
  long local_1a8;
  long local_1a0;
  ulong *local_198;
  long local_190;
  ulong local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  char *local_168;
  long local_160;
  char local_158 [16];
  undefined **local_148 [14];
  long *aplStack_d8 [13];
  undefined8 local_70;
  undefined local_68;
  undefined local_67;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  pbVar10 = (basic_string *)CONCAT44(in_register_00000034,param_2);
  this_00 = local_258;
  Tar::Tar(this_00,pbVar10);
  local_1e8 = local_1d8;
  local_1e0 = 0;
  local_1d8[0] = 0;
LAB_0017ea28:
  do {
                    /* try { // try from 0017ea2f to 0017eb6d has its CatchHandler @ 0017f3fc */
    cVar3 = FUN_0017b720(this_00,&local_1f8);
    if (cVar3 == '\0') {
      uVar5 = 1;
LAB_0017f250:
      if (local_1e8 != local_1d8) {
        operator_delete(local_1e8);
      }
      Tar::~Tar(this_00);
      return uVar5;
    }
    cVar3 = FUN_0017ba80(&local_1f8);
    if (cVar3 == '\0') {
      cVar3 = FUN_0017bc50(&local_1f8);
      if (cVar3 == '\0') {
        local_1c0 = 0;
        local_1b8[0] = (undefined **)((ulong)local_1b8[0] & 0xffffffffffffff00);
        local_190 = 0;
        local_188 = local_188 & 0xffffffffffffff00;
        local_198 = &local_188;
        local_1c8 = local_1b8;
                    /* try { // try from 0017eeda to 0017ef76 has its CatchHandler @ 0017f330 */
        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_1c8,
                   pbVar10);
        local_1a8 = CONCAT44(uStack_1f4,local_1f8);
        local_1a0 = local_1f0;
        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_198,
                   (basic_string *)&local_1e8);
        local_170 = 0xffffffff;
        local_168 = (char *)0x0;
        local_160 = 0;
        lVar8 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::rfind
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                           &local_1e8,'.',0xffffffffffffffff);
        uVar9 = lVar8 + 1;
        if (local_1e0 < uVar9) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0017f32b to 0017f32f has its CatchHandler @ 0017f330 */
          std::__throw_out_of_range_fmt
                    ("%s: __pos (which is %zu) > this->size() (which is %zu)",0xca,(char)uVar9,
                     (char)local_1e0,in_R8B,in_R9B,(char)this_00);
        }
        local_218 = local_208;
        FUN_0017bfe0(&local_218,local_1e8 + uVar9,local_1e8 + local_1e0);
                    /* try { // try from 0017ef81 to 0017ef85 has its CatchHandler @ 0017f2ff */
        iVar4 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                compare((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_218
                        ,"lz4");
        if (local_218 != local_208) {
          operator_delete(local_218);
        }
        if (iVar4 == 0) {
                    /* try { // try from 0017f0d4 to 0017f291 has its CatchHandler @ 0017f330 */
          FUN_0017ba10(this_00,&local_218,0x13);
          uVar5 = parseLZ4FrameHeader((FirmwareData *)param_1,(char *)&local_218,
                                      (FirmwareInfo *)&local_1c8);
          if ((char)uVar5 == '\0') {
            if (local_198 != &local_188) {
              operator_delete(local_198);
            }
            if (local_1c8 != local_1b8) {
              operator_delete(local_1c8);
            }
            goto LAB_0017f250;
          }
        }
        else {
          *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + CONCAT44(uStack_1f4,local_1f8);
        }
        plVar7 = *(long **)(param_1 + 0x158);
        if (plVar7 == *(long **)(param_1 + 0x160)) {
          std::vector<FirmwareInfo,std::allocator<FirmwareInfo>>::
          _M_emplace_back_aux<FirmwareInfo_const&>
                    ((vector<FirmwareInfo,std::allocator<FirmwareInfo>> *)(param_1 + 0x150),
                     (FirmwareInfo *)&local_1c8);
        }
        else {
          if (plVar7 != (long *)0x0) {
            *plVar7 = (long)(plVar7 + 2);
                    /* try { // try from 0017efec to 0017eff0 has its CatchHandler @ 0017f330 */
            FUN_0017bfe0(plVar7,local_1c8,(undefined *)((long)local_1c8 + local_1c0));
            plVar7[4] = local_1a8;
            plVar7[5] = local_1a0;
            plVar7[6] = (long)(plVar7 + 8);
                    /* try { // try from 0017f028 to 0017f02c has its CatchHandler @ 0017f2e4 */
            FUN_0017bfe0(plVar7 + 6,local_198,(long)local_198 + local_190);
            *(undefined4 *)(plVar7 + 10) = local_178;
            *(undefined4 *)((long)plVar7 + 0x54) = local_174;
            *(undefined4 *)(plVar7 + 0xb) = local_170;
            plVar7[0xd] = local_160;
            plVar7[0xc] = (long)local_168;
            plVar7 = *(long **)(param_1 + 0x158);
          }
          *(long **)(param_1 + 0x158) = plVar7 + 0xe;
        }
        if (local_198 != &local_188) {
          operator_delete(local_198);
        }
        if (local_1c8 != local_1b8) {
          operator_delete(local_1c8);
        }
      }
      else {
        cVar3 = FUN_0017bcb0(&local_1f8);
        if (cVar3 != '\0') {
          ppvVar1 = *(void ***)(param_1 + 0x170);
          ppvVar2 = *(void ***)(param_1 + 0x168);
          for (ppvVar11 = ppvVar2; ppvVar11 != ppvVar1; ppvVar11 = ppvVar11 + 4) {
            if ((void **)*ppvVar11 != ppvVar11 + 2) {
              operator_delete(*ppvVar11);
            }
          }
          *(void ***)(param_1 + 0x170) = ppvVar2;
          FUN_001843d0(TAG_abi_cxx11_,&local_1e8);
          __s = (char *)operator_new__(CONCAT44(uStack_1f4,local_1f8) + 1);
          FUN_0017ba10(this_00,__s,local_1f8);
          __s[CONCAT44(uStack_1f4,local_1f8)] = '\0';
          local_238 = local_228;
          sVar6 = strlen(__s);
          FUN_0017bfe0(&local_238,__s,__s + sVar6);
          std::ios_base::ios_base((ios_base *)local_148);
          local_68 = 0;
          local_70 = 0;
          local_67 = 0;
          local_60 = 0;
          local_58 = 0;
          local_148[0] = &PTR__basic_ios_005add30;
          local_50 = 0;
          local_48 = 0;
          local_1c8 = (undefined ***)PTR_DAT_005ac668;
          *(undefined **)((long)&local_1c8 + *(long *)(PTR_DAT_005ac668 + -0x18)) = PTR_DAT_005ac670
          ;
          local_1c0 = 0;
                    /* try { // try from 0017ec1a to 0017ec1e has its CatchHandler @ 0017f3f7 */
          std::basic_ios<char,std::char_traits<char>>::init
                    ((basic_ios<char,std::char_traits<char>> *)
                     ((long)&local_1c8 + *(long *)(PTR_DAT_005ac668 + -0x18)),(basic_streambuf *)0x0
                    );
          this = (undefined8 *)((long)local_1b8 + *(long *)(PTR_DAT_005ac678 + -0x18));
          local_1b8[0] = (undefined **)PTR_DAT_005ac678;
          *this = PTR_DAT_005ac680;
                    /* try { // try from 0017ec47 to 0017ec4b has its CatchHandler @ 0017f3f2 */
          std::basic_ios<char,std::char_traits<char>>::init
                    ((basic_ios<char,std::char_traits<char>> *)this,(basic_streambuf *)0x0);
          *(undefined **)((long)&local_1c8 + *(long *)(PTR_DAT_005ac660 + -0x18)) = PTR_DAT_005ac688
          ;
          local_1a8 = 0;
          local_1a0 = 0;
          local_198 = (ulong *)0x0;
          local_190 = 0;
          local_188 = 0;
          local_180 = 0;
          local_1c8 = (undefined ***)&PTR__basic_stringstream_005ac6c0;
          local_148[0] = &PTR__basic_stringstream_005ac710;
          local_1b8[0] = &PTR__basic_stringstream_005ac6e8;
          local_1b8[1] = &PTR__basic_streambuf_005ae810;
          std::locale::locale((locale *)&local_178);
          local_170 = 0;
          local_1b8[1] = &PTR__basic_stringbuf_005ac350;
          local_168 = local_158;
                    /* try { // try from 0017ed4b to 0017ed4f has its CatchHandler @ 0017f335 */
          FUN_0017bfe0(&local_168,local_238,local_238 + local_230);
          local_170 = 0x18;
                    /* try { // try from 0017ed6c to 0017ed70 has its CatchHandler @ 0017f43a */
          std::__cxx11::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>>::_M_sync
                    ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>> *)
                     (local_1b8 + 1),local_168,0,0);
                    /* try { // try from 0017ed7e to 0017ed82 has its CatchHandler @ 0017f404 */
          std::basic_ios<char,std::char_traits<char>>::init
                    ((basic_ios<char,std::char_traits<char>> *)local_148,
                     (basic_streambuf *)(local_1b8 + 1));
          if (local_238 != local_228) {
            operator_delete(local_238);
          }
          local_210 = 0;
          local_208[0] = 0;
          local_218 = local_208;
          while( true ) {
            plVar7 = *(long **)((long)aplStack_d8 + (long)local_1c8[-3]);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0017f297 to 0017f29b has its CatchHandler @ 0017f29c */
              std::__throw_bad_cast();
            }
            if (*(char *)(plVar7 + 7) == '\0') {
              std::ctype<char>::_M_widen_init();
              cVar3 = '\n';
              if (*(code **)(*plVar7 + 0x30) != (code *)PTR_do_widen_005b0fc8) {
                cVar3 = (**(code **)(*plVar7 + 0x30))(plVar7,10);
              }
            }
            else {
              cVar3 = *(char *)((long)plVar7 + 0x43);
            }
                    /* try { // try from 0017edd2 to 0017ee85 has its CatchHandler @ 0017f29c */
            plVar7 = (long *)std::getline<char,std::char_traits<char>,std::allocator<char>>
                                       ((basic_istream *)&local_1c8,(basic_string *)&local_218,cVar3
                                       );
            if ((*(byte *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0x20) & 5) != 0) break;
            plVar7 = *(long **)(param_1 + 0x170);
            if (plVar7 == *(long **)(param_1 + 0x178)) {
                    /* try { // try from 0017f0b8 to 0017f0bc has its CatchHandler @ 0017f29c */
              std::
              vector<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
              ::
              _M_emplace_back_aux<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>const&>
                        ((vector<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                          *)(param_1 + 0x168),(basic_string *)&local_218);
            }
            else {
              if (plVar7 != (long *)0x0) {
                *plVar7 = (long)(plVar7 + 2);
                FUN_0017bfe0(plVar7,local_218,local_218 + local_210);
                plVar7 = *(long **)(param_1 + 0x170);
              }
              *(long **)(param_1 + 0x170) = plVar7 + 4;
            }
          }
          operator_delete__(__s);
          if (local_218 != local_208) {
            operator_delete(local_218);
          }
          local_1c8 = (undefined ***)&PTR__basic_stringstream_005ac6c0;
          local_148[0] = &PTR__basic_stringstream_005ac710;
          local_1b8[0] = &PTR__basic_stringstream_005ac6e8;
          local_1b8[1] = &PTR__basic_stringbuf_005ac350;
          if (local_168 != local_158) {
            operator_delete(local_168);
          }
          local_1b8[1] = &PTR__basic_streambuf_005ae810;
          std::locale::~locale((locale *)&local_178);
          *(undefined **)((long)&local_1c8 + *(long *)(PTR_DAT_005ac660 + -0x18)) = PTR_DAT_005ac688
          ;
          local_1b8[0] = (undefined **)PTR_DAT_005ac678;
          *(undefined **)((long)local_1b8 + *(long *)(PTR_DAT_005ac678 + -0x18)) = PTR_DAT_005ac680;
          local_1c8 = (undefined ***)PTR_DAT_005ac668;
          *(undefined **)((long)&local_1c8 + *(long *)(PTR_DAT_005ac668 + -0x18)) = PTR_DAT_005ac670
          ;
          local_1c0 = 0;
          local_148[0] = &PTR__basic_ios_005add30;
          std::ios_base::~ios_base((ios_base *)local_148);
        }
      }
      goto LAB_0017ea28;
    }
    *(ulong *)(param_1 + 0x110) = CONCAT44(uStack_1f4,local_1f8);
    *(long *)(param_1 + 0x118) = local_1f0;
    std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)(param_1 + 0xa8),
               pbVar10);
  } while( true );
}

