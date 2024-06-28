#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4107E3(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx

  if ( (unsigned __int64)(a1[1] - 1LL) <= a1[2] )
    *a1 = sub_414ED3(*a1, a1 + 1, 8LL);
  v2 = *a1;
  ++a1[2];
  *(_QWORD *)(8LL * a1[2] + v2) = a2;
  sub_410A45(*a1, a1[2], a1[3]);
  return 0LL;
}
