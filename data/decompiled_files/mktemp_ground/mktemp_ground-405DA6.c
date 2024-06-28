#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_405DA6(FILE **a1)
{
  int result; // eax
  FILE *v2; // [rsp+18h] [rbp-8h]

  v2 = *a1;
  memset(a1, 0, 0x1038uLL);
  free(a1);
  if ( v2 )
    result = sub_405211(v2);
  else
    result = 0;
  return result;
}
