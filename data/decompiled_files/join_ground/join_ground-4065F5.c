#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4065F5(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // [rsp+28h] [rbp-8h]
  int v8; // [rsp+2Ch] [rbp-4h]

  v7 = sub_407251(a1, a2, a3, a4);
  v8 = *__errno_location();
  if ( v8 )
    sub_4064BD(v8, a1, a2 - 1, a3, a4 - 1);
  return v7;
}
