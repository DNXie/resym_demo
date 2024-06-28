#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402A8A(__int64 a1, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // [rsp+14h] [rbp-8h]

  if ( a1 == qword_613280 )
    return 0LL;
  v4 = 10 * (dword_608280 - a2) * (__int64)(10 * (dword_608280 - a2));
  if ( *(_QWORD *)(a1 + 32) != qword_613280 )
  {
    v3 = 10 * (a2 - *(_DWORD *)(a1 + 20));
    v4 += v3 * v3 / 2;
  }
  return v4;
}
