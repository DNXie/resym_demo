#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40D233(FILE *a1)
{
  if ( !a1 || !__freading(a1) )
    return fflush(a1);
  sub_40D200(a1);
  return fflush(a1);
}