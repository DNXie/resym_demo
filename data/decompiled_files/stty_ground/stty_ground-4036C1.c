#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4036C1()
{
  char v1[2]; // [rsp+0h] [rbp-20h] BYREF
  unsigned __int16 v2; // [rsp+2h] [rbp-1Eh]
  __int64 v3; // [rsp+10h] [rbp-10h] BYREF
  char *v4; // [rsp+18h] [rbp-8h]

  if ( !(unsigned int)sub_4034F5(1, (__int64)v1) && v2 )
    return v2;
  v4 = getenv("COLUMNS");
  if ( !v4 || (unsigned int)sub_406D17(v4, 0LL, 0LL, &v3, locale) || v3 <= 0 || v3 > 0x7FFFFFFF )
    v3 = 80LL;
  return v3;
}
