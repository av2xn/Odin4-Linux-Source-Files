// Decompiled function: FUN_0017c400


int FUN_0017c400(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint local_3c [3];
  
  if (param_2 < 1) {
    lVar2 = 0;
    iVar3 = 0;
  }
  else {
    iVar1 = 0;
    iVar3 = 0;
LAB_0017c45a:
    do {
      std::basic_istream<char,std::char_traits<char>>::read
                ((basic_istream<char,std::char_traits<char>> *)(param_1 + 8),(char *)local_3c,4);
      local_3c[0] = local_3c[0] & 0x7fffffff;
      if (*(char *)(param_1 + 0x233) == '\0') {
        if (local_3c[0] == 0) {
          if (param_2 <= iVar1) break;
          goto LAB_0017c45a;
        }
      }
      else {
        local_3c[0] = local_3c[0] + 4;
      }
      std::basic_istream<char,std::char_traits<char>>::seekg
                ((basic_istream<char,std::char_traits<char>> *)(param_1 + 8),(ulong)local_3c[0],1);
      iVar1 = iVar1 + *(int *)(param_1 + 0x234);
      iVar3 = iVar3 + 4 + local_3c[0];
    } while (iVar1 < param_2);
    lVar2 = (long)-iVar3;
  }
  std::basic_istream<char,std::char_traits<char>>::seekg
            ((basic_istream<char,std::char_traits<char>> *)(param_1 + 8),lVar2,1);
  return iVar3;
}

