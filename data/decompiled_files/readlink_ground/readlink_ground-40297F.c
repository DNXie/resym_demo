#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40297F(__int64 a1)
{
  _QWORD *i; // [rsp+8h] [rbp-20h]
  unsigned __int64 v3; // [rsp+10h] [rbp-18h]
  _QWORD *v4; // [rsp+18h] [rbp-10h]
  unsigned __int64 j; // [rsp+20h] [rbp-8h]

  v3 = 0LL;
  for ( i = *(_QWORD **)a1; *(_QWORD *)(a1 + 8) > (unsigned __int64)i; i += 2 )
  {
    if ( *i )
    {
      v4 = i;
      for ( j = 1LL; ; ++j )
      {
        v4 = (_QWORD *)v4[1];
        if ( !v4 )
          break;
      }
      if ( j > v3 )
        v3 = j;
    }
  }
  return v3;
}
