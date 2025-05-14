// Decompiled function: FirmwareData


/* FirmwareData::FirmwareData(FirmwareData const&) */

void __thiscall FirmwareData::FirmwareData(FirmwareData *this,FirmwareData *param_1)

{
  FirmwareData FVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *local_80;
  
  *(undefined ***)this = &PTR__FirmwareData_00584420;
  *(FirmwareData **)(this + 8) = this + 0x18;
  FUN_0017bfe0(this + 8,*(long *)(param_1 + 8),*(long *)(param_1 + 8) + *(long *)(param_1 + 0x10));
  *(FirmwareData **)(this + 0x28) = this + 0x38;
                    /* try { // try from 0017d0d1 to 0017d0d5 has its CatchHandler @ 0017d4de */
  FUN_0017bfe0(this + 0x28,*(long *)(param_1 + 0x28),
               *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x30));
  *(FirmwareData **)(this + 0x48) = this + 0x58;
                    /* try { // try from 0017d0f5 to 0017d0f9 has its CatchHandler @ 0017d4d9 */
  FUN_0017bfe0(this + 0x48,*(long *)(param_1 + 0x48),
               *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x50));
  *(FirmwareData **)(this + 0x68) = this + 0x78;
                    /* try { // try from 0017d119 to 0017d11d has its CatchHandler @ 0017d49b */
  FUN_0017bfe0(this + 0x68,*(long *)(param_1 + 0x68),
               *(long *)(param_1 + 0x68) + *(long *)(param_1 + 0x70));
  *(FirmwareData **)(this + 0x88) = this + 0x98;
                    /* try { // try from 0017d14c to 0017d150 has its CatchHandler @ 0017d553 */
  FUN_0017bfe0(this + 0x88,*(long *)(param_1 + 0x88),
               *(long *)(param_1 + 0x88) + *(long *)(param_1 + 0x90));
  *(FirmwareData **)(this + 0xa8) = this + 0xb8;
                    /* try { // try from 0017d17f to 0017d183 has its CatchHandler @ 0017d54e */
  FUN_0017bfe0(this + 0xa8,*(long *)(param_1 + 0xa8),
               *(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xb0));
  *(FirmwareData **)(this + 200) = this + 0xd8;
                    /* try { // try from 0017d1b2 to 0017d1b6 has its CatchHandler @ 0017d558 */
  FUN_0017bfe0(this + 200,*(long *)(param_1 + 200),
               *(long *)(param_1 + 200) + *(long *)(param_1 + 0xd0));
  this[0xe8] = param_1[0xe8];
  this[0xe9] = param_1[0xe9];
  FVar1 = param_1[0xea];
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  this[0xea] = FVar1;
  *(undefined8 *)(this + 0x110) = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(this + 0x118) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(this + 0x120) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(this + 0x128) = *(undefined8 *)(param_1 + 0x128);
  *(FirmwareData **)(this + 0x130) = this + 0x140;
                    /* try { // try from 0017d275 to 0017d279 has its CatchHandler @ 0017d4e3 */
  FUN_0017bfe0(this + 0x130,*(long *)(param_1 + 0x130),
               *(long *)(param_1 + 0x130) + *(long *)(param_1 + 0x138));
  uVar5 = *(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150);
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  uVar3 = ((long)uVar5 >> 4) * 0x6db6db6db6db6db7;
  if (uVar3 == 0) {
    local_80 = (long *)0x0;
  }
  else {
    if (0x249249249249249 < uVar3) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0017d5bc to 0017d5c0 has its CatchHandler @ 0017d59c */
      std::__throw_bad_alloc();
    }
                    /* try { // try from 0017d2e0 to 0017d2e4 has its CatchHandler @ 0017d59c */
    local_80 = (long *)operator_new(uVar5);
  }
  *(long **)(this + 0x150) = local_80;
  *(long **)(this + 0x158) = local_80;
  *(ulong *)(this + 0x160) = uVar5 + (long)local_80;
  plVar4 = *(long **)(param_1 + 0x158);
  for (plVar6 = *(long **)(param_1 + 0x150); plVar4 != plVar6; plVar6 = plVar6 + 0xe) {
    if (local_80 != (long *)0x0) {
      *local_80 = (long)(local_80 + 2);
                    /* try { // try from 0017d342 to 0017d346 has its CatchHandler @ 0017d59a */
      FUN_0017bfe0(local_80,*plVar6,*plVar6 + plVar6[1]);
      local_80[4] = plVar6[4];
      local_80[5] = plVar6[5];
      local_80[6] = (long)(local_80 + 8);
                    /* try { // try from 0017d36e to 0017d372 has its CatchHandler @ 0017d55d */
      FUN_0017bfe0(local_80 + 6,plVar6[6],plVar6[6] + plVar6[7]);
      *(undefined4 *)(local_80 + 10) = *(undefined4 *)(plVar6 + 10);
      *(undefined4 *)((long)local_80 + 0x54) = *(undefined4 *)((long)plVar6 + 0x54);
      *(undefined4 *)(local_80 + 0xb) = *(undefined4 *)(plVar6 + 0xb);
      lVar2 = plVar6[0xd];
      local_80[0xc] = plVar6[0xc];
      local_80[0xd] = lVar2;
    }
    local_80 = local_80 + 0xe;
  }
  *(long **)(this + 0x158) = local_80;
  plVar4 = (long *)0x0;
  uVar3 = *(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x168);
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  if ((long)uVar3 >> 5 != 0) {
    if (0x7ffffffffffffff < (ulong)((long)uVar3 >> 5)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0017d686 to 0017d68a has its CatchHandler @ 0017d5c1 */
      std::__throw_bad_alloc();
    }
                    /* try { // try from 0017d401 to 0017d405 has its CatchHandler @ 0017d5c1 */
    plVar4 = (long *)operator_new(uVar3);
  }
  *(long **)(this + 0x168) = plVar4;
  *(long **)(this + 0x170) = plVar4;
  *(ulong *)(this + 0x178) = uVar3 + (long)plVar4;
  plVar6 = *(long **)(param_1 + 0x170);
  for (plVar7 = *(long **)(param_1 + 0x168); plVar6 != plVar7; plVar7 = plVar7 + 4) {
    if (plVar4 != (long *)0x0) {
      *plVar4 = (long)(plVar4 + 2);
                    /* try { // try from 0017d45a to 0017d45e has its CatchHandler @ 0017d61d */
      FUN_0017bfe0(plVar4,*plVar7,*plVar7 + plVar7[1]);
    }
    plVar4 = plVar4 + 4;
  }
  *(long **)(this + 0x170) = plVar4;
  return;
}

