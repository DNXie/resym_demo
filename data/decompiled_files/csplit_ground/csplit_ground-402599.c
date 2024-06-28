#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402599(unsigned __int64 a1)
{
  _QWORD *i; // [rsp+18h] [rbp-18h]
  __int64 v3; // [rsp+20h] [rbp-10h]
  unsigned __int64 j; // [rsp+28h] [rbp-8h]

  if ( !qword_60B320 && !sub_40224A() )
    return 0LL;
  if ( *(_QWORD *)(qword_60B320 + 16) > a1 )
    return 0LL;
  for ( i = (_QWORD *)qword_60B320; i[2] + i[4] <= a1; i = (_QWORD *)i[8] )
  {
    if ( !i[8] && !sub_40224A() )
      return 0LL;
  }
  v3 = i[6];
  for ( j = a1 - i[2]; j > 0x4F; j -= 80LL )
    v3 = *(_QWORD *)(v3 + 1304);
  return 16 * (j + 1) + v3 + 8;
}
