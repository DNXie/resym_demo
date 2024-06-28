#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4019C8(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 i; // [rsp+28h] [rbp-8h]
  __int64 v7; // [rsp+28h] [rbp-8h]
  __int64 j; // [rsp+28h] [rbp-8h]

  if ( !a2 )
    return 0LL;
  *a4 = a1;
  for ( i = a2 - 1; i && *(_BYTE *)(a1 + i) != 41; --i )
    ;
  if ( *(_BYTE *)(a1 + i) != 41 )
    return 0LL;
  v5 = i;
  v7 = i + 1;
  *(_BYTE *)(a1 + v5) = 0;
  while ( *(_BYTE *)(a1 + v7) == 32 || *(_BYTE *)(a1 + v7) == 9 )
    ++v7;
  if ( *(_BYTE *)(a1 + v7) != 61 )
    return 0LL;
  for ( j = v7 + 1; *(_BYTE *)(a1 + j) == 32 || *(_BYTE *)(a1 + j) == 9; ++j )
    ;
  *a3 = j + a1;
  return 1LL;
}
