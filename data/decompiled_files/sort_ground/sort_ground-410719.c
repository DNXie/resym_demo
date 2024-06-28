#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_410719(__int64 (__fastcall *a1)(), __int64 a2)
{
  __int64 (__fastcall *v2)(); // rax
  __int64 v4; // [rsp+0h] [rbp-20h]
  _QWORD *v5; // [rsp+18h] [rbp-8h]

  v4 = a2;
  v5 = (_QWORD *)sub_414F92(32LL);
  if ( !a2 )
    v4 = 1LL;
  *v5 = sub_414E49(v4, 8LL);
  *(_QWORD *)*v5 = 0LL;
  v5[1] = v4;
  v5[2] = 0LL;
  if ( a1 )
    v2 = a1;
  else
    v2 = sub_4107A7;
  v5[3] = v2;
  return v5;
}
