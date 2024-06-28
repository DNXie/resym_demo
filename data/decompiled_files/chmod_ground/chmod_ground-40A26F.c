#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40A26F(__int64 a1, int a2)
{
  int v3; // [rsp+14h] [rbp-8h]
  unsigned int v4; // [rsp+18h] [rbp-4h]

  v3 = ((unsigned __int8)*(_DWORD *)(a1 + 20) + (*(_BYTE *)(a1 + 28) ^ 1)) & 3;
  v4 = *(_DWORD *)(a1 + 4LL * (((unsigned __int8)*(_DWORD *)(a1 + 20) + (*(_BYTE *)(a1 + 28) ^ 1)) & 3));
  *(_DWORD *)(a1 + 4LL * (((unsigned __int8)*(_DWORD *)(a1 + 20) + (*(_BYTE *)(a1 + 28) ^ 1)) & 3)) = a2;
  *(_DWORD *)(a1 + 20) = v3;
  if ( *(_DWORD *)(a1 + 24) == v3 )
    *(_DWORD *)(a1 + 24) = ((unsigned __int8)*(_DWORD *)(a1 + 24) + (*(_BYTE *)(a1 + 28) ^ 1)) & 3;
  *(_BYTE *)(a1 + 28) = 0;
  return v4;
}
