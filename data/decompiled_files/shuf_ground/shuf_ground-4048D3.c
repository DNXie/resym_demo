#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4048D3(__int64 a1)
{
  unsigned __int64 i; // [rsp+0h] [rbp-18h]
  __int64 v3; // [rsp+10h] [rbp-8h]

  v3 = 0LL;
  for ( i = a1 - 1; i; i >>= 1 )
    ++v3;
  return v3;
}
