// Decompiled function: ~ValueTypeMismatch


/* CryptoPP::NameValuePairs::ValueTypeMismatch::~ValueTypeMismatch() */

void __thiscall
CryptoPP::NameValuePairs::ValueTypeMismatch::~ValueTypeMismatch(ValueTypeMismatch *this)

{
  *(undefined ***)this = &PTR__Exception_00584338;
  if (*(ValueTypeMismatch **)(this + 0x10) != this + 0x20) {
    operator_delete(*(ValueTypeMismatch **)(this + 0x10));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this,0x40);
  return;
}

