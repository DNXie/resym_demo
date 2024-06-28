#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40224B(FILE *a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 i; // [rsp+28h] [rbp-8h]

  if ( *a2 == a2[1] )
  {
    a2[2] = sub_406247(a2[2], a2 + 1, 8LL);
    for ( i = *a2; a2[1] > i; ++i )
      *(_QWORD *)(8 * i + a2[2]) = 0LL;
  }
  if ( !(unsigned __int8)sub_40204B(a1, (__int64 *)(a2[2] + 8 * *a2), a3) )
    return 0LL;
  ++*a2;
  return 1LL;
}
