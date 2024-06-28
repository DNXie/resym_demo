#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401C70(unsigned __int64 a1)
{
  char *dest; // [rsp+18h] [rbp-18h]
  unsigned __int64 i; // [rsp+20h] [rbp-10h]
  __int64 v4; // [rsp+28h] [rbp-8h]

  v4 = sub_4047F5(3LL, a1);
  dest = (char *)v4;
  for ( i = 0LL; i < a1; ++i )
  {
    memcpy(dest, "../", 3uLL);
    dest += 3;
  }
  *(dest - 1) = 0;
  return v4;
}
