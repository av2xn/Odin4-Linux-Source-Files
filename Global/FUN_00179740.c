// Decompiled function: FUN_00179740


undefined8 FUN_00179740(DownloadEngine *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  int iVar6;
  int local_2c;
  
  cVar2 = DownloadEngine::requestAndResponse(param_1,0x69,0,&local_2c,0);
  if ((cVar2 != '\0') && (local_2c < 0x100001)) {
    iVar6 = 0;
    pcVar4 = (char *)operator_new__((long)(local_2c + 500));
    pcVar1 = pcVar4;
    while ((0 < local_2c && (cVar2 = DownloadEngine::request(param_1,0x69,1,iVar6), cVar2 != '\0')))
    {
      iVar3 = 500;
      if (local_2c < 0x1f5) {
        iVar3 = local_2c;
      }
      iVar6 = iVar6 + 1;
      iVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
                        (*(long **)(param_1 + 0x28),pcVar1,iVar3);
      local_2c = local_2c - iVar3;
      pcVar1 = pcVar1 + 500;
    }
    cVar2 = DownloadEngine::DeviceinfoAnalysis(param_1,pcVar4);
    operator_delete__(pcVar4);
    if (cVar2 != '\0') {
      uVar5 = DownloadEngine::requestAndResponse(param_1,0x69,2,(int *)0x0,0);
      return uVar5;
    }
  }
  return 0;
}

