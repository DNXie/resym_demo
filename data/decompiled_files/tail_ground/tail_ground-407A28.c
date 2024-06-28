#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_407A28(unsigned __int64 a1)
{
  unsigned __int64 v2; // [rsp+8h] [rbp-10h]
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]
  unsigned __int64 v4; // [rsp+10h] [rbp-8h]

  v2 = 3LL;
  v4 = 9LL;
  while ( v4 < a1 && a1 % v2 )
  {
    v3 = v2 + 1;
    v4 += 4 * v3;
    v2 = v3 + 1;
  }
  return a1 % v2 != 0;
}
