#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4080DD(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 result; // rax
  _QWORD *i; // [rsp+10h] [rbp-10h]
  __int64 v6; // [rsp+18h] [rbp-8h]

  v6 = *(_QWORD *)(a1 + 32);
  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)i[2] )
  {
    if ( (_QWORD *)i[6] != i + 33 )
      i[6] = v6 + i[6] - i[7];
    i[7] = v6;
  }
  while ( 1 )
  {
    result = a2[11];
    if ( result < 0 )
      break;
    if ( (_QWORD *)a2[6] != a2 + 33 )
      a2[6] = v6 + a2[6] - a2[7];
    a2[7] = v6;
    if ( a2[2] )
      v2 = (_QWORD *)a2[2];
    else
      v2 = (_QWORD *)a2[1];
    a2 = v2;
  }
  return result;
}
