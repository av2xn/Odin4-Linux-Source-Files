// Decompiled function: ~OdinException


/* OdinException::~OdinException() */

void __thiscall OdinException::~OdinException(OdinException *this)

{
  ~OdinException(this);
  operator_delete(this,0x28);
  return;
}

