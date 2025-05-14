// Decompiled function: PutModifiable2


/* CryptoPP::FilterWithBufferedInput::PutModifiable2(unsigned char*, unsigned long, int, bool) */

void __thiscall
CryptoPP::FilterWithBufferedInput::PutModifiable2
          (FilterWithBufferedInput *this,uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  PutMaybeModifiable(this,param_1,param_2,param_3,param_4,true);
  return;
}

