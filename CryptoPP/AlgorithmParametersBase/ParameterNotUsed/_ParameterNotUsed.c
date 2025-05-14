// Decompiled function: ~ParameterNotUsed


/* CryptoPP::AlgorithmParametersBase::ParameterNotUsed::~ParameterNotUsed() */

void __thiscall
CryptoPP::AlgorithmParametersBase::ParameterNotUsed::~ParameterNotUsed(ParameterNotUsed *this)

{
  *(undefined ***)this = &PTR__Exception_00584338;
  if (*(ParameterNotUsed **)(this + 0x10) != this + 0x20) {
    operator_delete(*(ParameterNotUsed **)(this + 0x10));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this,0x30);
  return;
}

