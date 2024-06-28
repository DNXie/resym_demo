#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 *__fastcall sub_404BA8(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  bool v3; // al
  bool v6; // [rsp+2Fh] [rbp-21h]
  unsigned __int64 *v7; // [rsp+30h] [rbp-20h]
  unsigned __int64 i; // [rsp+38h] [rbp-18h]
  unsigned __int64 j; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+48h] [rbp-8h]

  if ( !a2 )
    return 0LL;
  if ( a2 == 1 )
  {
    v7 = (unsigned __int64 *)sub_406EC3(8LL);
    *v7 = sub_4048AA(a1, a3);
  }
  else
  {
    v3 = a3 > 0x1FFFF && a3 / a2 > 0x1F;
    v6 = v3;
    if ( v3 )
    {
      v10 = sub_404A17(2 * a2);
      if ( !v10 )
        sub_407045();
      v7 = (unsigned __int64 *)sub_406D7A(a2, 8LL);
    }
    else
    {
      v10 = 0LL;
      v7 = (unsigned __int64 *)sub_406D7A(a3, 8LL);
      for ( i = 0LL; i < a3; ++i )
        v7[i] = i;
    }
    for ( j = 0LL; j < a2; ++j )
    {
      v11 = j + sub_4048AA(a1, a3 - j);
      if ( v6 )
        sub_404A46(v10, (__int64)v7, j, v11);
      else
        sub_40494A((__int64)v7, j, v11);
    }
    if ( v6 )
      sub_404B8E(v10);
    else
      v7 = (unsigned __int64 *)sub_406DB8(v7, a2, 8LL);
  }
  return v7;
}
