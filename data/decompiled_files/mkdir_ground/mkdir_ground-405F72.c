#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_405F72(FILE *a1)
{
  if ( !a1 || !__freading(a1) )
    return fflush(a1);
  sub_405F3F(a1);
  return fflush(a1);
}
