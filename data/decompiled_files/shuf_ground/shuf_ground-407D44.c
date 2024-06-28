#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_407D44(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // [rsp+20h] [rbp-18h]
  _QWORD *i; // [rsp+28h] [rbp-10h]
  _QWORD *j; // [rsp+30h] [rbp-8h]

  v5 = 0LL;
  for ( i = *(_QWORD **)a1; *(_QWORD *)(a1 + 8) > (unsigned __int64)i; i += 2 )
  {
    if ( *i )
    {
      for ( j = i; j; j = (_QWORD *)j[1] )
      {
        if ( v5 >= a3 )
          return v5;
        v4 = v5++;
        *(_QWORD *)(a2 + 8 * v4) = *j;
      }
    }
  }
  return v5;
}
