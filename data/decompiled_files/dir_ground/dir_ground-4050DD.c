#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4050DD(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+28h] [rbp-8h]

  v7 = sub_414989(32LL);
  if ( a2 )
    v3 = sub_414ADE(a2);
  else
    v3 = 0LL;
  *(_QWORD *)(v7 + 8) = v3;
  if ( a1 )
    v4 = sub_414ADE(a1);
  else
    v4 = 0LL;
  *(_QWORD *)v7 = v4;
  *(_BYTE *)(v7 + 16) = a3;
  *(_QWORD *)(v7 + 24) = qword_61D658;
  result = v7;
  qword_61D658 = v7;
  return result;
}
