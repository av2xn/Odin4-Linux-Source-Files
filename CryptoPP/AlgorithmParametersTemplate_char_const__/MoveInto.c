// Decompiled function: MoveInto


/* CryptoPP::AlgorithmParametersTemplate<char const*>::MoveInto(void*) const */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<char_const*>::MoveInto
          (AlgorithmParametersTemplate<char_const*> *this,void *param_1)

{
  AlgorithmParametersTemplate<char_const*> AVar1;
  undefined8 uVar2;
  
  if (param_1 != (void *)0x0) {
    *(undefined **)param_1 = &DAT_00585960;
    *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)(this + 8);
    *(AlgorithmParametersTemplate<char_const*> *)((long)param_1 + 0x10) = this[0x10];
    AVar1 = this[0x11];
    *(undefined8 *)((long)param_1 + 0x18) = 0;
    uVar2 = *(undefined8 *)(this + 0x18);
    *(AlgorithmParametersTemplate<char_const*> *)((long)param_1 + 0x11) = AVar1;
    *(undefined8 *)(this + 0x18) = 0;
    if (*(long **)((long)param_1 + 0x18) != (long *)0x0) {
                    /* try { // try from 0018215f to 00182161 has its CatchHandler @ 00182182 */
      (**(code **)(**(long **)((long)param_1 + 0x18) + 8))();
    }
    *(undefined8 *)((long)param_1 + 0x18) = uVar2;
    this[0x11] = (AlgorithmParametersTemplate<char_const*>)0x1;
    *(undefined ***)param_1 = &PTR__AlgorithmParametersTemplate_00584440;
    *(undefined8 *)((long)param_1 + 0x20) = *(undefined8 *)(this + 0x20);
  }
  return;
}

