#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40AB25(char a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  unsigned __int64 i; // [rsp+10h] [rbp-50h]
  unsigned __int64 k; // [rsp+18h] [rbp-48h]
  unsigned __int64 j; // [rsp+20h] [rbp-40h]
  unsigned __int64 v8; // [rsp+28h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-28h]
  unsigned __int64 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+48h] [rbp-18h]

  v1 = qword_61D7D8;
  if ( qword_61D638 <= (unsigned __int64)qword_61D7D8 )
    v1 = qword_61D638;
  v8 = v1;
  sub_40A8FD();
  for ( i = 0LL; i < qword_61D638; ++i )
  {
    v9 = sub_40A223(*((_QWORD *)qword_61D640 + i));
    for ( j = 0LL; j < v8; ++j )
    {
      if ( *(_BYTE *)(qword_61D7D0 + 24 * j) )
      {
        v2 = a1 ? i / ((qword_61D638 + j) / (j + 1)) : i % (j + 1);
        v10 = v2;
        v3 = v2 == j ? 0LL : 2LL;
        v11 = v9 + v3;
        if ( *(_QWORD *)(8 * v10 + *(_QWORD *)(qword_61D7D0 + 24 * j + 16)) < (unsigned __int64)(v9 + v3) )
        {
          *(_QWORD *)(24 * j + qword_61D7D0 + 8) = *(_QWORD *)(qword_61D7D0 + 24 * j + 8)
                                                 + v11
                                                 - *(_QWORD *)(8 * v10 + *(_QWORD *)(qword_61D7D0 + 24 * j + 16));
          *(_QWORD *)(*(_QWORD *)(qword_61D7D0 + 24 * j + 16) + 8 * v10) = v11;
          *(_BYTE *)(24 * j + qword_61D7D0) = *(_QWORD *)(qword_61D7D0 + 24 * j + 8) < (unsigned __int64)qword_61D720;
        }
      }
    }
  }
  for ( k = v8; k > 1 && !*(_BYTE *)(qword_61D7D0 + 24 * k - 24); --k )
    ;
  return k;
}
