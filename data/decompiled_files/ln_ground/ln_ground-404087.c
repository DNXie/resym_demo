#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404087(__int64 a1, unsigned __int8 (__fastcall *a2)(_QWORD, __int64), __int64 a3)
{
  __int64 v5; // [rsp+28h] [rbp-18h]
  _QWORD *i; // [rsp+30h] [rbp-10h]
  _QWORD *j; // [rsp+38h] [rbp-8h]

  v5 = 0LL;
  for ( i = *(_QWORD **)a1; *(_QWORD *)(a1 + 8) > (unsigned __int64)i; i += 2 )
  {
    if ( *i )
    {
      for ( j = i; j; j = (_QWORD *)j[1] )
      {
        if ( a2(*j, a3) != 1 )
          return v5;
        ++v5;
      }
    }
  }
  return v5;
}
