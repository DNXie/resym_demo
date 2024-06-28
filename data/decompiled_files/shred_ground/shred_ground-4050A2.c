#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4050A2(char *a1, int *a2, _QWORD *a3)
{
  unsigned int v5; // [rsp+2Ch] [rbp-4h]

  v5 = sub_404F38(a1, a3, a2);
  if ( !*a3 )
  {
    *a3 = sub_404F17();
    v5 = 4;
  }
  return v5;
}
