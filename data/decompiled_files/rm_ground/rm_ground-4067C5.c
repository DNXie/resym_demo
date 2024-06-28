#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4067C5(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v10; // [rsp+18h] [rbp-8h]
  unsigned int v11; // [rsp+1Ch] [rbp-4h]

  if ( (*(_DWORD *)(a1 + 72) & 0x10) != 0 )
    v6 = 198912;
  else
    v6 = 67840;
  if ( (*(_DWORD *)(a1 + 72) & 0x800) != 0 )
    v7 = 0x40000;
  else
    v7 = 0;
  v10 = v6 | v7;
  if ( (*(_DWORD *)(a1 + 72) & 0x200) != 0 )
    v8 = sub_40ACF7(*(_DWORD *)(a1 + 44), a2, v10, a2, a5, a6);
  else
    v8 = sub_4091D1(a2, v10, v10, a4, a5, a6, a2);
  v11 = v8;
  if ( v8 >= 0 )
    sub_408F94((unsigned int)v8, 1LL);
  return v11;
}
