#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4033A2(__int64 a1, __int64 a2)
{
  char *v5; // [rsp+18h] [rbp-8h]

  while ( a2-- )
  {
    v5 = strchr("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_.", *(char *)(a1 + a2));
    if ( !v5 )
      __assert_fail("p", "../../src/src/shred.c", 0x39Cu, "incname");
    if ( v5[1] )
    {
      *(_BYTE *)(a2 + a1) = v5[1];
      return 1LL;
    }
    *(_BYTE *)(a2 + a1) = 48;
  }
  return 0LL;
}
