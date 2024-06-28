#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_40C02E(_BYTE *a1, unsigned int *a2)
{
  __int64 v3; // [rsp+18h] [rbp-18h] BYREF
  __int64 v4; // [rsp+20h] [rbp-10h]
  _BYTE *v5; // [rsp+28h] [rbp-8h]

  v4 = 0LL;
  v5 = a1;
  while ( 1 )
  {
    if ( !*v5 )
      return sub_40BEA3(v4, a2);
    if ( *v5 != 37 )
      break;
    if ( *++v5 != 115 )
      break;
    ++v5;
    ++v4;
  }
  if ( (int)sub_40C577(&v3, a1, a2) >= 0 )
    return (_BYTE *)v3;
  if ( *__errno_location() == 12 )
    sub_40AC2B();
  return 0LL;
}
