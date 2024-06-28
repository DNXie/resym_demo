#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401D6B(_QWORD *a1, __int64 a2, __int64 a3)
{
  if ( !*a1 )
  {
    *a1 = sub_40323F(7LL, 0LL, sub_4041CD, sub_4042BB, sub_404333);
    if ( !*a1 )
      sub_40691C();
  }
  if ( (unsigned __int8)sub_4028D1(*a1, a2, a3) )
    return 1LL;
  sub_402836(*a1, a2, a3);
  return 0LL;
}
