// Decompiled function: FirmwareItem


/* FirmwareItem::FirmwareItem(FirmwareInfo const&) */

void __thiscall FirmwareItem::FirmwareItem(FirmwareItem *this,FirmwareInfo *param_1)

{
  basic_istream<char,std::char_traits<char>> *this_00;
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  void *pvVar7;
  
  this_00 = (basic_istream<char,std::char_traits<char>> *)(this + 8);
  *(undefined ***)this = &PTR__FirmwareItem_00584400;
  pcVar1 = *(char **)param_1;
  std::ios_base::ios_base((ios_base *)(this + 0x108));
  this[0x1e8] = (FirmwareItem)0x0;
  *(undefined8 *)(this + 0x1e0) = 0;
  this[0x1e9] = (FirmwareItem)0x0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined ***)(this + 0x108) = &PTR__basic_ios_005add30;
  puVar5 = PTR_DAT_005acf00;
  puVar4 = PTR_DAT_005acef8;
  lVar6 = *(long *)(PTR_DAT_005acef8 + -0x18);
  *(undefined **)(this + 8) = PTR_DAT_005acef8;
  *(undefined **)(this + lVar6 + 8) = puVar5;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 0017dc94 to 0017dc98 has its CatchHandler @ 0017ddbc */
  std::basic_ios<char,std::char_traits<char>>::init
            ((basic_ios<char,std::char_traits<char>> *)(this_00 + *(long *)(puVar4 + -0x18)),
             (basic_streambuf *)0x0);
  *(undefined ***)(this + 0x108) = &PTR__basic_ifstream_005acf50;
  *(undefined ***)(this + 8) = &PTR__basic_ifstream_005acf28;
                    /* try { // try from 0017dcba to 0017dcbe has its CatchHandler @ 0017de2c */
  std::basic_filebuf<char,std::char_traits<char>>::basic_filebuf();
                    /* try { // try from 0017dcc5 to 0017dcf5 has its CatchHandler @ 0017de05 */
  std::basic_ios<char,std::char_traits<char>>::init
            ((basic_ios<char,std::char_traits<char>> *)(ios_base *)(this + 0x108),
             (basic_streambuf *)(basic_filebuf<char,std::char_traits<char>> *)(this + 0x18));
  lVar6 = std::basic_filebuf<char,std::char_traits<char>>::open
                    ((basic_filebuf<char,std::char_traits<char>> *)(this + 0x18),pcVar1,0xc);
  if (lVar6 == 0) {
                    /* try { // try from 0017ddb2 to 0017ddb6 has its CatchHandler @ 0017de05 */
    std::basic_ios<char,std::char_traits<char>>::clear
              ((basic_ios<char,std::char_traits<char>> *)
               (this_00 + *(long *)(*(long *)(this + 8) + -0x18)),
               *(uint *)((basic_ios<char,std::char_traits<char>> *)
                         (this_00 + *(long *)(*(long *)(this + 8) + -0x18)) + 0x20) | 4);
  }
  else {
    std::basic_ios<char,std::char_traits<char>>::clear
              ((basic_ios<char,std::char_traits<char>> *)
               (this_00 + *(long *)(*(long *)(this + 8) + -0x18)),0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  lVar6 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x238) = uVar2;
  *(undefined8 *)(this + 0x230) = uVar3;
                    /* try { // try from 0017dd36 to 0017dd8c has its CatchHandler @ 0017dde1 */
  std::basic_istream<char,std::char_traits<char>>::seekg(this_00,lVar6,0);
  if (this[0x232] == (FirmwareItem)0x0) {
    *(undefined8 *)(this + 0x210) = *(undefined8 *)(param_1 + 0x20);
    return;
  }
  *(undefined8 *)(this + 0x210) = *(undefined8 *)(this + 0x238);
  std::basic_istream<char,std::char_traits<char>>::seekg(this_00,(long)*(short *)(this + 0x230),1);
  pvVar7 = operator_new__(0x100000);
  *(void **)(this + 0x228) = pvVar7;
  return;
}

