#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_41512A(__int64 a1)
{
  unsigned int v2; // [rsp+1Ch] [rbp-4h]

  if ( (unsigned __int8)sub_415090(a1) )
    abort();
  v2 = *(_DWORD *)(a1 + 4LL * *(unsigned int *)(a1 + 20));
  *(_DWORD *)(a1 + 4LL * *(unsigned int *)(a1 + 20)) = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 20) == *(_DWORD *)(a1 + 24) )
    *(_BYTE *)(a1 + 28) = 1;
  else
    *(_DWORD *)(a1 + 20) = ((unsigned __int8)*(_DWORD *)(a1 + 20) + 3) & 3;
  return v2;
}
