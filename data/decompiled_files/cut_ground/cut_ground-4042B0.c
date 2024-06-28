#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4042B0(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD *i; // [rsp+20h] [rbp-30h]
  _QWORD *v9; // [rsp+28h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-20h]
  _QWORD *v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]
  _QWORD *v13; // [rsp+48h] [rbp-8h]

  v9 = (_QWORD *)sub_40380B(a1, a2);
  *a3 = v9;
  if ( !*v9 )
    return 0LL;
  if ( *v9 == a2 || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(a1 + 56))(a2, *v9) )
  {
    v12 = *v9;
    if ( a4 )
    {
      if ( v9[1] )
      {
        v13 = (_QWORD *)v9[1];
        v5 = v13[1];
        *v9 = *v13;
        v9[1] = v5;
        sub_40427B(a1, v13);
      }
      else
      {
        *v9 = 0LL;
      }
    }
    result = v12;
  }
  else
  {
    for ( i = v9; ; i = (_QWORD *)i[1] )
    {
      if ( !i[1] )
        return 0LL;
      if ( *(_QWORD *)i[1] == a2 || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(a1 + 56))(a2, *(_QWORD *)i[1]) )
        break;
    }
    v10 = *(_QWORD *)i[1];
    if ( a4 )
    {
      v11 = (_QWORD *)i[1];
      i[1] = v11[1];
      sub_40427B(a1, v11);
    }
    result = v10;
  }
  return result;
}
