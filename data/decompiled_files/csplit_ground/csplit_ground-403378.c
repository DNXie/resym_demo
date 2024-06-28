#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_403378()
{
  __int64 v0; // rdx
  __int64 v2; // [rsp+8h] [rbp-8h]

  if ( qword_60B3A0 == qword_60B448 )
    qword_60B398 = sub_40697D(qword_60B398, &qword_60B448, 96LL);
  v0 = qword_60B3A0++;
  v2 = qword_60B398 + 96 * v0;
  *(_BYTE *)(v2 + 30) = 0;
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_BYTE *)(v2 + 28) = 0;
  *(_QWORD *)(v2 + 8) = 0LL;
  *(_QWORD *)v2 = 0LL;
  return v2;
}
