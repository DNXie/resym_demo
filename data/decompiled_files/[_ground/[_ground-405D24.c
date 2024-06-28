#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405D24(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_405FEF();
  return sub_405E6D(a2 * a1, a2);
}
