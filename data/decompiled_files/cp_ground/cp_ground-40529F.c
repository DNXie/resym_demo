#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40529F(_QWORD *a1, _QWORD *a2)
{
  while ( a2 )
  {
    if ( a2[1] == a1[1] && a2[2] == *a1 )
      return 1LL;
    a2 = (_QWORD *)*a2;
  }
  return 0LL;
}
