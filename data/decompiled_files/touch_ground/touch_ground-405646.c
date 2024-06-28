#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405646(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7, __int64 a8, unsigned __int64 a9)
{
  __int64 v9; // rax
  __int64 v11; // [rsp+18h] [rbp-8h]

  if ( a9 <= 2 && a2 < 0 )
    a8 *= 100LL;
  if ( a2 >= 0 )
  {
    if ( a7 )
      v9 = -a2;
    else
      v9 = a2;
    v11 = 60 * a8 + v9;
  }
  else
  {
    v11 = 60 * (a8 / 100) + a8 % 100;
  }
  if ( (int)abs32(v11) > 1440 )
    ++*(_QWORD *)(a1 + 216);
  return v11;
}
