#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4037A7(_QWORD *a1)
{
  int v2; // [rsp+18h] [rbp-8h]
  int v3; // [rsp+1Ch] [rbp-4h]

  a1[2] = -2LL;
  v2 = sub_402C37(a1, 0LL);
  if ( v2 == -1 )
    return 0LL;
  while ( 1 )
  {
    v3 = sub_402C37(a1, 0LL);
    if ( v3 == -1 )
      break;
    if ( v3 != v2 )
      return 0LL;
  }
  return 1LL;
}
