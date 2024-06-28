#include "/share/binary_recovery/clang-parser/defs.hh"
long double __fastcall sub_40A0DF(int a1, long double a2)
{
  _BOOL4 v7; // eax
  long double v9; // [rsp+0h] [rbp-30h]
  unsigned __int64 v10; // [rsp+28h] [rbp-8h]

  if ( a1 != 1 && a2 < 1.8446744073709551615e19 )
  {
    if ( a2 >= 9.223372036854775808e18 )
      v10 = (__int64)(a2 - 9.223372036854775808e18) ^ 0x8000000000000000LL;
    else
      v10 = (__int64)a2;
    v7 = !a1 && a2 != (long double)v10;
    a2 = (long double)(v7 + v10);
  }
  *(_QWORD *)&v9 = *(_QWORD *)&a2;
  DWORD2(v9) = DWORD2(a2);
  return v9;
}
