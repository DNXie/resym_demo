#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40A4EA(_QWORD *a1, __int64 a2)
{
  int v3; // [rsp+14h] [rbp-Ch]
  __int64 v4; // [rsp+18h] [rbp-8h] BYREF

  v3 = sub_40A1D0(a1, a2, &v4);
  if ( v3 == -1 )
    return 0LL;
  if ( v3 )
    return a2;
  return v4;
}
