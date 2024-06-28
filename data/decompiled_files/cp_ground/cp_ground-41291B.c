#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_41291B(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+28h] [rbp-8h]

  v4 = sub_4157B0(a1, a2, a3);
  if ( !v4 && *__errno_location() == 12 )
    sub_412847();
  return v4;
}
