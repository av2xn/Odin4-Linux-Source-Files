// Decompiled function: ~NotImplemented


/* CryptoPP::NotImplemented::~NotImplemented() */

void __thiscall CryptoPP::NotImplemented::~NotImplemented(NotImplemented *this)

{
  *(undefined ***)this = &PTR__Exception_00584338;
  if (*(NotImplemented **)(this + 0x10) != this + 0x20) {
    operator_delete(*(NotImplemented **)(this + 0x10));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this,0x30);
  return;
}

