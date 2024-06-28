#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405CF4(FILE *a1)
{
  bool v2; // [rsp+1Dh] [rbp-3h]
  bool v3; // [rsp+1Eh] [rbp-2h]
  bool v4; // [rsp+1Fh] [rbp-1h]

  v2 = __fpending(a1) != 0;
  v3 = ferror_unlocked(a1) != 0;
  v4 = (unsigned int)sub_405D7F(a1) != 0;
  if ( !v3 && (!v4 || !v2 && *__errno_location() == 9) )
    return 0LL;
  if ( !v4 )
    *__errno_location() = 0;
  return 0xFFFFFFFFLL;
}
