#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4059CC(__int64 a1, const char *a2)
{
  while ( a1 )
  {
    if ( !fnmatch(*(const char **)a1, a2, 4) )
      return 1LL;
    a1 = *(_QWORD *)(a1 + 8);
  }
  return 0LL;
}
