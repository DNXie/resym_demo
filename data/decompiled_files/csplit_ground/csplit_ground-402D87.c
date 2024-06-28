#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_402D87()
{
  unsigned __int64 i; // [rsp+0h] [rbp-10h]
  unsigned __int64 j; // [rsp+8h] [rbp-8h]
  unsigned __int64 k; // [rsp+8h] [rbp-8h]

  for ( i = 0LL; i < qword_60B3A0; ++i )
  {
    if ( *(_BYTE *)(qword_60B398 + 96 * i + 30) )
    {
      for ( j = 0LL; *(_BYTE *)(qword_60B398 + 96 * i + 28) || *(_QWORD *)(qword_60B398 + 96 * i + 16) >= j; ++j )
        sub_402ABD(qword_60B398 + 96 * i, j);
    }
    else
    {
      for ( k = 0LL; *(_BYTE *)(qword_60B398 + 96 * i + 28) || *(_QWORD *)(qword_60B398 + 96 * i + 16) >= k; ++k )
        sub_402933(qword_60B398 + 96 * i, k);
    }
  }
  sub_402FA4();
  sub_40283A();
  return sub_403131();
}
