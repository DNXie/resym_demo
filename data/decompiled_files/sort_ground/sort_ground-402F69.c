#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_402F69(void *a1)
{
  _QWORD v2[18]; // [rsp+10h] [rbp-90h] BYREF

  LOBYTE(v2[0]) = sigprocmask(0, &set, (sigset_t *)&v2[1]) == 0;
  qmemcpy(a1, v2, 0x88uLL);
  return a1;
}
