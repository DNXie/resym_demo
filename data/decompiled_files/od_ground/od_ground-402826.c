#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402826(__int64 a1, char *a2, char **a3, __int64 a4)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rbx
  char *v7; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rbx
  char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  void *v15; // rax
  void *v16; // rax
  int v17; // eax
  char v18; // al
  unsigned __int64 v19; // r12
  __int64 v20; // rbx
  char *v21; // rax
  size_t v22; // rax
  __int64 v23; // r12
  unsigned int v24; // ebx
  char *v25; // rax
  char *v28; // [rsp+10h] [rbp-60h]
  char v29; // [rsp+2Bh] [rbp-45h]
  unsigned int v30; // [rsp+2Ch] [rbp-44h]
  int v31; // [rsp+30h] [rbp-40h]
  unsigned int v32; // [rsp+34h] [rbp-3Ch]
  unsigned __int64 v33; // [rsp+38h] [rbp-38h] BYREF
  char *v34; // [rsp+40h] [rbp-30h] BYREF
  void *v35; // [rsp+48h] [rbp-28h]
  struct lconv *v36; // [rsp+50h] [rbp-20h]
  size_t v37; // [rsp+58h] [rbp-18h]

  if ( !a4 )
    __assert_fail("tspec != ((void *)0)", "../../src/src/od.c", 0x254u, "decode_one_format");
  v4 = *a2;
  if ( v4 == 102 )
  {
    v31 = 4;
    v28 = a2 + 1;
    v17 = a2[1];
    switch ( v17 )
    {
      case 'F':
        v28 = a2 + 2;
        v33 = 4LL;
        break;
      case 'L':
        v28 = a2 + 2;
        v33 = 16LL;
        break;
      case 'D':
        v28 = a2 + 2;
        v33 = 8LL;
        break;
      default:
        v18 = sub_40277C(v28, &v34, &v33);
        if ( v18 != 1 )
          goto LABEL_24;
        if ( v34 == v28 )
        {
          v33 = 8LL;
        }
        else
        {
          if ( v33 > 0x10 || !dword_6123C0[v33] )
          {
            v19 = v33;
            v20 = sub_405AF5(a1);
            v21 = gettext("invalid type string %s;\nthis system doesn't provide a %lu-byte floating point type");
            error(0, 0, v21, v20, v19);
            return 0LL;
          }
          v28 = v34;
        }
        break;
    }
    v30 = dword_6123C0[v33];
    v36 = localeconv();
    if ( *v36->decimal_point )
      v22 = strlen(v36->decimal_point);
    else
      v22 = 1LL;
    v37 = v22;
    switch ( v30 )
    {
      case 7u:
        v35 = sub_40221B;
        v32 = v37 + 23;
        break;
      case 8u:
        v35 = sub_402329;
        v32 = v37 + 28;
        break;
      case 6u:
        v35 = sub_402129;
        v32 = v37 + 14;
        break;
      default:
        abort();
    }
    goto LABEL_111;
  }
  if ( v4 > 102 )
  {
    if ( v4 != 117 && v4 != 120 && v4 != 111 )
      goto LABEL_110;
  }
  else
  {
    if ( v4 == 99 )
    {
      v28 = a2 + 1;
      v31 = 6;
      v30 = 1;
      v35 = sub_4025CC;
      v32 = 3;
      goto LABEL_111;
    }
    if ( v4 != 100 )
    {
      if ( v4 != 97 )
      {
LABEL_110:
        v23 = sub_405AF5(a1);
        v24 = *a2;
        v25 = gettext("invalid character `%c' in type string %s");
        error(0, 0, v25, v24, v23);
        return 0LL;
      }
      v28 = a2 + 1;
      v31 = 5;
      v30 = 1;
      v35 = sub_4024DE;
      v32 = 3;
      goto LABEL_111;
    }
  }
  v29 = *a2;
  v28 = a2 + 1;
  v5 = a2[1];
  if ( v5 == 73 )
  {
    v28 = a2 + 2;
    v33 = 4LL;
    goto LABEL_31;
  }
  if ( v5 > 73 )
  {
    if ( v5 == 76 )
    {
      v28 = a2 + 2;
      v33 = 8LL;
      goto LABEL_31;
    }
    if ( v5 == 83 )
    {
      v28 = a2 + 2;
      v33 = 2LL;
      goto LABEL_31;
    }
  }
  else if ( v5 == 67 )
  {
    v28 = a2 + 2;
    v33 = 1LL;
    goto LABEL_31;
  }
  if ( (unsigned __int8)sub_40277C(v28, &v34, &v33) != 1 )
  {
LABEL_24:
    v6 = sub_405AF5(a1);
    v7 = gettext("invalid type string %s");
    error(0, 0, v7, v6);
    return 0LL;
  }
  if ( v34 == v28 )
  {
    v33 = 4LL;
  }
  else
  {
    if ( v33 > 8 || !dword_612380[v33] )
    {
      v9 = v33;
      v10 = sub_405AF5(a1);
      v11 = gettext("invalid type string %s;\nthis system doesn't provide a %lu-byte integral type");
      error(0, 0, v11, v10, v9);
      return 0LL;
    }
    v28 = v34;
  }
LABEL_31:
  v30 = dword_612380[v33];
  if ( v29 == 111 )
  {
    v31 = 2;
    if ( v30 == 5 )
    {
      v13 = "lo";
    }
    else if ( v30 == 4 )
    {
      v13 = "lo";
    }
    else
    {
      v13 = "o";
    }
    v32 = dword_40E4A0[v33];
    sprintf((char *)(a4 + 16), "%%*.%d%s", v32, v13);
    goto LABEL_62;
  }
  if ( v29 <= 111 )
  {
    if ( v29 != 100 )
      goto LABEL_61;
    v31 = 0;
    v32 = dword_40E500[v33];
    if ( v30 == 5 )
    {
      v12 = "ld";
    }
    else if ( v30 == 4 )
    {
      v12 = "ld";
    }
    else
    {
      v12 = "d";
    }
    goto LABEL_43;
  }
  if ( v29 == 117 )
  {
    v31 = 1;
    v32 = dword_40E560[v33];
    if ( v30 == 5 )
    {
      v12 = "lu";
    }
    else if ( v30 == 4 )
    {
      v12 = "lu";
    }
    else
    {
      v12 = "u";
    }
LABEL_43:
    sprintf((char *)(a4 + 16), "%%*%s", v12);
    goto LABEL_62;
  }
  if ( v29 != 120 )
LABEL_61:
    abort();
  v31 = 3;
  if ( v30 == 5 )
  {
    v14 = "lx";
  }
  else if ( v30 == 4 )
  {
    v14 = "lx";
  }
  else
  {
    v14 = "x";
  }
  v32 = dword_40E5C0[v33];
  sprintf((char *)(a4 + 16), "%%*.%d%s", v32, v14);
LABEL_62:
  if ( strlen((const char *)(a4 + 16)) > 7 )
    __assert_fail("strlen (tspec->fmt_string) < FMT_BYTES_ALLOCATED", "../../src/src/od.c", 0x2B6u, "decode_one_format");
  if ( v30 != 3 )
  {
    if ( v30 > 3 )
    {
      if ( v30 == 4 )
      {
        v35 = sub_401FD7;
        goto LABEL_111;
      }
      if ( v30 == 5 )
      {
        v35 = sub_402080;
        goto LABEL_111;
      }
    }
    else
    {
      if ( v30 == 1 )
      {
        if ( v31 )
          v15 = sub_401D37;
        else
          v15 = sub_401C8F;
        v35 = v15;
        goto LABEL_111;
      }
      if ( v30 == 2 )
      {
        if ( v31 )
          v16 = sub_401E88;
        else
          v16 = sub_401DDF;
        v35 = v16;
        goto LABEL_111;
      }
    }
    abort();
  }
  v35 = sub_401F31;
LABEL_111:
  *(_DWORD *)(a4 + 4) = v30;
  *(_DWORD *)a4 = v31;
  *(_QWORD *)(a4 + 8) = v35;
  *(_DWORD *)(a4 + 28) = v32;
  *(_BYTE *)(a4 + 24) = *v28 == 122;
  if ( *(_BYTE *)(a4 + 24) )
    ++v28;
  if ( a3 )
    *a3 = v28;
  return 1LL;
}
