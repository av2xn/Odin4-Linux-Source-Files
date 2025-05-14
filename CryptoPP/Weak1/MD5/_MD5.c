// Decompiled function: ~MD5


/* CryptoPP::Weak1::MD5::~MD5() */

void __thiscall CryptoPP::Weak1::MD5::~MD5(MD5 *this)

{
  long lVar1;
  undefined4 *puVar2;
  
  *(undefined ***)this = &PTR__IteratedHashWithStaticTransform_005857b0;
  if (*(undefined4 **)(this + 0xb8) == (undefined4 *)(this + 0x68)) {
    this[0xa9] = (MD5)0x0;
    puVar2 = *(undefined4 **)(this + 0xb8);
    for (lVar1 = *(long *)(this + 0xb0); lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  *(undefined **)this = &DAT_005856d8;
  if (*(undefined4 **)(this + 0x60) == (undefined4 *)(this + 0x10)) {
    this[0x51] = (MD5)0x0;
    puVar2 = *(undefined4 **)(this + 0x60);
    for (lVar1 = *(long *)(this + 0x58); lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    operator_delete(this,0xc0);
    return;
  }
  operator_delete(this,0xc0);
  return;
}

