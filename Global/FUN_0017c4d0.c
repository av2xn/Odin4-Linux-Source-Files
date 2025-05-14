// Decompiled function: FUN_0017c4d0


undefined8 FUN_0017c4d0(long param_1,int param_2)

{
  basic_istream<char,std::char_traits<char>> *this;
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int local_50;
  uint local_40;
  char local_3c [12];
  
  lVar3 = *(long *)(param_1 + 0x210);
  lVar5 = (long)param_2;
  if (lVar3 < param_2) {
    lVar5 = lVar3;
  }
  local_50 = (int)lVar5;
  if (*(char *)(param_1 + 0x232) == '\0') {
    std::basic_istream<char,std::char_traits<char>>::read
              ((basic_istream<char,std::char_traits<char>> *)(param_1 + 8),
               *(char **)(param_1 + 0x218),(long)local_50);
    lVar3 = *(long *)(param_1 + 0x210);
  }
  else if (0 < local_50) {
    this = (basic_istream<char,std::char_traits<char>> *)(param_1 + 8);
    iVar2 = 0;
    do {
      while( true ) {
        std::basic_istream<char,std::char_traits<char>>::read(this,(char *)&local_40,4);
        uVar1 = local_40 & 0x7fffffff;
        if (uVar1 != 0) {
          if ((int)local_40 < 0) {
            local_40 = uVar1;
            std::basic_istream<char,std::char_traits<char>>::read
                      (this,(char *)((long)iVar2 + *(long *)(param_1 + 0x218)),(ulong)uVar1);
            iVar2 = iVar2 + local_40;
            uVar1 = local_40;
          }
          else {
            local_40 = uVar1;
            std::basic_istream<char,std::char_traits<char>>::read
                      (this,*(char **)(param_1 + 0x228),(ulong)uVar1);
            lVar3 = (long)iVar2;
            iVar4 = local_50 - iVar2;
            if (*(int *)(param_1 + 0x234) <= iVar4) {
              iVar4 = *(int *)(param_1 + 0x234);
            }
            iVar2 = iVar2 + iVar4;
            LZ4_decompress_fast(*(undefined8 *)(param_1 + 0x228),lVar3 + *(long *)(param_1 + 0x218),
                                iVar4);
            uVar1 = local_40;
          }
        }
        local_40 = uVar1;
        if (*(char *)(param_1 + 0x233) == '\0') break;
        std::basic_istream<char,std::char_traits<char>>::read(this,local_3c,4);
        if (local_50 <= iVar2) goto LAB_0017c5d0;
      }
    } while (iVar2 < local_50);
LAB_0017c5d0:
    lVar3 = *(long *)(param_1 + 0x210);
  }
  *(long *)(param_1 + 0x210) = lVar3 - local_50;
  return *(undefined8 *)(param_1 + 0x218);
}

