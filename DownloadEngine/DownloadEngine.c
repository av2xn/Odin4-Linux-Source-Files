// Decompiled function: DownloadEngine


/* DownloadEngine::DownloadEngine(std::__cxx11::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&, FirmwareData*) */

void __thiscall
DownloadEngine::DownloadEngine(DownloadEngine *this,basic_string *param_1,FirmwareData *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  undefined *local_48 [2];
  undefined local_38 [16];
  
  *(DownloadEngine **)(this + 0x30) = this + 0x40;
  lVar1 = *(long *)param_1;
  *(undefined ***)this = &PTR__DownloadEngine_00584318;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined8 *)(this + 0x28) = 0;
                    /* try { // try from 00178ae8 to 00178aec has its CatchHandler @ 00178baa */
  FUN_001789a0(this + 0x30,lVar1,lVar1 + lVar2);
  *(FirmwareData **)(this + 0x50) = param_2;
  *(undefined4 *)(this + 0x58) = 0x400;
  *(undefined4 *)(this + 0x5c) = 0;
                    /* try { // try from 00178b02 to 00178b3e has its CatchHandler @ 00178ba5 */
  plVar4 = (long *)FUN_00190630(param_1);
  *(long **)(this + 0x28) = plVar4;
  if ((plVar4 != (long *)0x0) && (cVar3 = (**(code **)(*plVar4 + 0x28))(plVar4), cVar3 != '\0')) {
    return;
  }
  local_48[0] = local_38;
  FUN_001789a0(local_48,"usb device Fail","");
                    /* try { // try from 00178b45 to 00178b49 has its CatchHandler @ 00178b69 */
  FUN_00184550(this + 0x30,local_48);
  if (local_48[0] != local_38) {
    operator_delete(local_48[0]);
  }
  return;
}

