#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_410B07(unsigned int a1, __int64 a2)
{
  __int64 v4; // [rsp+18h] [rbp-8h]

  v4 = a2 + 10;
  *(_BYTE *)(a2 + 10) = 0;
  do
  {
    *(_BYTE *)--v4 = a1 % 0xA + 48;
    a1 /= 0xAu;
  }
  while ( a1 );
  return v4;
}
