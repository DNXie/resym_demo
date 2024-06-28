#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4062C3(__int64 a1)
{
  __int64 v2; // [rsp+18h] [rbp-8h]

  v2 = sub_406A23(a1);
  if ( !v2 && *__errno_location() == 12 )
    sub_40628E();
  return v2;
}
