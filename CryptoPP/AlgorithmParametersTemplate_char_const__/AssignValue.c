// Decompiled function: AssignValue


/* CryptoPP::AlgorithmParametersTemplate<char const*>::AssignValue(char const*, std::type_info
   const&, void*) const */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<char_const*>::AssignValue
          (AlgorithmParametersTemplate<char_const*> *this,char *param_1,type_info *param_2,
          void *param_3)

{
  undefined *__s1;
  code *pcVar1;
  char cVar2;
  int iVar3;
  ValueTypeMismatch *this_00;
  char *__s2;
  undefined *local_58 [2];
  undefined auStack_48 [24];
  
  pcVar1 = g_pAssignIntToInteger;
  __s1 = PTR_typeinfo_name_005aa130;
  if (g_pAssignIntToInteger == (code *)0x0) {
LAB_00183750:
    __s2 = *(char **)(param_2 + 8);
    if (__s2 == __s1) goto LAB_0018377a;
    if (*__s1 == '*') goto LAB_001836e1;
  }
  else {
    if (PTR_typeinfo_name_005aa130 == PTR_typeinfo_name_005a9fe0) {
LAB_00183740:
      cVar2 = (*pcVar1)(param_2,param_3,this + 0x20);
      if (cVar2 != '\0') {
        return;
      }
      goto LAB_00183750;
    }
    if (*PTR_typeinfo_name_005aa130 == '*') {
      if (PTR_typeinfo_name_005aa130 != *(undefined **)(param_2 + 8)) goto LAB_001836e1;
      goto LAB_0018377a;
    }
    iVar3 = strcmp(PTR_typeinfo_name_005aa130,PTR_typeinfo_name_005a9fe0);
    if (iVar3 == 0) goto LAB_00183740;
    __s2 = *(char **)(param_2 + 8);
    if (__s1 == __s2) goto LAB_0018377a;
  }
  iVar3 = strcmp(__s1,__s2);
  if (iVar3 != 0) {
LAB_001836e1:
    this_00 = (ValueTypeMismatch *)__cxa_allocate_exception(0x40);
                    /* try { // try from 001836fb to 001836ff has its CatchHandler @ 00183790 */
    FUN_0017c090(local_58,param_1);
                    /* try { // try from 0018370c to 00183710 has its CatchHandler @ 001837a3 */
    NameValuePairs::ValueTypeMismatch::ValueTypeMismatch
              (this_00,(basic_string *)local_58,(type_info *)&char_const*::typeinfo,param_2);
    if (local_58[0] != auStack_48) {
      operator_delete(local_58[0]);
    }
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&NameValuePairs::ValueTypeMismatch::typeinfo,
                NameValuePairs::ValueTypeMismatch::~ValueTypeMismatch);
  }
LAB_0018377a:
  *(undefined8 *)param_3 = *(undefined8 *)(this + 0x20);
  return;
}

