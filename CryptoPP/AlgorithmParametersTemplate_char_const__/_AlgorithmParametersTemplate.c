// Decompiled function: ~AlgorithmParametersTemplate


/* CryptoPP::AlgorithmParametersTemplate<char const*>::~AlgorithmParametersTemplate() */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<char_const*>::~AlgorithmParametersTemplate
          (AlgorithmParametersTemplate<char_const*> *this)

{
  char cVar1;
  ParameterNotUsed *this_00;
  
  *(undefined **)this = &DAT_00585960;
  cVar1 = std::uncaught_exception();
  if (((cVar1 == '\0') && (this[0x10] != (AlgorithmParametersTemplate<char_const*>)0x0)) &&
     (this[0x11] == (AlgorithmParametersTemplate<char_const*>)0x0)) {
    this_00 = (ParameterNotUsed *)__cxa_allocate_exception(0x30);
                    /* try { // try from 00182d4a to 00182d4e has its CatchHandler @ 00182d7f */
    AlgorithmParametersBase::ParameterNotUsed::ParameterNotUsed(this_00,*(char **)(this + 8));
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00182d60 to 00182d64 has its CatchHandler @ 00182d65 */
    __cxa_throw(this_00,&AlgorithmParametersBase::ParameterNotUsed::typeinfo,
                AlgorithmParametersBase::ParameterNotUsed::~ParameterNotUsed);
  }
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this,0x28);
  return;
}

