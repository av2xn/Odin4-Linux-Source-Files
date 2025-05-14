// Decompiled function: Clone


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ClonableImpl<CryptoPP::Weak1::MD5,
   CryptoPP::AlgorithmImpl<CryptoPP::IteratedHash<unsigned int,
   CryptoPP::EnumToType<CryptoPP::ByteOrder, 0>, 64u, CryptoPP::HashTransformation>,
   CryptoPP::Weak1::MD5> >::Clone() const */

undefined8 *
CryptoPP::
ClonableImpl<CryptoPP::Weak1::MD5,CryptoPP::AlgorithmImpl<CryptoPP::IteratedHash<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,0>,64u,CryptoPP::HashTransformation>,CryptoPP::Weak1::MD5>>
::Clone(void)

{
  undefined4 uVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long in_RDI;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)operator_new(0xc0);
  uVar1 = *(undefined4 *)(in_RDI + 8);
  uVar2 = *(ulong *)(in_RDI + 0x58);
  puVar5 = (undefined8 *)0x0;
  *(undefined *)((long)puVar4 + 0x51) = 0;
  *(undefined4 *)(puVar4 + 1) = uVar1;
  uVar1 = *(undefined4 *)(in_RDI + 0xc);
  puVar4[0xb] = uVar2;
  *(undefined4 *)((long)puVar4 + 0xc) = uVar1;
  *puVar4 = &DAT_005856d8;
  if (uVar2 < 0x11) {
    puVar5 = puVar4 + 2;
    *(undefined *)((long)puVar4 + 0x51) = 1;
  }
  pvVar3 = *(void **)(in_RDI + 0x60);
  puVar4[0xc] = puVar5;
  if (pvVar3 != (void *)0x0) {
    memcpy(puVar5,pvVar3,uVar2 << 2);
  }
  uVar2 = *(ulong *)(in_RDI + 0xb0);
  puVar5 = (undefined8 *)0x0;
  *(undefined *)((long)puVar4 + 0xa9) = 0;
  *puVar4 = &PTR__IteratedHashWithStaticTransform_005857b0;
  puVar4[0x16] = uVar2;
  if (uVar2 < 0x11) {
    *(undefined *)((long)puVar4 + 0xa9) = 1;
    puVar5 = puVar4 + 0xd;
  }
  pvVar3 = *(void **)(in_RDI + 0xb8);
  puVar4[0x17] = puVar5;
  if (pvVar3 != (void *)0x0) {
    memcpy(puVar5,pvVar3,uVar2 << 2);
  }
  *puVar4 = &PTR__MD5_00585888;
  return puVar4;
}

