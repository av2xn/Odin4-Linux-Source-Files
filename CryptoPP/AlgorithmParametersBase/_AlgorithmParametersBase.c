// Decompiled function: ~AlgorithmParametersBase


/* CryptoPP::AlgorithmParametersBase::~AlgorithmParametersBase() */

void __thiscall
CryptoPP::AlgorithmParametersBase::~AlgorithmParametersBase(AlgorithmParametersBase *this)

{
  char cVar1;
  ParameterNotUsed *this_00;
  
  *(undefined **)this = &DAT_00585960;
  cVar1 = std::uncaught_exception();
  if (((cVar1 == '\0') && (this[0x10] != (AlgorithmParametersBase)0x0)) &&
     (this[0x11] == (AlgorithmParametersBase)0x0)) {
    this_00 = (ParameterNotUsed *)__cxa_allocate_exception(0x30);
                    /* try { // try from 00182e9a to 00182e9e has its CatchHandler @ 00182ecf */
    ParameterNotUsed::ParameterNotUsed(this_00,*(char **)(this + 8));
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00182eb0 to 00182eb4 has its CatchHandler @ 00182eb5 */
    __cxa_throw(this_00,&ParameterNotUsed::typeinfo,ParameterNotUsed::~ParameterNotUsed);
  }
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this,0x20);
  return;
}

