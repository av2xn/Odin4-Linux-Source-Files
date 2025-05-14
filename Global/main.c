// Decompiled function: main


/* WARNING: Type propagation algorithm not settling */

byte main(int param_1,long param_2)

{
  char *pcVar1;
  bool bVar2;
  long *plVar3;
  long *******ppppppplVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  size_t sVar9;
  long *plVar10;
  basic_ostream *pbVar11;
  char *pcVar12;
  long *plVar13;
  long *******ppppppplVar14;
  long lVar15;
  undefined *puVar16;
  byte bVar17;
  long **local_910;
  long **local_908;
  long ******local_8d0;
  long *local_8c8;
  long *local_8c0;
  long *local_8b8;
  vector<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
  local_8a8 [32];
  vector<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
  local_888 [32];
  undefined *local_868;
  undefined8 local_860;
  undefined local_858 [16];
  undefined *local_848 [2];
  undefined local_838 [16];
  undefined *local_828 [2];
  undefined local_818 [16];
  undefined *local_808 [2];
  undefined auStack_7f8 [16];
  undefined *local_7e8 [2];
  undefined auStack_7d8 [16];
  undefined *local_7c8 [2];
  undefined auStack_7b8 [16];
  undefined *local_7a8 [2];
  undefined auStack_798 [16];
  undefined *local_788 [2];
  undefined local_778 [16];
  undefined *local_768 [2];
  undefined auStack_758 [16];
  char *local_748;
  long local_740;
  char acStack_738 [16];
  undefined *local_728;
  long local_720;
  undefined local_718;
  undefined7 uStack_717;
  long local_710;
  code *local_708;
  undefined8 local_700;
  undefined auStack_6f8 [16];
  long *******local_6e8;
  long *******local_6e0;
  long *******local_6d8 [2];
  undefined *local_6c8 [2];
  undefined auStack_6b8 [16];
  undefined *local_6a8 [2];
  undefined auStack_698 [16];
  FirmwareData local_688 [384];
  long *local_508 [2];
  long local_4f8 [48];
  code **local_378;
  long *local_370;
  FirmwareData local_368 [384];
  undefined **local_1e8;
  code **local_1d8;
  long *local_1d0;
  code *local_1c8 [48];
  undefined **local_48;
  
  if (param_1 == 1) {
    std::__ostream_insert<char,std::char_traits<char>>
              ((basic_ostream *)&std::cout,"Usage: odin4 -h",0xf);
    std::endl<char,std::char_traits<char>>((basic_ostream *)&std::cout);
    return 1;
  }
  local_860 = 0;
  local_858[0] = 0;
  local_868 = local_858;
  local_8c8 = (long *)0x0;
  local_8c0 = (long *)0x0;
  local_8b8 = (long *)0x0;
                    /* try { // try from 00176d17 to 00176d1b has its CatchHandler @ 00177abd */
  FirmwareData::FirmwareData(local_688);
  iVar6 = fileno(*(FILE **)PTR_stdin_005b0878);
  iVar6 = isatty(iVar6);
                    /* try { // try from 00176d44 to 00176d48 has its CatchHandler @ 00177ab8 */
  FUN_001843c0(iVar6 != 0);
  if (param_1 < 2) {
    bVar2 = false;
  }
  else {
    iVar6 = 1;
    bVar2 = false;
    do {
      lVar8 = (long)iVar6;
      pcVar12 = (char *)0xffffffffffffffff;
      pcVar1 = *(char **)(param_2 + lVar8 * 8);
      local_1d8 = local_1c8;
      if (pcVar1 != (char *)0x0) {
        sVar9 = strlen(pcVar1);
        pcVar12 = pcVar1 + sVar9;
      }
                    /* try { // try from 00176e8e to 00176e92 has its CatchHandler @ 00177ab8 */
      FUN_0018e1b0(&local_1d8,pcVar1,pcVar12);
                    /* try { // try from 00176e9d to 00176f3d has its CatchHandler @ 00177b4d */
      iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::compare
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                         &local_1d8,"-h");
      if (iVar7 == 0) {
                    /* try { // try from 001773e5 to 001774c6 has its CatchHandler @ 00177b4d */
        printf("Usage : odin4 [args...]\nOdin4 downloader. odin4 version %s\n -v        SHOW VERSION\n -w        Show License\n -b        Add Bootloader file\n -a        Add AP image file\n -c        Add CP image file\n -s        Add CSC file\n -u        Add UMS file\n -e        Set Nand erase option\n -V        Home binary validation check with pit file\n --reboot  Reboot into normal mode\n --redownload   Reboot into download mode if it possible (not working in normal case)\n -d        Set a device path (detect automatically without this option)\n -l        Show downloadable devices path\n\nIMPORTANT : You must set up your system to detect your device on LINUX host.\n create this file: /etc/udev/rules.d/51-android.rules\n to add a line to the file:\n SUBSYSTEM==\"usb\", ATTR{idVendor}==\"04e8\", MODE=\"0666\", GROUP=\"plugdev\"\n   (http://developer.android.com/tools/device.html)\n And you maybe need to unload a module cdc_acm before downloading. (This is only needed for older kernels.)\n   $sudo rmmod cdc_acm\n OR\n   echo \"blacklist cdc_acm\" > /etc/modprobe.d/cdc_acm-blacklist.conf\n\nExample :\n$odin4 -b BL_XXXX.tar.md5 -a AP_XXXX.tar.md5 -c CP_XXXX.tar.md5 -s CSC_XXXX.tar.md5\nExample (Select One Device):\n$odin4 -l\nPATH_OF_DEVICE_A\nPATH_OF_DEVICE_B\n$odin4 -b BL_XXXX.tar.md5 -a AP_XXXX.tar.md5 -c CP_XXXX.tar.md5 -s CSC_XXXX.tar.md5 -d PATH_OF_DEVICE_A\n\nOdin Community : http://mobilerndhub.sec.samsung.net/hub/site/odin/\n"
               ,"1.2.1-dc05e3ea");
LAB_001773ed:
        bVar17 = 0;
LAB_001773f7:
        if (local_1d8 != local_1c8) {
          operator_delete(local_1d8);
        }
        goto LAB_0017740d;
      }
      iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::compare
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                         &local_1d8,"-v");
      if (iVar7 == 0) {
                    /* try { // try from 001775bb to 001775db has its CatchHandler @ 00177b4d */
        std::__ostream_insert<char,std::char_traits<char>>
                  ((basic_ostream *)&std::cout,"odin4 version ",0xe);
        std::__ostream_insert<char,std::char_traits<char>>
                  ((basic_ostream *)&std::cout,"1.2.1-dc05e3ea",0xe);
        std::endl<char,std::char_traits<char>>((basic_ostream *)&std::cout);
        goto LAB_001773ed;
      }
      iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::compare
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                         &local_1d8,"-p");
      if ((iVar7 == 0) && (iVar6 = iVar6 + 1, iVar6 < param_1)) {
        pcVar1 = *(char **)(param_2 + 8 + lVar8 * 8);
        pcVar12 = (char *)0xffffffffffffffff;
        local_848[0] = local_838;
        if (pcVar1 != (char *)0x0) {
          sVar9 = strlen(pcVar1);
          pcVar12 = pcVar1 + sVar9;
        }
                    /* try { // try from 00176dea to 00176dee has its CatchHandler @ 00177b4d */
        FUN_0018e1b0(local_848,pcVar1,pcVar12);
                    /* try { // try from 00176df5 to 00176df9 has its CatchHandler @ 00177ae9 */
        cVar5 = FUN_0017c890(local_688,local_848);
        puVar16 = local_848[0];
        if (local_848[0] == local_838) goto LAB_00176e19;
LAB_00176e0b:
        operator_delete(puVar16);
        goto LAB_00176e19;
      }
      iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::compare
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                         &local_1d8,"-b");
      if ((iVar7 == 0) && (iVar6 = iVar6 + 1, iVar6 < param_1)) {
        pcVar12 = (char *)0xffffffffffffffff;
        pcVar1 = *(char **)(param_2 + (long)iVar6 * 8);
        local_828[0] = local_818;
        if (pcVar1 != (char *)0x0) {
          sVar9 = strlen(pcVar1);
          pcVar12 = pcVar1 + sVar9;
        }
        FUN_0018e1b0(local_828,pcVar1,pcVar12);
                    /* try { // try from 00176f44 to 00176f48 has its CatchHandler @ 00177c0b */
        cVar5 = FUN_00181a70(local_688,local_828);
        puVar16 = local_828[0];
        if (local_828[0] != local_818) goto LAB_00176e0b;
        if (cVar5 != '\0') goto LAB_00176e21;
LAB_00176f66:
        bVar17 = 1;
        goto LAB_001773f7;
      }
                    /* try { // try from 00176f8a to 00176fb2 has its CatchHandler @ 00177b4d */
      iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::compare
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                         &local_1d8,"-a");
      if ((iVar7 != 0) || (iVar6 = iVar6 + 1, param_1 <= iVar6)) {
                    /* try { // try from 00176fea to 00177012 has its CatchHandler @ 00177b4d */
        iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                compare((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_1d8
                        ,"-c");
        if ((iVar7 == 0) && (iVar6 = iVar6 + 1, iVar6 < param_1)) {
          FUN_0018e260(local_7e8,*(undefined8 *)(param_2 + (long)iVar6 * 8));
                    /* try { // try from 00177019 to 0017701d has its CatchHandler @ 00177acc */
          cVar5 = FUN_00181bd0(local_688,local_7e8);
          puVar16 = local_7e8[0];
          if (local_7e8[0] != auStack_7d8) goto LAB_00176e0b;
          goto LAB_00176e19;
        }
                    /* try { // try from 0017704a to 0017708d has its CatchHandler @ 00177b4d */
        iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                compare((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_1d8
                        ,"-s");
        if ((iVar7 == 0) && (iVar6 = iVar6 + 1, iVar6 < param_1)) {
                    /* try { // try from 001770ce to 001770d2 has its CatchHandler @ 00177b4d */
          FUN_0018e260(local_7c8,*(undefined8 *)(param_2 + (long)iVar6 * 8));
                    /* try { // try from 001770d9 to 001770dd has its CatchHandler @ 00177c74 */
          cVar5 = FUN_00181c80(local_688,local_7c8);
          puVar16 = local_7c8[0];
          if (local_7c8[0] != auStack_7b8) goto LAB_00176e0b;
          goto LAB_00176e19;
        }
        iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                compare((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_1d8
                        ,"-u");
        if ((iVar7 == 0) && (iVar6 = iVar6 + 1, iVar6 < param_1)) {
          FUN_0018e260(local_7a8,*(undefined8 *)(param_2 + (long)iVar6 * 8));
                    /* try { // try from 00177094 to 00177098 has its CatchHandler @ 00177a4a */
          cVar5 = FUN_00181d30(local_688,local_7a8);
          puVar16 = local_7a8[0];
          if (local_7a8[0] != auStack_798) goto LAB_00176e0b;
          goto LAB_00176e19;
        }
                    /* try { // try from 00177102 to 00177143 has its CatchHandler @ 00177b4d */
        iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                compare((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_1d8
                        ,"-e");
        if (iVar7 == 0) {
          FUN_0017c830(local_688,1);
          goto LAB_00176e21;
        }
        iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                compare((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_1d8
                        ,"-V");
        if ((iVar7 == 0) && (iVar6 = iVar6 + 1, iVar6 < param_1)) {
          FUN_0018e260(local_788,*(undefined8 *)(param_2 + (long)iVar6 * 8));
                    /* try { // try from 0017714c to 00177150 has its CatchHandler @ 00177ce0 */
          cVar5 = FUN_0017c870(local_688,local_788);
          puVar16 = local_788[0];
          if (local_788[0] != local_778) goto LAB_00176e0b;
          goto LAB_00176e19;
        }
        iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                compare((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_1d8
                        ,"-i");
        if ((iVar7 != 0) || (iVar6 = iVar6 + 1, param_1 <= iVar6)) {
          iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                  compare((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                          &local_1d8,"-w");
          if (iVar7 != 0) {
            iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                    compare((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                            &local_1d8,"-d");
            if ((iVar7 == 0) && (iVar6 = iVar6 + 1, iVar6 < param_1)) {
              FUN_0018e260(&local_728,*(undefined8 *)(param_2 + (long)iVar6 * 8));
              if (local_8c0 == local_8b8) {
                    /* try { // try from 00177a36 to 00177a3a has its CatchHandler @ 00177be4 */
                std::
                vector<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                ::
                _M_emplace_back_aux<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>
                          ((vector<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                            *)&local_8c8,(basic_string *)&local_728);
              }
              else {
                if (local_8c0 != (long *)0x0) {
                  *local_8c0 = (long)(local_8c0 + 2);
                  if (local_728 == &local_718) {
                    local_8c0[2] = CONCAT71(uStack_717,local_718);
                    local_8c0[3] = local_710;
                  }
                  else {
                    *local_8c0 = (long)local_728;
                    local_8c0[2] = CONCAT71(uStack_717,local_718);
                  }
                  local_8c0[1] = local_720;
                  local_720 = 0;
                  local_718 = 0;
                  local_728 = &local_718;
                }
                local_8c0 = local_8c0 + 4;
              }
              if (local_728 != &local_718) {
                operator_delete(local_728);
              }
            }
            else {
                    /* try { // try from 00177966 to 001779ea has its CatchHandler @ 00177b4d */
              iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                      compare((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                              &local_1d8,"-l");
              if (iVar7 == 0) {
                    /* try { // try from 00177c30 to 00177c34 has its CatchHandler @ 00177b4d */
                FUN_00190730(local_8a8);
                    /* try { // try from 00177c45 to 00177c49 has its CatchHandler @ 00177c91 */
                std::
                vector<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                ::operator=((vector<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                             *)&local_8c8,(vector *)local_8a8);
                std::
                vector<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                ::~vector(local_8a8);
                bVar17 = 0;
                goto LAB_001773f7;
              }
              iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                      compare((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                              &local_1d8,"--reboot");
              if (iVar7 == 0) {
                std::__ostream_insert<char,std::char_traits<char>>
                          ((basic_ostream *)&std::cout,"Reboot into normal mode",0x17);
                std::endl<char,std::char_traits<char>>((basic_ostream *)&std::cout);
              }
              else {
                iVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>
                        ::compare((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                                  &local_1d8,"--redownload");
                if (iVar7 != 0) {
                    /* try { // try from 00177dd6 to 00177dfa has its CatchHandler @ 00177b4d */
                  std::__ostream_insert<char,std::char_traits<char>>
                            ((basic_ostream *)&std::cout,"odin4: illegal option ",0x16);
                  pbVar11 = std::__ostream_insert<char,std::char_traits<char>>
                                      ((basic_ostream *)&std::cout,(char *)local_1d8,(long)local_1d0
                                      );
                  std::endl<char,std::char_traits<char>>(pbVar11);
                  goto LAB_00176f66;
                }
                std::__ostream_insert<char,std::char_traits<char>>
                          ((basic_ostream *)&std::cout,
                           "Reboot into download mode if it possible (not working in normal case)",
                           0x45);
                std::endl<char,std::char_traits<char>>((basic_ostream *)&std::cout);
                bVar2 = true;
              }
            }
            goto LAB_00176e21;
          }
                    /* try { // try from 00177a40 to 00177a44 has its CatchHandler @ 00177b4d */
          showLicenses();
          goto LAB_001773ed;
        }
                    /* try { // try from 00177805 to 00177809 has its CatchHandler @ 00177b4d */
        FUN_0018e260(local_768,*(undefined8 *)(param_2 + (long)iVar6 * 8));
                    /* try { // try from 00177818 to 0017781c has its CatchHandler @ 00177ba2 */
        FUN_0018d620(&local_748,local_768);
                    /* try { // try from 00177834 to 00177840 has its CatchHandler @ 00177b6f */
        pbVar11 = std::__ostream_insert<char,std::char_traits<char>>
                            ((basic_ostream *)&std::cout,local_748,local_740);
        std::endl<char,std::char_traits<char>>(pbVar11);
        if (local_748 != acStack_738) {
          operator_delete(local_748);
        }
        bVar17 = 0;
        if (local_768[0] == auStack_758) goto LAB_001773ed;
        operator_delete(local_768[0]);
        goto LAB_001773f7;
      }
      FUN_0018e260(local_808,*(undefined8 *)(param_2 + (long)iVar6 * 8));
                    /* try { // try from 00176fb9 to 00176fbd has its CatchHandler @ 00177c57 */
      cVar5 = FUN_00181b20(local_688,local_808);
      puVar16 = local_808[0];
      if (local_808[0] != auStack_7f8) goto LAB_00176e0b;
LAB_00176e19:
      if (cVar5 == '\0') goto LAB_00176f66;
LAB_00176e21:
      if (local_1d8 != local_1c8) {
        operator_delete(local_1d8);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1);
  }
  if (local_8c0 == local_8c8) {
                    /* try { // try from 0017789f to 001778a3 has its CatchHandler @ 00177ab8 */
    FUN_00190730(local_888);
                    /* try { // try from 001778b4 to 001778b8 has its CatchHandler @ 00177ca9 */
    std::
    vector<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
    ::operator=((vector<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                 *)&local_8c8,(vector *)local_888);
    std::
    vector<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
    ::~vector(local_888);
    if (local_8c0 == local_8c8) {
                    /* try { // try from 001778ee to 001778f2 has its CatchHandler @ 00177ab8 */
      FUN_0018e260(&local_6e8,"cannot find device");
                    /* try { // try from 0017790d to 00177911 has its CatchHandler @ 00177ca1 */
      FUN_0018e260(&local_708,&DAT_003028d3);
                    /* try { // try from 00177918 to 0017791c has its CatchHandler @ 00177ba7 */
      FUN_00184550(&local_708,&local_6e8);
      if (local_708 != (code *)auStack_6f8) {
        operator_delete(local_708);
      }
      if ((long ********)local_6e8 != local_6d8) {
        operator_delete(local_6e8);
      }
      bVar17 = 1;
      goto LAB_0017740d;
    }
  }
  plVar3 = local_8c8;
  if ((long)local_8c0 - (long)local_8c8 >> 5 == 1) {
                    /* try { // try from 00177778 to 0017777c has its CatchHandler @ 00177ab8 */
    FUN_0018e260(local_508,&DAT_003028d3);
                    /* try { // try from 00177783 to 00177787 has its CatchHandler @ 00177cb9 */
    FUN_00184550(local_508,plVar3);
    if (local_508[0] != local_4f8) {
      operator_delete(local_508[0]);
    }
                    /* try { // try from 001777be to 001777c2 has its CatchHandler @ 00177ab8 */
    DownloadEngine::DownloadEngine((DownloadEngine *)&local_1d8,(basic_string *)local_8c8,local_688)
    ;
    if (bVar2) {
                    /* try { // try from 00177880 to 00177884 has its CatchHandler @ 00177b55 */
      bVar17 = FUN_00179490(&local_1d8);
    }
    else {
                    /* try { // try from 001777d1 to 001777d5 has its CatchHandler @ 00177b55 */
      bVar17 = FUN_0017ade0();
    }
    DownloadEngine::~DownloadEngine((DownloadEngine *)&local_1d8);
  }
  else {
                    /* try { // try from 001771a1 to 001771a5 has its CatchHandler @ 00177ab8 */
    FUN_001843b0(1);
    plVar3 = local_8c0;
    local_728 = (undefined *)((ulong)local_728 & 0xffffffff00000000);
    local_6e8 = (long *******)0x0;
    local_6e0 = (long *******)0x0;
    local_6d8[0] = (long *******)0x0;
    local_700 = 0;
    local_708 = FUN_0017ade0;
    if (bVar2) {
      local_708 = FUN_00179490;
    }
    if (local_8c0 != local_8c8) {
      plVar13 = local_8c8;
      do {
        local_378 = &local_708;
        local_370 = plVar13;
                    /* try { // try from 001772b8 to 001772bc has its CatchHandler @ 00177b3b */
        FirmwareData::FirmwareData(local_368,local_688);
        local_8d0 = (long ******)0x0;
        local_1d8 = local_378;
        local_1d0 = local_370;
        local_1e8 = &local_728;
                    /* try { // try from 001772fa to 001772fe has its CatchHandler @ 00177b06 */
        FirmwareData::FirmwareData((FirmwareData *)local_1c8,local_368);
        local_48 = local_1e8;
                    /* try { // try from 00177314 to 00177318 has its CatchHandler @ 00177da3 */
        plVar10 = (long *)operator_new(0x1a0);
        *plVar10 = (long)&PTR_FUN_005844c8;
        plVar10[1] = (long)local_1d8;
        plVar10[2] = (long)local_1d0;
                    /* try { // try from 00177346 to 0017734a has its CatchHandler @ 00177d6b */
        FirmwareData::FirmwareData((FirmwareData *)(plVar10 + 3),(FirmwareData *)local_1c8);
        plVar10[0x33] = (long)local_48;
        local_508[0] = plVar10;
                    /* try { // try from 00177379 to 0017737d has its CatchHandler @ 00177da8 */
        std::thread::_M_start_thread((unique_ptr)&local_8d0,(_func_void *)local_508);
        if (local_508[0] != (long *)0x0) {
          (**(code **)(*local_508[0] + 8))();
        }
        FirmwareData::~FirmwareData((FirmwareData *)local_1c8);
        if (local_6e0 == local_6d8[0]) {
                    /* try { // try from 00177568 to 0017756c has its CatchHandler @ 00177d57 */
          std::vector<std::thread,std::allocator<std::thread>>::_M_emplace_back_aux<std::thread>
                    ((vector<std::thread,std::allocator<std::thread>> *)&local_6e8,
                     (thread *)&local_8d0);
LAB_001773c9:
          if (local_8d0 != (long ******)0x0) {
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
        }
        else {
          if (local_6e0 == (long *******)0x0) {
            local_6e0 = (long *******)&DAT_00000008;
            goto LAB_001773c9;
          }
          *local_6e0 = (long ******)0x0;
          *local_6e0 = local_8d0;
          local_6e0 = local_6e0 + 1;
        }
        plVar13 = plVar13 + 4;
        FirmwareData::~FirmwareData(local_368);
        ppppppplVar4 = local_6e0;
        ppppppplVar14 = local_6e8;
      } while (plVar3 != plVar13);
      for (; ppppppplVar4 != ppppppplVar14; ppppppplVar14 = ppppppplVar14 + 1) {
        while (*ppppppplVar14 == (long ******)0x0) {
          ppppppplVar14 = ppppppplVar14 + 1;
          if (ppppppplVar4 == ppppppplVar14) goto LAB_00177620;
        }
                    /* try { // try from 00177612 to 0017762e has its CatchHandler @ 00177b3b */
        std::thread::join();
      }
    }
LAB_00177620:
    local_908 = local_508;
    std::__cxx11::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::
    basic_stringstream((basic_stringstream<char,std::char_traits<char>,std::allocator<char>> *)
                       local_908,0x18);
    lVar15 = (long)local_8c0 - (long)local_8c8;
    iVar6 = (int)local_728;
    lVar8 = (long)(int)local_728;
                    /* try { // try from 00177664 to 001776b8 has its CatchHandler @ 00177d52 */
    std::__ostream_insert<char,std::char_traits<char>>
              ((basic_ostream *)local_4f8,"All threads completed. (succeed ",0x20);
    pbVar11 = (basic_ostream *)
              std::basic_ostream<char,std::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::char_traits<char>> *)local_4f8,iVar6);
    std::__ostream_insert<char,std::char_traits<char>>(pbVar11," / failed ",10);
    pbVar11 = std::basic_ostream<char,std::char_traits<char>>::_M_insert<unsigned_long>
                        ((basic_ostream<char,std::char_traits<char>> *)pbVar11,(lVar15 >> 5) - lVar8
                        );
    std::operator<<(pbVar11,")");
    std::__cxx11::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>>::str();
                    /* try { // try from 001776cb to 001776cf has its CatchHandler @ 00177d4d */
    FUN_0018e260(local_6a8,&DAT_003028d3);
                    /* try { // try from 001776d6 to 001776da has its CatchHandler @ 00177d02 */
    FUN_00184550(local_6a8,local_6c8);
    if (local_6a8[0] != auStack_698) {
      operator_delete(local_6a8[0]);
    }
    if (local_6c8[0] != auStack_6b8) {
      operator_delete(local_6c8[0]);
    }
    bVar17 = (long)local_8c0 - (long)local_8c8 >> 5 == (long)(int)local_728;
    std::__cxx11::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::
    ~basic_stringstream((basic_stringstream<char,std::char_traits<char>,std::allocator<char>> *)
                        local_908);
    std::vector<std::thread,std::allocator<std::thread>>::~vector
              ((vector<std::thread,std::allocator<std::thread>> *)&local_6e8);
  }
  bVar17 = bVar17 ^ 1;
LAB_0017740d:
  local_910 = &local_8c8;
  FirmwareData::~FirmwareData(local_688);
  std::
  vector<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
  ::~vector((vector<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
             *)local_910);
  if (local_868 != local_858) {
    operator_delete(local_868);
  }
  return bVar17;
}

