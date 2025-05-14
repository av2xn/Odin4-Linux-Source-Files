// Decompiled function: FUN_0017b720


undefined8 FUN_0017b720(long **param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  uint *puVar7;
  OdinException *this;
  long lVar8;
  byte *pbVar9;
  uint *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  bool bVar13;
  byte bVar14;
  ulong *local_248;
  ulong local_240;
  ulong local_238 [2];
  char local_228;
  uint local_220 [29];
  byte local_1ac [12];
  byte local_1a0 [376];
  
  bVar14 = 0;
  plVar6 = param_1[1];
  plVar1 = param_1[2];
  if ((long)plVar6 <= (long)plVar1) {
    if ((long)plVar6 < (long)plVar1) {
      std::basic_istream<char,std::char_traits<char>>::seekg
                ((basic_istream<char,std::char_traits<char>> *)*param_1,(long)plVar1 - (long)plVar6,
                 1);
      param_1[1] = param_1[2];
    }
    puVar12 = (undefined8 *)&local_228;
    for (lVar8 = 0x40; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
    }
    std::basic_istream<char,std::char_traits<char>>::read
              ((basic_istream<char,std::char_traits<char>> *)*param_1,&local_228,0x200);
    param_1[1] = param_1[1] + 0x40;
    if ((((byte)*(basic_istream<char,std::char_traits<char>> *)
                 ((long)*param_1 + *(long *)(**param_1 + -0x18) + 0x20) & 5) == 0) &&
       (local_228 != '\0')) {
      if (local_1ac[0] < 0x80) {
        pbVar9 = local_1ac;
        uVar11 = 0;
        do {
          bVar14 = *pbVar9;
          if (((int)(char)bVar14 & 0xdfU) == 0) break;
          pbVar9 = pbVar9 + 1;
          uVar11 = (long)(int)((int)(char)bVar14 - 0x30) + uVar11 * 8;
        } while (local_1a0 != pbVar9);
      }
      else {
        uVar11 = 0;
        puVar7 = (uint *)&local_228;
        do {
          puVar10 = puVar7 + 0x20;
          puVar7 = (uint *)((long)puVar7 + 1);
          uVar11 = uVar11 << 8 | (ulong)*(byte *)puVar10;
        } while (local_220 != puVar7);
      }
      local_248 = local_238;
      puVar7 = (uint *)&local_228;
      do {
        puVar10 = puVar7;
        uVar3 = *puVar10 + 0xfefefeff & ~*puVar10;
        uVar4 = uVar3 & 0x80808080;
        puVar7 = puVar10 + 1;
      } while (uVar4 == 0);
      bVar13 = (uVar3 & 0x8080) == 0;
      if (bVar13) {
        uVar4 = uVar4 >> 0x10;
      }
      if (bVar13) {
        puVar7 = (uint *)((long)puVar10 + 6);
      }
      FUN_0017b430(&local_248,&local_228,
                   (char *)((long)puVar7 + (-3 - (ulong)CARRY1((byte)uVar4,(byte)uVar4))));
      puVar2 = (ulong *)param_2[2];
      if (local_248 == local_238) {
        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)(param_2 + 2),
                   (basic_string *)&local_248);
        uVar5 = local_238[0];
      }
      else {
        if (puVar2 == param_2 + 4) {
          param_2[2] = (ulong)local_248;
          param_2[3] = local_240;
          param_2[4] = local_238[0];
        }
        else {
          param_2[2] = (ulong)local_248;
          uVar5 = param_2[4];
          param_2[3] = local_240;
          param_2[4] = local_238[0];
          local_248 = puVar2;
          if (puVar2 != (ulong *)0x0) goto LAB_0017b889;
        }
        local_248 = local_238;
        uVar5 = local_238[0];
      }
LAB_0017b889:
      local_238[0] = uVar5;
      local_240 = 0;
      *(undefined *)local_248 = 0;
      if (local_248 != local_238) {
        operator_delete(local_248);
      }
      plVar6 = param_1[1];
      uVar5 = uVar11 + 0x1ff;
      if (-1 < (long)uVar11) {
        uVar5 = uVar11;
      }
      *param_2 = uVar11;
      param_2[1] = (ulong)plVar6;
      plVar6 = plVar6 + (((long)uVar5 >> 9) + (ulong)((uVar11 & 0x1ff) != 0)) * 0x40;
      param_1[2] = plVar6;
      if ((long)param_1[3] < (long)plVar6) {
        this = (OdinException *)__cxa_allocate_exception(0x28);
        local_248 = local_238;
                    /* try { // try from 0017b9ad to 0017b9b1 has its CatchHandler @ 0017ba0a */
        FUN_0017b430(&local_248,"Truncated tar archive","");
                    /* try { // try from 0017b9b8 to 0017b9bc has its CatchHandler @ 0017b9e5 */
        OdinException::OdinException(this,(basic_string *)&local_248);
        if (local_248 != local_238) {
          operator_delete(local_248);
        }
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,&OdinException::typeinfo,OdinException::~OdinException);
      }
      return 1;
    }
  }
  return 0;
}

