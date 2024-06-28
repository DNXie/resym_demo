#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405803(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7, __int64 a8, __int64 a9)
{
  __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-8h]

  v11 = a8;
  if ( a8 < 0 )
    return -a8;
  if ( a9 == 2 )
  {
    if ( a8 > 68 )
      v9 = 1900LL;
    else
      v9 = 2000LL;
    v11 = v9 + a8;
  }
  return v11;
}
