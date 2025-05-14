// Decompiled function: ~Exception


/* CryptoPP::Exception::~Exception() */

void __thiscall CryptoPP::Exception::~Exception(Exception *this)

{
  *(undefined ***)this = &PTR__Exception_00584338;
  if (*(Exception **)(this + 0x10) != this + 0x20) {
    operator_delete(*(Exception **)(this + 0x10));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this,0x30);
  return;
}

