#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40FA0F(FILE *a1)
{
  if ( !a1 || !__freading(a1) )
    return fflush(a1);
  sub_40F9DC(a1);
  return fflush(a1);
}
