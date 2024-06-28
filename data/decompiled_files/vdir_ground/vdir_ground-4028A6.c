#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned int __fastcall sub_4028A6(const char *a1, __int64 a2)
{
  unsigned int result; // eax
  unsigned __int64 i; // [rsp+10h] [rbp-30h]
  unsigned __int64 v4; // [rsp+20h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-10h]

  result = (unsigned int)(*(_DWORD *)(a2 + 24) - *(_DWORD *)(a2 + 16)) >> 3;
  v4 = result;
  if ( result )
  {
    v5 = *(_QWORD *)(a2 + 16);
    if ( *(_QWORD *)(a2 + 24) == v5 )
      *(_BYTE *)(a2 + 80) |= 2u;
    *(_QWORD *)(a2 + 24) = (*(int *)(a2 + 48) + *(_QWORD *)(a2 + 24)) & ~*(_DWORD *)(a2 + 48);
    if ( *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 8) > *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 8) )
      *(_QWORD *)(a2 + 24) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(a2 + 24);
    fputs_unlocked(a1, stdout);
    for ( i = 0LL; i < v4; ++i )
      printf(" %lu", *(_QWORD *)(8 * i + v5));
    result = putchar_unlocked(10);
  }
  return result;
}
