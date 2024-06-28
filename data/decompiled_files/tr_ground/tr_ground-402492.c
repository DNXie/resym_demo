#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402492(_QWORD *a1, unsigned __int64 a2, char a3, unsigned __int64 *a4)
{
  while ( a1[2] - 1LL > a2 )
  {
    if ( *(_BYTE *)(*a1 + a2) == a3
      && *(_BYTE *)(a2 + 1 + *a1) == 93
      && *(_BYTE *)(a1[1] + a2) != 1
      && *(_BYTE *)(a2 + 1 + a1[1]) != 1 )
    {
      *a4 = a2;
      return 1LL;
    }
    ++a2;
  }
  return 0LL;
}
