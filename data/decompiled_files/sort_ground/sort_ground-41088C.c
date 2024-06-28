#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_41088C(_QWORD *a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v6; // [rsp+18h] [rbp-8h]

  if ( !a1[2] )
    return 0LL;
  v6 = *(_QWORD *)(*a1 + 8LL);
  v2 = (_QWORD *)(*a1 + 8LL);
  v3 = *a1;
  v4 = a1[2];
  a1[2] = v4 - 1;
  *v2 = *(_QWORD *)(v3 + 8 * v4);
  sub_41091B(*a1, a1[2], 1LL, a1[3]);
  return v6;
}
