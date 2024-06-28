#include "/share/binary_recovery/clang-parser/defs.hh"
ssize_t __fastcall sub_4149A8(int a1, const char *a2, char *a3, size_t a4)
{
  if ( a1 != -100 )
    abort();
  return readlink(a2, a3, a4);
}
