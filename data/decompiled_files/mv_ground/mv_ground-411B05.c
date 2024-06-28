#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_411B05(__int64 a1, const char *a2, __int64 a3, __int64 a4, int a5, int a6)
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
    v8 = sub_4151AC(*(_DWORD *)(a1 + 44), (_DWORD)a2, v10, (_DWORD)a2, a5, a6);
  else
    v8 = sub_40AEE2(a2, v10, v10);
  v11 = v8;
  if ( v8 >= 0 )
    sub_414D4D((unsigned int)v8, 1LL);
  return v11;
}
