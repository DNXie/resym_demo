#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_408239(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, FILE *a4, char *a5, FILE **a6)
{
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  unsigned __int64 v18; // [rsp+18h] [rbp-D8h]
  int v20; // [rsp+3Ch] [rbp-B4h]
  void **v21; // [rsp+40h] [rbp-B0h]
  unsigned __int64 v22; // [rsp+48h] [rbp-A8h]
  unsigned __int64 v23; // [rsp+50h] [rbp-A0h]
  unsigned __int64 j; // [rsp+50h] [rbp-A0h]
  unsigned __int64 k; // [rsp+50h] [rbp-A0h]
  unsigned __int64 l; // [rsp+50h] [rbp-A0h]
  unsigned __int64 m; // [rsp+50h] [rbp-A0h]
  unsigned __int64 ii; // [rsp+50h] [rbp-A0h]
  unsigned __int64 i; // [rsp+58h] [rbp-98h]
  unsigned __int64 jj; // [rsp+58h] [rbp-98h]
  unsigned __int64 v31; // [rsp+60h] [rbp-90h]
  unsigned __int64 v32; // [rsp+68h] [rbp-88h]
  __int64 v33; // [rsp+70h] [rbp-80h]
  _QWORD *v34; // [rsp+78h] [rbp-78h]
  _QWORD *v35; // [rsp+80h] [rbp-70h]
  _QWORD *v36; // [rsp+88h] [rbp-68h]
  unsigned __int64 *v37; // [rsp+90h] [rbp-60h]
  __int64 v38; // [rsp+98h] [rbp-58h]
  __int64 v39; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v40; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v41; // [rsp+B0h] [rbp-40h]
  __int64 v42; // [rsp+B8h] [rbp-38h]
  unsigned __int64 v43; // [rsp+C0h] [rbp-30h]
  unsigned __int64 v44; // [rsp+C8h] [rbp-28h]
  void *ptr; // [rsp+D0h] [rbp-20h] BYREF
  size_t n; // [rsp+D8h] [rbp-18h]
  __int64 v47; // [rsp+E0h] [rbp-10h]
  __int64 v48; // [rsp+E8h] [rbp-8h]

  v18 = a3;
  v34 = (_QWORD *)sub_414E49(a3, 56LL);
  v21 = 0LL;
  v22 = 0LL;
  v35 = (_QWORD *)sub_414E49(v18, 8LL);
  v36 = (_QWORD *)sub_414E49(v18, 8LL);
  v37 = (unsigned __int64 *)sub_414E49(v18, 8LL);
  v38 = qword_61DA08;
  ptr = 0LL;
  v23 = 0LL;
  while ( v23 < v18 )
  {
    v6 = qword_61D9E0 / v18;
    if ( qword_61D9E0 / v18 < qword_61D4E0 )
      v6 = qword_61D4E0;
    sub_404989((__int64)&v34[7 * v23], 32LL, v6);
    if ( (unsigned __int8)sub_404DA9(&v34[7 * v23], a6[v23], *(char **)(16 * v23 + a1)) )
    {
      v39 = sub_404A3F(&v34[7 * v23]);
      v35[v23] = v39 - 32;
      v36[v23] = -32LL * v34[7 * v23 + 2] + v39;
      ++v23;
    }
    else
    {
      sub_403612(a6[v23], *(char **)(16 * v23 + a1));
      if ( v23 < a2 )
      {
        --a2;
        sub_403CC7(*(char **)(16 * v23 + a1));
      }
      free((void *)v34[7 * v23]);
      --v18;
      for ( i = v23; i < v18; ++i )
      {
        v7 = (_QWORD *)(16 * i + a1);
        v8 = (_QWORD *)(16 * (i + 1) + a1);
        v9 = v8[1];
        *v7 = *v8;
        v7[1] = v9;
        a6[i] = a6[i + 1];
      }
    }
  }
  for ( j = 0LL; j < v18; ++j )
    v37[j] = j;
  for ( k = 1LL; k < v18; ++k )
  {
    if ( (int)sub_407AC9((unsigned __int8 **)v35[v37[k - 1]], (unsigned __int8 **)v35[v37[k]]) > 0 )
    {
      v40 = v37[k - 1];
      v37[k - 1] = v37[k];
      v37[k] = v40;
      k = 0LL;
    }
  }
  while ( v18 )
  {
    v41 = v35[*v37];
    if ( byte_61DA02 )
    {
      if ( v21 && (unsigned int)sub_407AC9((unsigned __int8 **)v21, (unsigned __int8 **)v41) )
      {
        v21 = 0LL;
        sub_407C0F(&ptr, a4, a5);
      }
      if ( !v21 )
      {
        v21 = &ptr;
        if ( *(_QWORD *)(v41 + 8) > v22 )
        {
          while ( v22 )
          {
            v22 *= 2LL;
            if ( v22 >= *(_QWORD *)(v41 + 8) )
              goto LABEL_30;
          }
          v22 = *(_QWORD *)(v41 + 8);
LABEL_30:
          free(ptr);
          ptr = (void *)sub_414F92(v22);
        }
        n = *(_QWORD *)(v41 + 8);
        memcpy(ptr, *(const void **)v41, n);
        if ( v38 )
        {
          v47 = (__int64)ptr + *(_QWORD *)(v41 + 16) - *(_QWORD *)v41;
          v48 = (__int64)ptr + *(_QWORD *)(v41 + 24) - *(_QWORD *)v41;
        }
      }
    }
    else
    {
      sub_407C0F((void **)v41, a4, a5);
    }
    if ( v36[*v37] >= v41 )
    {
      if ( (unsigned __int8)sub_404DA9(&v34[7 * *v37], a6[*v37], *(char **)(16 * *v37 + a1)) )
      {
        v42 = sub_404A3F(&v34[7 * *v37]);
        v35[*v37] = v42 - 32;
        v36[*v37] = -32LL * v34[7 * *v37 + 2] + v42;
        goto LABEL_52;
      }
      for ( l = 1LL; l < v18; ++l )
      {
        if ( v37[l] > *v37 )
          --v37[l];
      }
      --v18;
      sub_403612(a6[*v37], *(char **)(16 * *v37 + a1));
      if ( *v37 < a2 )
      {
        --a2;
        sub_403CC7(*(char **)(16 * *v37 + a1));
      }
      free((void *)v34[7 * *v37]);
      for ( m = *v37; m < v18; ++m )
      {
        a6[m] = a6[m + 1];
        v10 = (_QWORD *)(16 * m + a1);
        v11 = (_QWORD *)(16 * (m + 1) + a1);
        v12 = v11[1];
        *v10 = *v11;
        v10[1] = v12;
        v13 = &v34[7 * m];
        v14 = &v34[7 * m + 7];
        *v13 = *v14;
        v13[1] = v14[1];
        v13[2] = v14[2];
        v13[3] = v14[3];
        v13[4] = v14[4];
        v13[5] = v14[5];
        v13[6] = v14[6];
        v35[m] = v35[m + 1];
        v36[m] = v36[m + 1];
      }
      for ( ii = 0LL; ii < v18; ++ii )
        v37[ii] = v37[ii + 1];
    }
    else
    {
      v35[*v37] = v41 - 32;
LABEL_52:
      v31 = 1LL;
      v32 = v18;
      v33 = 1LL;
      v43 = *v37;
      while ( v31 < v32 )
      {
        v20 = sub_407AC9((unsigned __int8 **)v35[v43], (unsigned __int8 **)v35[v37[v33]]);
        if ( v20 >= 0 && (v20 || v37[v33] <= v43) )
          v31 = v33 + 1;
        else
          v32 = v33;
        v33 = (v31 + v32) >> 1;
      }
      v44 = v31 - 1;
      for ( jj = 0LL; jj < v44; ++jj )
        v37[jj] = v37[jj + 1];
      v37[v44] = v43;
    }
  }
  if ( byte_61DA02 && v21 )
  {
    sub_407C0F(&ptr, a4, a5);
    free(ptr);
  }
  sub_403612(a4, a5);
  free(a6);
  free(v34);
  free(v37);
  free(v36);
  free(v35);
}
