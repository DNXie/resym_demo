#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 *__fastcall sub_409924(__int64 *a1, unsigned __int64 a2, FILE *a3, char *a4)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v7; // rdx
  _QWORD *v9; // rdx
  __int64 *result; // rax
  __int64 v17; // [rsp+20h] [rbp-30h]
  _QWORD *v18; // [rsp+28h] [rbp-28h]
  __int64 v19; // [rsp+30h] [rbp-20h]
  _QWORD *v20; // [rsp+38h] [rbp-18h]
  __int64 v21; // [rsp+48h] [rbp-8h]

  v19 = *a1;
  v20 = (_QWORD *)a1[1];
  v17 = (a2 >> (2 * (*((_BYTE *)a1 + 80) + 1))) + 1;
  if ( *((_DWORD *)a1 + 20) <= 1u )
  {
    while ( *a1 != a1[2] )
    {
      if ( a1[1] == a1[3] )
        break;
      if ( !v17-- )
        break;
      if ( (int)sub_407AC9((unsigned __int8 **)(*a1 - 32), (unsigned __int8 **)(a1[1] - 32)) > 0 )
      {
        a1[1] -= 32LL;
        sub_40989A(a1[1], a3, a4);
      }
      else
      {
        *a1 -= 32LL;
        sub_40989A(*a1, a3, a4);
      }
    }
    if ( a1[6] == ((__int64)v20 - a1[1]) >> 5 )
    {
      while ( *a1 != a1[2] )
      {
        if ( !v17-- )
          break;
        *a1 -= 32LL;
        sub_40989A(*a1, a3, a4);
      }
    }
    else if ( a1[5] == (v19 - *a1) >> 5 )
    {
      while ( a1[1] != a1[3] )
      {
        if ( !v17-- )
          break;
        a1[1] -= 32LL;
        sub_40989A(a1[1], a3, a4);
      }
    }
  }
  else
  {
    v18 = *(_QWORD **)a1[4];
    while ( *a1 != a1[2] )
    {
      if ( a1[1] == a1[3] )
        break;
      if ( !v17-- )
        break;
      v18 -= 4;
      if ( (int)sub_407AC9((unsigned __int8 **)(*a1 - 32), (unsigned __int8 **)(a1[1] - 32)) > 0 )
      {
        a1[1] -= 32LL;
        v4 = (_QWORD *)a1[1];
        v5 = v18;
        *v18 = *v4;
      }
      else
      {
        *a1 -= 32LL;
        v4 = (_QWORD *)*a1;
        v5 = v18;
        *v18 = *(_QWORD *)*a1;
      }
      v5[1] = v4[1];
      v5[2] = v4[2];
      v5[3] = v4[3];
    }
    if ( a1[6] == ((__int64)v20 - a1[1]) >> 5 )
    {
      while ( *a1 != a1[2] )
      {
        if ( !v17-- )
          break;
        v18 -= 4;
        *a1 -= 32LL;
        v7 = (_QWORD *)*a1;
        *v18 = *(_QWORD *)*a1;
        v18[1] = v7[1];
        v18[2] = v7[2];
        v18[3] = v7[3];
      }
    }
    else if ( a1[5] == (v19 - *a1) >> 5 )
    {
      while ( a1[1] != a1[3] )
      {
        if ( !v17-- )
          break;
        v18 -= 4;
        a1[1] -= 32LL;
        v9 = (_QWORD *)a1[1];
        *v18 = *v9;
        v18[1] = v9[1];
        v18[2] = v9[2];
        v18[3] = v9[3];
      }
    }
    *(_QWORD *)a1[4] = v18;
  }
  v21 = ((__int64)v20 - a1[1]) >> 5;
  a1[5] -= (v19 - *a1) >> 5;
  result = a1;
  a1[6] -= v21;
  return result;
}
