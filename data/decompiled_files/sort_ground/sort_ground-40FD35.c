#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40FD35(__int64 a1, __int64 a2, char a3)
{
  __int64 *i; // [rsp+20h] [rbp-30h]
  __int64 *j; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-20h]
  _QWORD *v9; // [rsp+38h] [rbp-18h]
  _QWORD *v10; // [rsp+38h] [rbp-18h]
  __int64 *v11; // [rsp+40h] [rbp-10h]
  _QWORD *v12; // [rsp+48h] [rbp-8h]

  for ( i = *(__int64 **)a2; *(_QWORD *)(a2 + 8) > (unsigned __int64)i; i += 2 )
  {
    if ( *i )
    {
      for ( j = (__int64 *)i[1]; j; j = v11 )
      {
        v7 = *j;
        v9 = (_QWORD *)sub_40F0FB(a1, *j);
        v11 = (__int64 *)j[1];
        if ( *v9 )
        {
          j[1] = v9[1];
          v9[1] = j;
        }
        else
        {
          *v9 = v7;
          ++*(_QWORD *)(a1 + 24);
          sub_40FB6B(a1, j);
        }
      }
      v8 = *i;
      i[1] = 0LL;
      if ( !a3 )
      {
        v10 = (_QWORD *)sub_40F0FB(a1, v8);
        if ( *v10 )
        {
          v12 = sub_40FB20(a1);
          if ( !v12 )
            return 0LL;
          *v12 = v8;
          v12[1] = v10[1];
          v10[1] = v12;
        }
        else
        {
          *v10 = v8;
          ++*(_QWORD *)(a1 + 24);
        }
        *i = 0LL;
        --*(_QWORD *)(a2 + 24);
      }
    }
  }
  return 1LL;
}
