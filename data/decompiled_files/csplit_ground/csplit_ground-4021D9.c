#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_4021D9(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 i; // [rsp+10h] [rbp-8h]

  a1[8] = 0LL;
  a1[7] = a1[6];
  if ( qword_60B320 )
  {
    for ( i = qword_60B320; *(_QWORD *)(i + 64); i = *(_QWORD *)(i + 64) )
      ;
    result = (_QWORD *)i;
    *(_QWORD *)(i + 64) = a1;
  }
  else
  {
    result = a1;
    qword_60B320 = (__int64)a1;
  }
  return result;
}
