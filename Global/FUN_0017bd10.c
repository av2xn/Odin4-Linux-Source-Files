// Decompiled function: FUN_0017bd10


undefined8 FUN_0017bd10(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *__s2;
  char *__s1;
  
  if ((*param_1 == *param_2) && (iVar1 = param_1[1], iVar1 == param_2[1])) {
    if (iVar1 < 1) {
      return 1;
    }
    __s2 = param_2 + 0x20;
    __s1 = (char *)(*(long *)(param_1 + 2) + 100);
    while ((((((*(int *)(__s1 + -100) == __s2[-0x19] && (*(int *)(__s1 + -0x60) == __s2[-0x18])) &&
              (*(int *)(__s1 + -0x5c) == __s2[-0x17])) &&
             ((*(int *)(__s1 + -0x58) == __s2[-0x16] && (*(int *)(__s1 + -0x54) == __s2[-0x15]))))
            && ((*(int *)(__s1 + -0x4c) == __s2[-0x13] &&
                ((*(int *)(__s1 + -0x48) == __s2[-0x12] && (*(int *)(__s1 + -0x44) == __s2[-0x11])))
                ))) &&
           ((iVar2 = strcmp(__s1 + -0x40,(char *)(__s2 + -0x10)), iVar2 == 0 &&
            ((iVar2 = strcmp(__s1 + -0x20,(char *)(__s2 + -8)), iVar2 == 0 &&
             (iVar2 = strcmp(__s1,(char *)__s2), iVar2 == 0))))))) {
      __s2 = __s2 + 0x21;
      __s1 = __s1 + 0x84;
      if (param_2 + (ulong)(iVar1 - 1) * 0x21 + 0x41 == __s2) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

