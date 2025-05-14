// Decompiled function: FUN_0017c650


undefined8 FUN_0017c650(long param_1,int param_2,int param_3)

{
  if (*(long *)(param_1 + 0x210) <= (long)param_2) {
    param_2 = (int)*(undefined8 *)(param_1 + 0x210);
  }
  std::basic_istream<char,std::char_traits<char>>::read
            ((basic_istream<char,std::char_traits<char>> *)(param_1 + 8),*(char **)(param_1 + 0x218)
             ,(long)param_3);
  *(long *)(param_1 + 0x210) = *(long *)(param_1 + 0x210) - (long)param_2;
  return *(undefined8 *)(param_1 + 0x218);
}

