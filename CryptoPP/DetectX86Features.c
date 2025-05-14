// Decompiled function: DetectX86Features


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DetectX86Features() */

void CryptoPP::DetectX86Features(void)

{
  char cVar1;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_1c;
  
  cVar1 = CpuId(0,&local_48);
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = CpuId(1,&local_38);
  if (cVar1 == '\0') {
    return;
  }
  g_hasMMX = (byte)(local_2c >> 0x17) & 1;
  if ((local_2c & 0x4000000) == 0) {
    if (g_hasSSE2 == '\0') {
      g_hasSSSE3 = false;
      g_hasSSE4 = 0;
      g_hasAESNI = 0;
      g_hasCLMUL = 0;
      goto LAB_0017810e;
    }
  }
  else {
    g_hasSSE2 = '\x01';
  }
  g_hasSSSE3 = (local_30 & 0x200) != 0;
  if ((local_30 & 0x180000) == 0x180000) {
    g_hasSSE4 = 1;
    if ((local_30 & 0x2000000) != 0) goto LAB_001780d8;
LAB_001782dd:
    g_hasAESNI = 0;
  }
  else {
    g_hasSSE4 = 0;
    if ((local_30 & 0x2000000) == 0) goto LAB_001782dd;
LAB_001780d8:
    g_hasAESNI = 1;
  }
  g_hasCLMUL = (byte)(local_30 >> 1) & 1;
LAB_0017810e:
  if ((local_2c & 0x2000000) == 0) {
    CpuId(0x80000000,&local_28);
    if (0x80000000 < local_28) {
      CpuId(0x80000001,&local_28);
      g_hasISSE = (byte)(local_1c >> 0x16) & 1;
    }
  }
  else {
    g_hasISSE = 1;
  }
  if (local_44 == 0x756e6547) {
    if ((local_40 == 0x6c65746e) && (local_3c == 0x49656e69)) {
      g_isP4 = ((local_38._1_1_ ^ 0xf) & 0xf) == 0;
      g_cacheLineSize = (local_34 >> 8 & 0xff) << 3;
      g_hasRDRAND = (byte)(local_30 >> 0x1e) & 1;
      if ((6 < local_48) && (cVar1 = CpuId(7,&local_28), cVar1 != '\0')) {
        g_hasRDSEED = (byte)(local_24 >> 0x12) & 1;
      }
    }
  }
  else if (local_44 == 0x68747541) {
    if ((local_40 == 0x444d4163) && (local_3c == 0x69746e65)) {
      CpuId(1,&local_48);
      g_hasRDRAND = (byte)(local_40 >> 0x1e) & 1;
      CpuId(0x80000005,&local_48);
      g_cacheLineSize = local_40 & 0xff;
    }
  }
  else if ((((local_44 == 0x746e6543) && (local_40 == 0x736c7561)) && (local_3c == 0x48727561)) &&
          (CpuId(0xc0000000,&local_48), 0xc0000000 < local_48)) {
    CpuId(0xc0000001,&local_48);
    g_hasPadlockRNG = (local_3c & 0xc) != 0;
    g_hasPadlockACE = (local_3c & 0xc0) != 0;
    g_hasPadlockACE2 = (local_3c & 0x300) != 0;
    g_hasPadlockPHE = (local_3c & 0xc00) != 0;
    g_hasPadlockPMM = (local_3c & 0x3000) != 0;
  }
  if (g_cacheLineSize == 0) {
    g_cacheLineSize = 0x40;
  }
  g_x86DetectionDone = 1;
  return;
}

