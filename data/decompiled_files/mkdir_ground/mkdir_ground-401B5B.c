#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401B5B(__int64 a1, const char *a2, __int64 a3)
{
  __int64 v4; // [rsp+8h] [rbp-28h]
  unsigned int v5; // [rsp+24h] [rbp-Ch]

  v4 = a3;
  v5 = mkdir(a2, *(_DWORD *)(a3 + 8));
  if ( !v5 )
  {
    v5 = (*(_DWORD *)(a3 + 8) & 0x100) == 0;
    sub_401B06(a1, v4);
  }
  return v5;
}
