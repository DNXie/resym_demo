#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401CA8(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+18h] [rbp-8h]

  v4 = 0LL;
  while ( a2 && *(_BYTE *)(a2 - 1 + a1) == 88 )
  {
    ++v4;
    --a2;
  }
  return v4;
}
