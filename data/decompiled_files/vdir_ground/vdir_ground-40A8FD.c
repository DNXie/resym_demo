#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 sub_40A8FD()
{
  unsigned __int64 v0; // rax
  unsigned __int64 result; // rax
  unsigned __int64 i; // [rsp+0h] [rbp-40h]
  unsigned __int64 j; // [rsp+0h] [rbp-40h]
  unsigned __int64 v4; // [rsp+8h] [rbp-38h]
  __int64 v5; // [rsp+10h] [rbp-30h]
  unsigned __int64 k; // [rsp+18h] [rbp-28h]
  unsigned __int64 v7; // [rsp+20h] [rbp-20h]
  unsigned __int64 v8; // [rsp+38h] [rbp-8h]

  v0 = qword_61D7D8;
  if ( qword_61D638 <= (unsigned __int64)qword_61D7D8 )
    v0 = qword_61D638;
  v7 = v0;
  if ( qword_61E188 < v0 )
  {
    if ( (unsigned __int64)qword_61D7D8 >> 1 <= v0 )
    {
      qword_61D7D0 = sub_41487E(qword_61D7D0, qword_61D7D8, 24LL);
      v4 = qword_61D7D8;
    }
    else
    {
      qword_61D7D0 = sub_41487E(qword_61D7D0, v0, 48LL);
      v4 = 2 * v7;
    }
    v8 = (v4 - qword_61E188) * (qword_61E188 + v4 + 1);
    if ( qword_61E188 + v4 + 1 < v4 || v8 / (v4 - qword_61E188) != qword_61E188 + v4 + 1 )
      sub_414B0B();
    v5 = sub_414840(v8 >> 1, 8LL);
    for ( i = qword_61E188; i < v4; ++i )
    {
      *(_QWORD *)(qword_61D7D0 + 24 * i + 16) = v5;
      v5 += 8 * (i + 1);
    }
    qword_61E188 = v4;
  }
  for ( j = 0LL; ; ++j )
  {
    result = j;
    if ( j >= v7 )
      break;
    *(_BYTE *)(qword_61D7D0 + 24 * j) = 1;
    *(_QWORD *)(24 * j + qword_61D7D0 + 8) = 3 * (j + 1);
    for ( k = 0LL; k <= j; ++k )
      *(_QWORD *)(8 * k + *(_QWORD *)(qword_61D7D0 + 24 * j + 16)) = 3LL;
  }
  return result;
}
