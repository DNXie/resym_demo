#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402F05(__int64 a1, __int64 a2)
{
  int i; // [rsp+14h] [rbp-Ch]

  for ( i = 0; i <= 6; ++i )
    sub_402E4C(
      (_DWORD *)(4LL * i + a2),
      HIBYTE(*(_DWORD *)(a1 + 4LL * i)) | (*(_DWORD *)(a1 + 4LL * i) >> 8) & 0xFF00 | ((*(_DWORD *)(a1 + 4LL * i) & 0xFF00) << 8) | (*(_DWORD *)(a1 + 4LL * i) << 24));
  return a2;
}
