#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40EE58(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp-18h]
  __int64 v4; // [rsp+18h] [rbp-8h]

  v3 = a1;
  v4 = a2 + 20;
  *(_BYTE *)(a2 + 20) = 0;
  if ( a1 >= 0 )
  {
    do
    {
      *(_BYTE *)--v4 = (char)v3 % 10 + 48;
      v3 /= 10LL;
    }
    while ( v3 );
  }
  else
  {
    do
    {
      *(_BYTE *)--v4 = 48 - (char)v3 % 10;
      v3 /= 10LL;
    }
    while ( v3 );
    *(_BYTE *)--v4 = 45;
  }
  return v4;
}
