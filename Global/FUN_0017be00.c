// Decompiled function: FUN_0017be00


void FUN_0017be00(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  byte bVar8;
  
  bVar8 = 0;
  *param_1 = *param_2;
  iVar7 = param_2[1];
  param_1[1] = iVar7;
  if (0 < iVar7) {
    puVar4 = (undefined8 *)(param_2 + 7);
    iVar7 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + 4);
      if (puVar1 == *(undefined8 **)(param_1 + 6)) {
        std::vector<__PARTITIONINFO_TAG_DUMMY,std::allocator<__PARTITIONINFO_TAG_DUMMY>>::
        _M_emplace_back_aux<__PARTITIONINFO_TAG_DUMMY_const&>
                  ((vector<__PARTITIONINFO_TAG_DUMMY,std::allocator<__PARTITIONINFO_TAG_DUMMY>> *)
                   (param_1 + 2),(__PARTITIONINFO_TAG_DUMMY *)puVar4);
      }
      else {
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = *puVar4;
          lVar2 = (long)puVar1 - (long)(undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
          *(undefined8 *)((long)puVar1 + 0x7c) = *(undefined8 *)((long)puVar4 + 0x7c);
          puVar5 = (undefined8 *)((long)puVar4 - lVar2);
          puVar6 = (undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
          for (uVar3 = (ulong)((int)lVar2 + 0x84U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (ulong)bVar8 * -2 + 1;
            puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
          }
        }
        *(long *)(param_1 + 4) = (long)puVar1 + 0x84;
      }
      puVar4 = (undefined8 *)((long)puVar4 + 0x84);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)param_1[1]);
  }
  return;
}

