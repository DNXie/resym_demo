#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_401C66(_BYTE *a1)
{
  char v2; // [rsp+17h] [rbp-11h]
  _BYTE *i; // [rsp+20h] [rbp-8h]

  v2 = 0;
  while ( *a1 == 47 )
    ++a1;
  for ( i = a1; *i; ++i )
  {
    if ( *i == 47 )
    {
      v2 = 1;
    }
    else if ( v2 )
    {
      a1 = i;
      v2 = 0;
    }
  }
  return a1;
}
