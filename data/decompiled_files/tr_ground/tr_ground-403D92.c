#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_403D92(__int64 a1, __int64 a2)
{
  unsigned __int64 i; // [rsp+10h] [rbp-20h]
  unsigned __int64 v4; // [rsp+18h] [rbp-18h]

  v4 = sub_403C35(a1, a2);
  for ( i = 0LL; i < v4; ++i )
    *(_BYTE *)(a1 + i) = byte_60D480[(unsigned __int8)sub_4015CD(*(_BYTE *)(a1 + i))];
  return v4;
}
