#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_407682(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // [rsp+18h] [rbp-8h]

  if ( a1[5] > a1[4] )
    return 0LL;
  v3 = a1[2] - a1[1];
  if ( !v3 )
    return 0LL;
  *a2 = v3;
  return a1[1];
}
