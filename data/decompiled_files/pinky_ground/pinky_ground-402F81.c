#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402F81(int a1)
{
  unsigned __int8 v2; // [rsp+17h] [rbp-9h]
  const char *s1; // [rsp+18h] [rbp-8h]

  v2 = 1;
  s1 = setlocale(a1, 0LL);
  if ( s1 && (!strcmp(s1, "C") || !strcmp(s1, "POSIX")) )
    v2 = 0;
  return v2;
}
