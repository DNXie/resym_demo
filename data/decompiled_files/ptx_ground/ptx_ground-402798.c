#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402798(const void *a1, _QWORD *a2)
{
  int v3; // [rsp+10h] [rbp-10h]
  int v4; // [rsp+14h] [rbp-Ch]
  int v5; // [rsp+18h] [rbp-8h]
  int v6; // [rsp+1Ch] [rbp-4h]

  v3 = 0;
  v4 = a2[2] - 1;
  while ( v3 <= v4 )
  {
    v5 = (v3 + v4) / 2;
    v6 = sub_40260E(a1, (const void *)(*a2 + 16LL * v5));
    if ( v6 >= 0 )
    {
      if ( v6 <= 0 )
        return 1LL;
      v3 = v5 + 1;
    }
    else
    {
      v4 = v5 - 1;
    }
  }
  return 0LL;
}
