// Decompiled function: HashEndianCorrectedBlock


/* CryptoPP::IteratedHashWithStaticTransform<unsigned int, CryptoPP::EnumToType<CryptoPP::ByteOrder,
   0>, 64u, 16u, CryptoPP::Weak1::MD5, 0u, false>::HashEndianCorrectedBlock(unsigned int const*) */

void __thiscall
CryptoPP::
IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,0>,64u,16u,CryptoPP::Weak1::MD5,0u,false>
::HashEndianCorrectedBlock
          (IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,0>,64u,16u,CryptoPP::Weak1::MD5,0u,false>
           *this,uint *param_1)

{
  Weak1::MD5::Transform(*(uint **)(this + 0xb8),param_1);
  return;
}

