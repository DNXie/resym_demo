#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_402421(int a1, const char *a2, __uid_t a3, __gid_t a4)
{
  return fchownat(a1, a2, a3, a4, 256);
}
