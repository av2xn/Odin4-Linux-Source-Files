// Decompiled function: writeProtectionFail


/* DownloadEngine::writeProtectionFail(int) */

undefined8 __thiscall DownloadEngine::writeProtectionFail(DownloadEngine *this,int param_1)

{
  undefined *local_38 [2];
  undefined local_28 [24];
  
  switch(param_1) {
  default:
    local_38[0] = local_28;
    FUN_001789a0(local_38,&DAT_00300983,&DAT_00300988);
                    /* try { // try from 00179299 to 0017929d has its CatchHandler @ 001792c0 */
    FUN_00184550(this + 0x30,local_38);
    break;
  case -7:
    local_38[0] = local_28;
    FUN_001789a0(local_38,"FAIL! (Ext4)","");
                    /* try { // try from 001791d6 to 001791da has its CatchHandler @ 001792c8 */
    FUN_00184550(this + 0x30,local_38);
    break;
  case -6:
    local_38[0] = local_28;
    FUN_001789a0(local_38,"FAIL! (Size)","");
                    /* try { // try from 00179206 to 0017920a has its CatchHandler @ 001792c6 */
    FUN_00184550(this + 0x30,local_38);
    break;
  case -5:
    local_38[0] = local_28;
    FUN_001789a0(local_38,"FAIL! (Auth)","");
                    /* try { // try from 00179236 to 0017923a has its CatchHandler @ 001792c4 */
    FUN_00184550(this + 0x30,local_38);
    break;
  case -4:
    local_38[0] = local_28;
    FUN_001789a0(local_38,"FAIL! (Write)","");
                    /* try { // try from 00179266 to 0017926a has its CatchHandler @ 001792c2 */
    FUN_00184550(this + 0x30,local_38);
    break;
  case -3:
    local_38[0] = local_28;
    FUN_001789a0(local_38,"FAIL! (Erase)","");
                    /* try { // try from 00179156 to 0017915a has its CatchHandler @ 001792a3 */
    FUN_00184550(this + 0x30,local_38);
    break;
  case -2:
    local_38[0] = local_28;
    FUN_001789a0(local_38,&DAT_00300978,&DAT_00300982);
                    /* try { // try from 001791a6 to 001791aa has its CatchHandler @ 001792ca */
    FUN_00184550(this + 0x30,local_38);
  }
  if (local_38[0] != local_28) {
    operator_delete(local_38[0]);
  }
  return 0;
}

