#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_405484(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // [rsp+18h] [rbp-8h]

  v3 = sub_405A57(a1, a2);
  if ( v3 )
    result = sub_40543D(v3, a2);
  else
    result = 0LL;
  return result;
}
