#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403AF8(__int64 a1, unsigned __int64 a2, char *a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // er8
  int v6; // er9
  const char *v7; // rbx
  int *v8; // rax
  int v9; // er8
  int v10; // er9
  char *v11; // rbx
  int *v12; // rax
  char *v13; // rbx
  int *v14; // rax
  __int64 v15; // rax
  int *v16; // rax
  int *v17; // rax
  const char *v18; // rbx
  int *v19; // rax
  int *v20; // rax
  const char *v21; // rbx
  int *v22; // rax
  int v23; // eax
  char v26; // [rsp+28h] [rbp-58h]
  unsigned __int8 v27; // [rsp+29h] [rbp-57h]
  bool v28; // [rsp+2Ah] [rbp-56h]
  char v29; // [rsp+2Bh] [rbp-55h]
  int v30; // [rsp+2Ch] [rbp-54h]
  __int64 v31; // [rsp+30h] [rbp-50h]
  unsigned __int64 i; // [rsp+30h] [rbp-50h]
  unsigned __int64 j; // [rsp+30h] [rbp-50h]
  __int64 v34; // [rsp+38h] [rbp-48h]
  __int64 v35; // [rsp+40h] [rbp-40h]
  char *s; // [rsp+48h] [rbp-38h]
  char *v37; // [rsp+50h] [rbp-30h]
  char *v38; // [rsp+50h] [rbp-30h]
  __int64 v39; // [rsp+58h] [rbp-28h]
  char *v40; // [rsp+60h] [rbp-20h]
  size_t size; // [rsp+68h] [rbp-18h]

  v26 = 0;
  v27 = 0;
  if ( a1 )
  {
    v35 = 1LL;
  }
  else
  {
    v34 = sub_40877F(a2, 32LL);
    for ( i = 0LL; i < a2; ++i )
    {
      sub_4023C6();
      *(_QWORD *)(32 * i + v34) = sub_408A1D(dest);
      *(_DWORD *)(32 * i + v34 + 8) = -1;
      *(_QWORD *)(32 * i + v34 + 16) = 0LL;
      *(_DWORD *)(32 * i + v34 + 24) = 0;
    }
    v31 = 0LL;
    v28 = 0;
  }
LABEL_7:
  s = a3;
  result = sub_40783E(0LL, a3, a4);
  v39 = result;
  if ( result == -1 )
  {
    v7 = s1;
    v8 = __errno_location();
    error(1, *v8, "%s", v7);
LABEL_10:
    v40 = &a3[v39];
    while ( 1 )
    {
      if ( s == v40 )
        goto LABEL_7;
      v29 = 0;
      v37 = (char *)memchr(s, 10, v40 - s);
      if ( v37 )
      {
        v38 = v37 + 1;
        v29 = 1;
      }
      else
      {
        v38 = &a3[v39];
      }
      size = v38 - s;
      if ( a1 )
      {
        if ( v35 == a1 && byte_6106AA )
        {
          if ( sub_405445(1LL, s, size) != size )
          {
            v11 = gettext("write error");
            v12 = __errno_location();
            error(1, *v12, "%s", v11);
          }
        }
        else if ( v35 == a1 && fwrite_unlocked(s, size, 1uLL, stdout) != 1 )
        {
          clearerr_unlocked(stdout);
          v13 = gettext("write error");
          v14 = __errno_location();
          error(1, *v14, "%s", v13);
        }
        if ( v29 )
        {
          if ( v35 == a2 )
            v15 = 1LL;
          else
            v15 = v35 + 1;
          v35 = v15;
        }
        goto LABEL_45;
      }
      v28 = (v28 | (unsigned __int8)sub_40382C(v34, v31, a2, v31, v9, v10)) != 0;
      if ( byte_6106AA )
      {
        if ( sub_405445(*(unsigned int *)(32 * v31 + v34 + 8), s, size) != size )
        {
          v16 = __errno_location();
          if ( !sub_402178(*v16) )
            goto LABEL_34;
        }
      }
      else if ( fwrite_unlocked(s, size, 1uLL, *(FILE **)(32 * v31 + v34 + 16)) != 1 )
      {
        v17 = __errno_location();
        if ( !sub_402178(*v17) )
        {
LABEL_34:
          v18 = *(const char **)(32 * v31 + v34);
          v19 = __errno_location();
          error(1, *v19, "%s", v18);
          goto LABEL_35;
        }
      }
LABEL_35:
      v20 = __errno_location();
      if ( !sub_402178(*v20) )
        v27 = 1;
      if ( v28 )
      {
        if ( (unsigned int)sub_409583(*(_QWORD *)(32 * v31 + v34 + 16)) )
        {
          v21 = *(const char **)(32 * v31 + v34);
          v22 = __errno_location();
          error(1, *v22, "%s", v21);
        }
        *(_QWORD *)(32 * v31 + v34 + 16) = 0LL;
        *(_DWORD *)(32 * v31 + v34 + 8) = -2;
      }
      if ( v29 )
      {
        if ( ++v31 == a2 )
        {
          v26 = 1;
          result = v27 ^ 1u;
          if ( v27 != 1 )
            goto LABEL_48;
          v27 = 0;
          v31 = 0LL;
        }
      }
LABEL_45:
      s = v38;
    }
  }
  if ( result )
    goto LABEL_10;
LABEL_48:
  if ( !a1 )
  {
    if ( v26 )
      v23 = a2;
    else
      v23 = v31;
    v30 = v23;
    for ( j = 0LL; ; ++j )
    {
      result = j;
      if ( j >= a2 )
        break;
      if ( v30 <= j && byte_6106A9 != 1 )
        v28 = (v28 | (unsigned __int8)sub_40382C(v34, j, a2, j, v5, v6)) != 0;
      if ( *(int *)(32 * j + v34 + 8) >= 0 )
        sub_402980(
          *(_QWORD *)(32 * j + v34 + 16),
          *(_DWORD *)(32 * j + v34 + 8),
          *(_DWORD *)(32 * j + v34 + 24),
          *(const char **)(32 * j + v34));
      *(_DWORD *)(32 * j + v34 + 8) = -2;
    }
  }
  return result;
}
