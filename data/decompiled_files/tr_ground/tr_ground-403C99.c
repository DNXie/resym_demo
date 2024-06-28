#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_403C99(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // [rsp+18h] [rbp-18h]
  unsigned __int64 i; // [rsp+20h] [rbp-10h]
  unsigned __int64 j; // [rsp+20h] [rbp-10h]
  unsigned __int64 v7; // [rsp+28h] [rbp-8h]

  do
  {
    v7 = sub_403C35(a1, a2);
    if ( !v7 )
      return 0LL;
    for ( i = 0LL; i < v7 && byte_60D380[(unsigned __int8)sub_4015CD(*(_BYTE *)(a1 + i))] != 1; ++i )
      ;
    v4 = i;
    for ( j = i + 1; j < v7; ++j )
    {
      if ( byte_60D380[(unsigned __int8)sub_4015CD(*(_BYTE *)(a1 + j))] != 1 )
      {
        v3 = v4++;
        *(_BYTE *)(v3 + a1) = *(_BYTE *)(a1 + j);
      }
    }
  }
  while ( !v4 );
  return v4;
}
