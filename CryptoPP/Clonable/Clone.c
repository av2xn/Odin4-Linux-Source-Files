// Decompiled function: Clone


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Clonable::Clone() const */

void CryptoPP::Clonable::Clone(void)

{
  undefined8 *puVar1;
  undefined *local_38 [2];
  undefined auStack_28 [16];
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x30);
                    /* try { // try from 001828a2 to 001828a6 has its CatchHandler @ 001828e7 */
  FUN_0017c090(local_38,"Clone() is not implemented yet.");
                    /* try { // try from 001828af to 001828b3 has its CatchHandler @ 001828fa */
  FUN_00182830(puVar1,0,local_38);
  *puVar1 = &PTR__NotImplemented_00584388;
  if (local_38[0] != auStack_28) {
    operator_delete(local_38[0]);
  }
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,NotImplemented::~NotImplemented);
}

