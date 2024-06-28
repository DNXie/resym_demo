#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_401C57()
{
  sigset_t oset; // [rsp+0h] [rbp-80h] BYREF

  sub_403131();
  sigprocmask(0, &set, &oset);
  sub_4030A3(0LL);
  return sigprocmask(2, &oset, 0LL);
}
