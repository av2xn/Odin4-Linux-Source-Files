// Decompiled function: _FINI_0


void _FINI_0(void)

{
  if (DAT_005b2200 == '\0') {
    if (PTR___cxa_finalize_005b0808 != (undefined *)0x0) {
      __cxa_finalize(__dso_handle);
    }
    FUN_00178700();
    DAT_005b2200 = '\x01';
  }
  return;
}

