// Decompiled function: ~FirmwareInfo


/* FirmwareInfo::~FirmwareInfo() */

void __thiscall FirmwareInfo::~FirmwareInfo(FirmwareInfo *this)

{
  if (*(FirmwareInfo **)(this + 0x30) != this + 0x40) {
    operator_delete(*(FirmwareInfo **)(this + 0x30));
  }
  if (*(FirmwareInfo **)this != this + 0x10) {
    operator_delete(*(FirmwareInfo **)this);
    return;
  }
  return;
}

