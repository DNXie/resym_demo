#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40193C(__int64 a1)
{
  __int64 i; // [rsp+10h] [rbp-8h]

  for ( i = 1LL; *(_BYTE *)(a1 + i) != 47 && *(_BYTE *)(a1 + i); ++i )
    ;
  return i;
}
