// Decompiled function: _M_emplace_back_aux<__PARTITIONINFO_TAG_DUMMY_const&>


/* void std::vector<__PARTITIONINFO_TAG_DUMMY, std::allocator<__PARTITIONINFO_TAG_DUMMY>
   >::_M_emplace_back_aux<__PARTITIONINFO_TAG_DUMMY const&>(__PARTITIONINFO_TAG_DUMMY const&) */

void __thiscall
std::vector<__PARTITIONINFO_TAG_DUMMY,std::allocator<__PARTITIONINFO_TAG_DUMMY>>::
_M_emplace_back_aux<__PARTITIONINFO_TAG_DUMMY_const&>
          (vector<__PARTITIONINFO_TAG_DUMMY,std::allocator<__PARTITIONINFO_TAG_DUMMY>> *this,
          __PARTITIONINFO_TAG_DUMMY *param_1)

{
  void *__src;
  long lVar1;
  ulong uVar2;
  void *__dest;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  size_t __n;
  byte bVar6;
  
  bVar6 = 0;
  lVar1 = *(long *)(this + 8) - *(long *)this >> 2;
  uVar2 = lVar1 * 0xf83e0f83e0f83e1;
  if (uVar2 == 0) {
    uVar2 = 0x84;
LAB_0017bf0d:
    __dest = operator_new(uVar2);
  }
  else {
    if ((CARRY8(uVar2,uVar2)) || (0x1f07c1f07c1f07c < (ulong)(lVar1 * 0x1f07c1f07c1f07c2))) {
      uVar2 = 0xfffffffffffffff0;
      goto LAB_0017bf0d;
    }
    uVar2 = 0;
    __dest = (void *)0x0;
    if (lVar1 * 0x1f07c1f07c1f07c2 != 0) {
      uVar2 = lVar1 * 8;
      goto LAB_0017bf0d;
    }
  }
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  puVar3 = (undefined8 *)((long)__dest + __n);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = *(undefined8 *)param_1;
    *(undefined8 *)((long)puVar3 + 0x7c) = *(undefined8 *)(param_1 + 0x7c);
    lVar1 = (long)puVar3 - (long)(undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
    puVar5 = (undefined8 *)(param_1 + -lVar1);
    puVar3 = (undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
    for (uVar4 = (ulong)((int)lVar1 + 0x84U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
      puVar3 = puVar3 + (ulong)bVar6 * -2 + 1;
    }
  }
  if (((long)__n >> 2) * 0xf83e0f83e0f83e1 == 0) {
    lVar1 = (long)__dest + __n + 0x84;
    if (__src == (void *)0x0) goto LAB_0017bf85;
  }
  else {
    memmove(__dest,__src,__n);
    lVar1 = (long)__dest + __n + 0x84;
  }
  operator_delete(__src);
LAB_0017bf85:
  *(void **)this = __dest;
  *(long *)(this + 8) = lVar1;
  *(ulong *)(this + 0x10) = uVar2 + (long)__dest;
  return;
}

