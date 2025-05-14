// Decompiled function: sendPitData


/* DownloadEngine::sendPitData(char*, int) */

ulong __thiscall DownloadEngine::sendPitData(DownloadEngine *this,char *param_1,int param_2)

{
  int iVar1;
  undefined8 extraout_RDX;
  undefined local_20 [16];
  
  iVar1 = (**(code **)(**(long **)(this + 0x28) + 0x18))();
  if (param_2 != iVar1) {
    return 0;
  }
  iVar1 = (**(code **)(**(long **)(this + 0x28) + 0x20))
                    (*(long **)(this + 0x28),local_20,0x40,60000,0);
  return CONCAT71((int7)((ulong)extraout_RDX >> 8),iVar1 == 8) & 0xffffffff;
}

