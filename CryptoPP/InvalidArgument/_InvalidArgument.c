// Decompiled function: ~InvalidArgument


/* CryptoPP::InvalidArgument::~InvalidArgument() */

void __thiscall CryptoPP::InvalidArgument::~InvalidArgument(InvalidArgument *this)

{
  *(undefined ***)this = &PTR__Exception_00584338;
  if (*(InvalidArgument **)(this + 0x10) != this + 0x20) {
    operator_delete(*(InvalidArgument **)(this + 0x10));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this,0x30);
  return;
}

