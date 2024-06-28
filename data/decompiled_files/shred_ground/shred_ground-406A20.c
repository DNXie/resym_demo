#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_406A20(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // [rsp+18h] [rbp-8h]

  v3 = sub_406FF3(a1, a2);
  if ( v3 )
    result = sub_4069D9(v3);
  else
    result = 0LL;
  return result;
}
