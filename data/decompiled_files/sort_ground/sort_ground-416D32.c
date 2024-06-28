#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_416D32(double a1)
{
  __int64 v2; // [rsp+10h] [rbp-38h]
  signed __int64 v3; // [rsp+18h] [rbp-30h]

  if ( a1 <= -9.223372036854776e18 )
    return 0x8000000000000000LL;
  if ( a1 >= 9.223372036854776e18 )
    return 0x7FFFFFFFFFFFFFFFLL;
  v3 = ((a1 - (double)(int)a1) * 1000000000.0 > (double)(int)((a1 - (double)(int)a1) * 1000000000.0))
     + (unsigned __int64)(unsigned int)(int)((a1 - (double)(int)a1) * 1000000000.0);
  v2 = v3 / 1000000000 + (unsigned int)(int)a1;
  if ( v3 % 1000000000 < 0 )
    --v2;
  return v2;
}
