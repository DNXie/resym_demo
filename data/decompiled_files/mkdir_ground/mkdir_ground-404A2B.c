#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404A2B(int a1, __int64 a2, __int64 (__fastcall *a3)(_QWORD, unsigned int *, __int64), __int64 a4)
{
  int v7; // [rsp+28h] [rbp-28h]
  int i; // [rsp+2Ch] [rbp-24h]
  int v9; // [rsp+30h] [rbp-20h]
  int v10; // [rsp+34h] [rbp-1Ch]
  int v11; // [rsp+38h] [rbp-18h]
  int v12; // [rsp+3Ch] [rbp-14h]
  unsigned int v13[4]; // [rsp+40h] [rbp-10h] BYREF

  v7 = 0;
  v9 = 0;
  sub_404527(v13);
  for ( i = a1 - 1; i >= 0 && **(_BYTE **)(8LL * i + a2) == 47; --i )
    ;
  while ( v7 < i )
  {
    if ( !sub_4049FC(v13) )
    {
      v10 = a3(*(_QWORD *)(8LL * v7 + a2), v13, a4);
      if ( v9 < v10 )
        v9 = v10;
    }
    if ( **(_BYTE **)(8 * (v7 + 1LL) + a2) != 47 )
    {
      v11 = sub_404816(v13, v9);
      if ( v9 < v11 )
        v9 = v11;
    }
    ++v7;
  }
  sub_404976(v13);
  while ( v7 < a1 )
  {
    v12 = a3(*(_QWORD *)(8LL * v7 + a2), v13, a4);
    if ( v9 < v12 )
      v9 = v12;
    ++v7;
  }
  return (unsigned int)v9;
}
