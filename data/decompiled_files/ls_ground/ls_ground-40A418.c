#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 sub_40A418()
{
  __int64 v0; // rax
  unsigned __int64 result; // rax
  unsigned __int64 i; // [rsp+0h] [rbp-50h]
  __int64 v3; // [rsp+8h] [rbp-48h]
  unsigned __int64 v4; // [rsp+10h] [rbp-40h]
  unsigned __int64 j; // [rsp+18h] [rbp-38h]
  unsigned __int64 v6; // [rsp+20h] [rbp-30h]
  __int64 v7; // [rsp+28h] [rbp-28h]
  unsigned __int64 v8; // [rsp+30h] [rbp-20h]
  __int64 v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+48h] [rbp-8h]

  v6 = sub_40AB25(1LL);
  v7 = qword_61D7D0 + 24 * v6 - 24;
  v8 = qword_61D638 / v6 + (qword_61D638 % v6 != 0);
  for ( i = 0LL; ; ++i )
  {
    result = i;
    if ( i >= v8 )
      break;
    v3 = 0LL;
    v4 = i;
    for ( j = 0LL; ; j += v11 )
    {
      v9 = *((_QWORD *)qword_61D640 + v4);
      v10 = sub_40A223(v9);
      v0 = v3++;
      v11 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 8 * v0);
      sub_409A65(v9, j);
      v4 += v8;
      if ( v4 >= qword_61D638 )
        break;
      sub_40A799(j + v10, v11 + j);
    }
    putchar_unlocked(10);
  }
  return result;
}
