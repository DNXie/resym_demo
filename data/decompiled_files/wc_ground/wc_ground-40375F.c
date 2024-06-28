#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_40375F(void **a1)
{
  if ( *a1 )
    free(a1[2]);
  free(a1);
}
