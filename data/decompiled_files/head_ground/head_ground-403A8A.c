#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403A8A(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+28h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-8h]

  v5 = 0LL;
  while ( a3 )
  {
    v7 = sub_405564(a1, a2, a3);
    if ( v7 == -1 )
      break;
    if ( !v7 )
    {
      *__errno_location() = 0;
      return v5;
    }
    v5 += v7;
    a2 += v7;
    a3 -= v7;
  }
  return v5;
}
