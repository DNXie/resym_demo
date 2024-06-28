#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_40A56F()
{
  unsigned __int64 i; // [rsp+0h] [rbp-40h]
  unsigned __int64 v2; // [rsp+8h] [rbp-38h]
  __int64 v3; // [rsp+10h] [rbp-30h]
  __int64 v4; // [rsp+18h] [rbp-28h]
  unsigned __int64 v5; // [rsp+20h] [rbp-20h]
  __int64 v6; // [rsp+28h] [rbp-18h]
  __int64 v7; // [rsp+30h] [rbp-10h]
  __int64 v8; // [rsp+30h] [rbp-10h]

  v2 = 0LL;
  v5 = sub_40AB25(0LL);
  v6 = qword_61D7D0 + 24 * v5 - 24;
  v7 = *(_QWORD *)qword_61D640;
  v3 = sub_40A223(*(_QWORD *)qword_61D640);
  v4 = **(_QWORD **)(v6 + 16);
  sub_409A65(v7, 0LL);
  for ( i = 1LL; i < qword_61D638; ++i )
  {
    if ( i % v5 )
    {
      sub_40A799(v2 + v3, v4 + v2);
      v2 += v4;
    }
    else
    {
      putchar_unlocked(10);
      v2 = 0LL;
    }
    v8 = *((_QWORD *)qword_61D640 + i);
    sub_409A65(v8, v2);
    v3 = sub_40A223(v8);
    v4 = *(_QWORD *)(8 * (i % v5) + *(_QWORD *)(v6 + 16));
  }
  return putchar_unlocked(10);
}
