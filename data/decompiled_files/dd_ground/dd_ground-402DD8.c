#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402DD8(__int64 a1, _BYTE *a2)
{
  int v3; // [rsp+14h] [rbp-1Ch]
  __int64 v4; // [rsp+18h] [rbp-18h] BYREF
  _BYTE *v5; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-8h]

  v3 = sub_408BE4(a1, &v5, 10LL, &v4, "bcEGkKMPTwYZ0");
  if ( v3 == 2 && *v5 == 120 )
  {
    v6 = sub_402DD8(v5 + 1, a2);
    if ( v6 && v6 * v4 / v6 != v4 )
    {
      *a2 = 1;
      return 0LL;
    }
    v4 *= v6;
  }
  else if ( v3 )
  {
    *a2 = 1;
    return 0LL;
  }
  return v4;
}
