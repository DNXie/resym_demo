#include "/share/binary_recovery/clang-parser/defs.hh"
ssize_t __fastcall sub_40298D(int a1, char *a2, size_t a3)
{
  __int64 v6; // [rsp+20h] [rbp-10h]
  ssize_t v7; // [rsp+28h] [rbp-8h]

  v6 = 0LL;
  while ( a3 )
  {
    v7 = sub_4028BF(a1, a2, a3);
    if ( v7 < 0 )
      return v7;
    if ( !v7 )
      break;
    v6 += v7;
    a2 += v7;
    a3 -= v7;
  }
  return v6;
}
