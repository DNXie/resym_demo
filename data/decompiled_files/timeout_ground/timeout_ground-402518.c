#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_402518(int a1)
{
  struct sigaction v2; // [rsp+10h] [rbp-A0h] BYREF

  sigemptyset(&v2.sa_mask);
  v2.sa_handler = (__sighandler_t)sub_40218D;
  v2.sa_flags = 0x10000000;
  sigaction(14, &v2, 0LL);
  sigaction(2, &v2, 0LL);
  sigaction(3, &v2, 0LL);
  sigaction(1, &v2, 0LL);
  sigaction(15, &v2, 0LL);
  return sigaction(a1, &v2, 0LL);
}
