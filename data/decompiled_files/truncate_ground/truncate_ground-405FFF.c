#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405FFF(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+18h] [rbp-8h]

  v3 = sub_40844C(a1, a2);
  if ( !v3 && *__errno_location() == 12 )
    sub_405F70();
  return v3;
}
