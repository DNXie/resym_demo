#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40A205(__int64 a1, int a2)
{
  __int64 result; // rax
  int i; // [rsp+18h] [rbp-4h]

  *(_BYTE *)(a1 + 28) = 1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  for ( i = 0; i <= 3; ++i )
    *(_DWORD *)(a1 + 4LL * i) = a2;
  result = a1;
  *(_DWORD *)(a1 + 16) = a2;
  return result;
}
