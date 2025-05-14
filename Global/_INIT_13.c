// Decompiled function: _INIT_13


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_13(void)

{
  undefined8 *puVar1;
  
  _DAT_005b5560 = 0;
  _DAT_005b5568 = 0;
  _DAT_005b5570 = 0;
  _DAT_005b5578 = 0;
  _DAT_005b5580 = 0;
  _DAT_005b5598 = 0x11c00;
  puVar1 = (undefined8 *)malloc(0x11c00);
  DAT_005b5590 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    _DAT_005b5598 = 0;
    DAT_005b5588 = (undefined8 *)0x0;
  }
  else {
    DAT_005b5588 = puVar1;
    *puVar1 = 0x11c00;
    puVar1[1] = 0;
  }
  return;
}

