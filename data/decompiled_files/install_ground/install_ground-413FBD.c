#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_413FBD(_BYTE *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // [rsp+18h] [rbp-8h]

  v4 = 0LL;
  while ( *a1 )
    v4 = __ROR8__(v4, 55) + (char)*a1++;
  return v4 % a2;
}
