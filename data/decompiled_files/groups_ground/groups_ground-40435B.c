#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40435B(void *a1, unsigned __int64 a2)
{
  if ( a2 <= 0x3FFFFFFFFFFFFFFFLL )
    return realloc(a1, 4 * a2);
  *__errno_location() = 12;
  return 0LL;
}
