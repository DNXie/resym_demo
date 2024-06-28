#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_401D98(FILE *a1, int a2)
{
  int v2; // eax

  if ( a1 )
  {
    v2 = fileno(a1);
    sub_401D68(v2, 0LL, 0LL, a2);
  }
}
