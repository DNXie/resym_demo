#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40C490(_BYTE *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // [rsp+18h] [rbp-8h]

  v4 = 0LL;
  while ( *a1 )
    v4 = (31 * v4 + (unsigned __int8)*a1++) % a2;
  return v4;
}
