// Decompiled function: FUN_0017ba10


ulong FUN_0017ba10(basic_istream<char,std::char_traits<char>> **param_1,char *param_2,uint param_3)

{
  basic_istream<char,std::char_traits<char>> *pbVar1;
  basic_istream<char,std::char_traits<char>> *pbVar2;
  ulong uVar3;
  
  pbVar2 = param_1[2];
  pbVar1 = param_1[1] + (int)param_3;
  if ((long)pbVar2 < (long)pbVar1) {
    uVar3 = (long)pbVar2 - (long)param_1[1];
    if (0 < (long)uVar3) {
      std::basic_istream<char,std::char_traits<char>>::read(*param_1,param_2,uVar3);
      pbVar2 = param_1[2];
    }
    param_1[1] = pbVar2;
    return uVar3 & 0xffffffff;
  }
  param_1[1] = pbVar1;
  std::basic_istream<char,std::char_traits<char>>::read(*param_1,param_2,(long)(int)param_3);
  return (ulong)param_3;
}

