#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_41449D(const char **a1, int a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // [rsp+28h] [rbp-8h]

  v3 = a2;
  BYTE1(v3) = BYTE1(a2) | 2;
  v5 = fts_open(a1, v3, a3);
  if ( !v5 )
  {
    if ( *__errno_location() == 22 )
      __assert_fail("(*__errno_location ()) != 22", "../../src/lib/xfts.c", 0x29u, "xfts_open");
    sub_41106D();
  }
  return v5;
}
