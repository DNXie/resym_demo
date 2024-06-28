#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40B2A2(int a1)
{
  sub_40327B();
  signal(a1, 0LL);
  return raise(a1);
}
