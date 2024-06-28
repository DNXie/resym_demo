#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40C51F(FILE *a1)
{
  if ( !a1 || !__freading(a1) )
    return fflush(a1);
  sub_40C4EC(a1);
  return fflush(a1);
}
