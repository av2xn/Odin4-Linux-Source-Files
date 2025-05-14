// Decompiled function: parseBinaryInternal


/* FirmwareData::parseBinaryInternal(std::__cxx11::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&) */

ulong __thiscall FirmwareData::parseBinaryInternal(FirmwareData *this,basic_string *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined in_R8B;
  undefined in_R9B;
  ulong uVar10;
  undefined in_stack_ffffffffffffff38;
  undefined8 *local_b8;
  ulong local_b0;
  undefined8 local_a8 [2];
  undefined8 *local_98;
  ulong local_90;
  undefined8 local_88 [2];
  undefined *local_78 [2];
  undefined auStack_68 [56];
  
  if ((DAT_005b23c0 == '\0') && (iVar6 = __cxa_guard_acquire(&DAT_005b23c0), iVar6 != 0)) {
    DAT_005b23e0 = &DAT_005b23f0;
                    /* try { // try from 0018070b to 0018070f has its CatchHandler @ 00180ad2 */
    FUN_0017bfe0(&DAT_005b23e0,&DAT_00300eca,&DAT_00300ece);
    __cxa_guard_release(&DAT_005b23c0);
    __cxa_atexit(std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                 ~basic_string,&DAT_005b23e0,&__dso_handle);
  }
  if ((DAT_005b2380 == '\0') && (iVar6 = __cxa_guard_acquire(&DAT_005b2380), iVar6 != 0)) {
    DAT_005b23a0 = &DAT_005b23b0;
                    /* try { // try from 00180763 to 00180767 has its CatchHandler @ 00180abb */
    FUN_0017bfe0(&DAT_005b23a0,&DAT_00300ecf,&DAT_00300ed3);
    __cxa_guard_release(&DAT_005b2380);
    __cxa_atexit(std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                 ~basic_string,&DAT_005b23a0,&__dso_handle);
  }
  if ((DAT_005b2340 == '\0') && (iVar6 = __cxa_guard_acquire(&DAT_005b2340), iVar6 != 0)) {
    DAT_005b2360 = &DAT_005b2370;
                    /* try { // try from 001807bb to 001807bf has its CatchHandler @ 00180b1b */
    FUN_0017bfe0(&DAT_005b2360,&DAT_00300ed4,&DAT_00300ed8);
    __cxa_guard_release(&DAT_005b2340);
    __cxa_atexit(std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                 ~basic_string,&DAT_005b2360,&__dso_handle);
  }
  if ((DAT_005b2300 == '\0') && (iVar6 = __cxa_guard_acquire(&DAT_005b2300), iVar6 != 0)) {
    DAT_005b2320 = &DAT_005b2330;
                    /* try { // try from 001806b3 to 001806b7 has its CatchHandler @ 00180ae9 */
    FUN_0017bfe0(&DAT_005b2320,&DAT_00300ed9,&DAT_00300edd);
    __cxa_guard_release(&DAT_005b2300);
    __cxa_atexit(std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                 ~basic_string,&DAT_005b2320,&__dso_handle);
  }
  if ((DAT_005b22c0 == '\0') && (iVar6 = __cxa_guard_acquire(&DAT_005b22c0), iVar6 != 0)) {
    DAT_005b22e0 = &DAT_005b22f0;
                    /* try { // try from 001804c3 to 001804c7 has its CatchHandler @ 00180aa4 */
    FUN_0017bfe0(&DAT_005b22e0,&DAT_00300ede,&DAT_00300ee2);
    __cxa_guard_release(&DAT_005b22c0);
    __cxa_atexit(std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                 ~basic_string,&DAT_005b22e0,&__dso_handle);
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (uVar2 < 4) {
    return 0;
  }
  uVar10 = uVar2 - 4;
  if (uVar2 < uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)",0xca,(char)uVar10,
               (char)uVar2,in_R8B,in_R9B,in_stack_ffffffffffffff38);
  }
  local_b8 = local_a8;
  FUN_0017bfe0(&local_b8,*(long *)param_1 + uVar10,uVar2 + *(long *)param_1);
  puVar1 = (undefined8 *)((long)local_b8 + local_b0);
  puVar9 = puVar1;
  uVar2 = DAT_005b23e8;
  uVar10 = local_b0;
  for (puVar8 = local_b8; DAT_005b23e8 = uVar2, local_b0 = uVar10, puVar8 != puVar1;
      puVar8 = (undefined8 *)((long)puVar8 + 1)) {
    iVar6 = toupper((int)*(char *)puVar8);
    *(char *)puVar8 = (char)iVar6;
    puVar9 = local_b8;
    uVar2 = DAT_005b23e8;
    uVar10 = local_b0;
  }
  uVar7 = uVar10;
  if (uVar2 <= uVar10) {
    uVar7 = uVar2;
  }
  if (uVar7 == 0) {
LAB_001807f0:
    if (((uVar10 - uVar2) + 0x80000000 < 0x100000000) && ((int)(uVar10 - uVar2) == 0)) {
      uVar2 = *(ulong *)(param_1 + 8);
      uVar7 = 0;
      if (uVar2 < 8) goto LAB_00180825;
      uVar10 = uVar2 - 8;
      if (uVar2 < uVar10) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00180a9f to 00180aa3 has its CatchHandler @ 00180be2 */
        std::__throw_out_of_range_fmt
                  ("%s: __pos (which is %zu) > this->size() (which is %zu)",0xca,(char)uVar10,
                   (char)uVar2,in_R8B,in_R9B,in_stack_ffffffffffffff38);
      }
      local_98 = local_88;
      FUN_0017bfe0(&local_98,uVar10 + *(long *)param_1,uVar10 + *(long *)param_1 + 4);
      uVar4 = local_a8[0];
      puVar1 = local_b8;
      if (local_98 == local_88) {
        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_b8,
                   (basic_string *)&local_98);
      }
      else {
        if (local_b8 != local_a8) {
          local_b8 = local_98;
          local_b0 = local_90;
          local_a8[0] = local_88[0];
          if (puVar1 != (undefined8 *)0x0) {
            local_98 = puVar1;
            local_88[0] = uVar4;
            goto LAB_001809cb;
          }
        }
        local_a8[0] = local_88[0];
        local_b0 = local_90;
        local_b8 = local_98;
        local_98 = local_88;
      }
LAB_001809cb:
      local_90 = 0;
      *(char *)local_98 = '\0';
      if (local_98 != local_88) {
        operator_delete(local_98);
      }
      puVar1 = (undefined8 *)((long)local_b8 + local_b0);
      puVar9 = local_b8;
      if (puVar1 == local_b8) {
        bVar3 = true;
        uVar10 = local_b0;
      }
      else {
        do {
          puVar8 = (undefined8 *)((long)puVar9 + 1);
          iVar6 = toupper((int)*(char *)puVar9);
          *(char *)puVar9 = (char)iVar6;
          puVar9 = puVar8;
        } while (puVar1 != puVar8);
        bVar3 = true;
        puVar9 = local_b8;
        uVar10 = local_b0;
      }
    }
    else {
      bVar3 = false;
    }
  }
  else {
    iVar6 = memcmp(puVar9,DAT_005b23e0,uVar7);
    bVar3 = false;
    if (iVar6 == 0) goto LAB_001807f0;
  }
  uVar2 = DAT_005b23a8;
  uVar7 = uVar10;
  if (DAT_005b23a8 <= uVar10) {
    uVar7 = DAT_005b23a8;
  }
  if ((((uVar7 == 0) || (iVar6 = memcmp(puVar9,DAT_005b23a0,uVar7), iVar6 == 0)) &&
      ((uVar10 - uVar2) + 0x80000000 < 0x100000000)) && ((int)(uVar10 - uVar2) == 0)) {
                    /* try { // try from 001808b6 to 001808ba has its CatchHandler @ 00180be2 */
    std::operator+(local_78,"Check file : ",param_1);
                    /* try { // try from 001808c5 to 001808c9 has its CatchHandler @ 00180b32 */
    FUN_00184550(TAG_abi_cxx11_,local_78);
    if (local_78[0] != auStack_68) {
      operator_delete(local_78[0]);
    }
                    /* try { // try from 001808e3 to 001808e7 has its CatchHandler @ 00180be2 */
    cVar5 = verifySHA256(this,param_1);
    if (((cVar5 != '\0') || (!bVar3)) ||
       (uVar7 = verifyMD5(this,param_1), puVar9 = local_b8, (char)uVar7 != '\0')) {
                    /* try { // try from 001808ff to 00180903 has its CatchHandler @ 00180b63 */
      uVar7 = parseTAR((basic_string *)this,(int)param_1);
      puVar9 = local_b8;
    }
  }
  else {
    uVar2 = DAT_005b2368;
    uVar7 = uVar10;
    if (DAT_005b2368 <= uVar10) {
      uVar7 = DAT_005b2368;
    }
    if (((uVar7 != 0) && (iVar6 = memcmp(puVar9,DAT_005b2360,uVar7), iVar6 != 0)) ||
       ((0xffffffff < (uVar10 - uVar2) + 0x80000000 || ((int)(uVar10 - uVar2) != 0)))) {
      uVar2 = DAT_005b2328;
      uVar7 = uVar10;
      if (DAT_005b2328 <= uVar10) {
        uVar7 = DAT_005b2328;
      }
      if (((uVar7 != 0) && (iVar6 = memcmp(puVar9,DAT_005b2320,uVar7), iVar6 != 0)) ||
         ((0xffffffff < (uVar10 - uVar2) + 0x80000000 || ((int)(uVar10 - uVar2) != 0)))) {
        uVar2 = DAT_005b22e8;
        uVar7 = uVar10;
        if (DAT_005b22e8 <= uVar10) {
          uVar7 = DAT_005b22e8;
        }
        if (uVar7 != 0) {
          iVar6 = memcmp(puVar9,DAT_005b22e0,uVar7);
          uVar7 = 0;
          if (iVar6 != 0) goto LAB_00180825;
        }
        if ((0xffffffff < (uVar10 - uVar2) + 0x80000000) || ((int)(uVar10 - uVar2) != 0)) {
          uVar7 = 0;
          goto LAB_00180825;
        }
      }
    }
                    /* try { // try from 0018093c to 00180a33 has its CatchHandler @ 00180be2 */
    uVar7 = parseBIN(this,param_1,0);
    puVar9 = local_b8;
  }
LAB_00180825:
  if (puVar9 != local_a8) {
    operator_delete(puVar9);
    uVar7 = uVar7 & 0xff;
  }
  return uVar7;
}

