#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40A2A8(int *a1, const char *a2)
{
  int v3; // [rsp+1Ch] [rbp-4h]

  v3 = openat(*a1, a2, 67840);
  if ( v3 < 0 )
    return 0xFFFFFFFFLL;
  sub_40A257(a1);
  *a1 = v3;
  return 0LL;
}
