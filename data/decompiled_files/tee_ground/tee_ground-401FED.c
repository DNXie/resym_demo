#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_401FED(int a1, off_t a2, off_t a3, int a4)
{
  return posix_fadvise(a1, a2, a3, a4);
}
