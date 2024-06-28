#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405C59(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+18h] [rbp-8h]

  v4 = a2 + 20;
  *(_BYTE *)(a2 + 20) = 0;
  do
  {
    *(_BYTE *)--v4 = a1 % 0xA + 48;
    a1 /= 0xAuLL;
  }
  while ( a1 );
  return v4;
}
