#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40C570(__int64 a1, __int64 a2)
{
  _QWORD *i; // [rsp+10h] [rbp-10h]
  _QWORD *v4; // [rsp+18h] [rbp-8h]

  v4 = (_QWORD *)sub_40C519(a1, a2);
  if ( !*v4 )
    return 0LL;
  for ( i = v4; i; i = (_QWORD *)i[1] )
  {
    if ( *i == a2 || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(a1 + 56))(a2, *i) )
      return *i;
  }
  return 0LL;
}
