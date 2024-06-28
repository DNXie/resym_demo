#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_40FA09(__int64 *a1, unsigned __int64 a2, __int64 *a3, __int64 (__fastcall *a4)(__int64, __int64))
{
  int i; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v9; // [rsp+28h] [rbp-58h]
  __int64 v10; // [rsp+30h] [rbp-50h]
  unsigned __int64 v11; // [rsp+38h] [rbp-48h]
  __int64 v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-28h]
  unsigned __int64 v16; // [rsp+70h] [rbp-10h]

  if ( a2 > 2 )
  {
    v10 = 0LL;
    v16 = a2 >> 1;
    v11 = a2 >> 1;
    sub_40FA09(&a1[a2 >> 1], a2 - (a2 >> 1), a3, a4);
    if ( a2 >> 1 > 1 )
      sub_40F85B(a1, a2 >> 1, a3, a4);
    else
      *a3 = *a1;
    v13 = *a3;
    v12 = a1[v11];
    v9 = 0LL;
    for ( i = a4(*a3, v12); ; i = a4(v13, v12) )
    {
      while ( i <= 0 )
      {
        v5 = v9++;
        a1[v5] = v13;
        if ( ++v10 == v16 )
          return;
        v13 = a3[v10];
        i = a4(v13, v12);
      }
      v6 = v9++;
      a1[v6] = v12;
      if ( ++v11 == a2 )
        break;
      v12 = a1[v11];
    }
    memcpy(&a1[v9], &a3[v10], 8 * (v16 - v10));
  }
  else if ( a2 == 2 )
  {
    v14 = *a1;
    v15 = a1[1];
    if ( (int)a4(*a1, v15) > 0 )
    {
      *a1 = v15;
      a1[1] = v14;
    }
  }
}
