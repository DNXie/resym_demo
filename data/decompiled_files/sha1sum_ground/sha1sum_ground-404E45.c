#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_404E45(FILE *a1, int a2)
{
  int v2; // eax

  if ( a1 )
  {
    v2 = fileno(a1);
    sub_404E15(v2, 0LL, 0LL, a2);
  }
}
