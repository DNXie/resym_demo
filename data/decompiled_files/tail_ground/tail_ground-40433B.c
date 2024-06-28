#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40433B(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 i; // [rsp+18h] [rbp-8h]

  for ( i = 0LL; i < a2; ++i )
  {
    if ( *(_BYTE *)(96 * i + a1 + 52) != 1 && !strcmp(*(const char **)(96 * i + a1), "-") )
      return 1LL;
  }
  return 0LL;
}
