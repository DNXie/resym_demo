#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40AF36(char *a1, int *a2, _QWORD *a3)
{
  unsigned int v5; // [rsp+2Ch] [rbp-4h]

  v5 = sub_40ADCC(a1, a3, a2);
  if ( !*a3 )
  {
    *a3 = sub_40ADAB();
    v5 = 4;
  }
  return v5;
}
