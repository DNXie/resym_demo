#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4093A6(char *a1, __int64 a2, __int64 a3)
{
  char *v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  size_t v8; // rax
  void *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  size_t v15; // rax
  void *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  char *v19; // rax
  int v20; // eax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  size_t v23; // rax
  void *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  size_t v28; // rax
  void *v29; // rax
  char v33; // [rsp+2Fh] [rbp-E1h]
  int v34; // [rsp+30h] [rbp-E0h]
  int ii; // [rsp+34h] [rbp-DCh]
  __int64 v37; // [rsp+40h] [rbp-D0h]
  __int64 v38; // [rsp+48h] [rbp-C8h]
  __int64 v39; // [rsp+50h] [rbp-C0h]
  unsigned __int64 v40; // [rsp+58h] [rbp-B8h]
  unsigned __int64 v41; // [rsp+60h] [rbp-B0h]
  __int64 v42; // [rsp+68h] [rbp-A8h]
  char *i; // [rsp+70h] [rbp-A0h]
  char *j; // [rsp+70h] [rbp-A0h]
  unsigned __int64 v45; // [rsp+78h] [rbp-98h]
  char *k; // [rsp+80h] [rbp-90h]
  char *l; // [rsp+80h] [rbp-90h]
  unsigned __int64 v48; // [rsp+88h] [rbp-88h]
  char *m; // [rsp+90h] [rbp-80h]
  char *n; // [rsp+90h] [rbp-80h]
  unsigned __int64 v51; // [rsp+98h] [rbp-78h]
  __int64 v52; // [rsp+A0h] [rbp-70h]
  unsigned __int64 v53; // [rsp+A8h] [rbp-68h]
  void *dest; // [rsp+B8h] [rbp-58h]
  unsigned __int64 v55; // [rsp+C8h] [rbp-48h]
  void *v56; // [rsp+D8h] [rbp-38h]
  unsigned __int64 v57; // [rsp+E8h] [rbp-28h]
  void *v58; // [rsp+F8h] [rbp-18h]
  void *v59; // [rsp+108h] [rbp-8h]

  v37 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  *(_QWORD *)a2 = 0LL;
  v38 = 7LL;
  *(_QWORD *)(a2 + 8) = a2 + 32;
  *(_QWORD *)a3 = 0LL;
  v39 = 7LL;
  *(_QWORD *)(a3 + 8) = a3 + 16;
  while ( 1 )
  {
    do
    {
      if ( !*a1 )
      {
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 88LL * *(_QWORD *)a2) = a1;
        *(_QWORD *)(a2 + 16) = v40;
        *(_QWORD *)(a2 + 24) = v41;
        return 0LL;
      }
      v3 = a1++;
    }
    while ( *v3 != 37 );
    v42 = -1LL;
    v52 = *(_QWORD *)(a2 + 8) + 88LL * *(_QWORD *)a2;
    *(_QWORD *)v52 = a1 - 1;
    *(_DWORD *)(v52 + 16) = 0;
    *(_QWORD *)(v52 + 24) = 0LL;
    *(_QWORD *)(v52 + 32) = 0LL;
    *(_QWORD *)(v52 + 40) = -1LL;
    *(_QWORD *)(v52 + 48) = 0LL;
    *(_QWORD *)(v52 + 56) = 0LL;
    *(_QWORD *)(v52 + 64) = -1LL;
    *(_QWORD *)(v52 + 80) = -1LL;
    if ( *a1 > 47 && *a1 <= 57 )
    {
      for ( i = a1; *i > 47 && *i <= 57; ++i )
        ;
      if ( *i == 36 )
      {
        v45 = 0LL;
        for ( j = a1; *j > 47 && *j <= 57; ++j )
        {
          if ( v45 > 0x1999999999999999LL )
            v4 = -1LL;
          else
            v4 = 10 * v45;
          v45 = sub_409372(v4, *j - 48);
        }
        if ( !v45 || v45 == -1LL )
        {
LABEL_272:
          if ( *(_QWORD *)(a3 + 8) != a3 + 16 )
            free(*(void **)(a3 + 8));
          if ( *(_QWORD *)(a2 + 8) != a2 + 32 )
            free(*(void **)(a2 + 8));
          *__errno_location() = 22;
          return 0xFFFFFFFFLL;
        }
        v42 = v45 - 1;
        a1 = j + 1;
      }
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( *a1 == 39 )
                {
                  *(_DWORD *)(v52 + 16) |= 1u;
                  ++a1;
                }
                if ( *a1 != 45 )
                  break;
                *(_DWORD *)(v52 + 16) |= 2u;
                ++a1;
              }
              if ( *a1 != 43 )
                break;
              *(_DWORD *)(v52 + 16) |= 4u;
              ++a1;
            }
            if ( *a1 != 32 )
              break;
            *(_DWORD *)(v52 + 16) |= 8u;
            ++a1;
          }
          if ( *a1 != 35 )
            break;
          *(_DWORD *)(v52 + 16) |= 0x10u;
          ++a1;
        }
        if ( *a1 != 48 )
          break;
        *(_DWORD *)(v52 + 16) |= 0x20u;
        ++a1;
      }
      if ( *a1 != 73 )
        break;
      *(_DWORD *)(v52 + 16) |= 0x40u;
      ++a1;
    }
    if ( *a1 != 42 )
    {
      if ( *a1 > 47 && *a1 <= 57 )
      {
        *(_QWORD *)(v52 + 24) = a1;
        while ( *a1 > 47 && *a1 <= 57 )
          ++a1;
        *(_QWORD *)(v52 + 32) = a1;
        if ( v40 < *(_QWORD *)(v52 + 32) - *(_QWORD *)(v52 + 24) )
          v40 = *(_QWORD *)(v52 + 32) - *(_QWORD *)(v52 + 24);
      }
      goto LABEL_88;
    }
    *(_QWORD *)(v52 + 24) = a1++;
    *(_QWORD *)(v52 + 32) = a1;
    if ( !v40 )
      v40 = 1LL;
    if ( *a1 > 47 && *a1 <= 57 )
    {
      for ( k = a1; *k > 47 && *k <= 57; ++k )
        ;
      if ( *k == 36 )
      {
        v48 = 0LL;
        for ( l = a1; *l > 47 && *l <= 57; ++l )
        {
          if ( v48 > 0x1999999999999999LL )
            v5 = -1LL;
          else
            v5 = 10 * v48;
          v48 = sub_409372(v5, *l - 48);
        }
        if ( !v48 || v48 == -1LL )
          goto LABEL_272;
        *(_QWORD *)(v52 + 40) = v48 - 1;
        a1 = l + 1;
      }
    }
    if ( *(_QWORD *)(v52 + 40) == -1LL )
    {
      v6 = v37++;
      *(_QWORD *)(v52 + 40) = v6;
      if ( *(_QWORD *)(v52 + 40) == -1LL )
        goto LABEL_272;
    }
    v53 = *(_QWORD *)(v52 + 40);
    if ( v53 >= v39 )
      break;
LABEL_75:
    while ( *(_QWORD *)a3 <= v53 )
    {
      v10 = *(_QWORD *)(a3 + 8);
      v11 = (*(_QWORD *)a3)++;
      *(_DWORD *)(v10 + 32 * v11) = 0;
    }
    if ( *(_DWORD *)(32 * v53 + *(_QWORD *)(a3 + 8)) )
    {
      if ( *(_DWORD *)(32 * v53 + *(_QWORD *)(a3 + 8)) != 5 )
        goto LABEL_272;
    }
    else
    {
      *(_DWORD *)(32 * v53 + *(_QWORD *)(a3 + 8)) = 5;
    }
LABEL_88:
    if ( *a1 == 46 )
    {
      if ( *++a1 == 42 )
      {
        *(_QWORD *)(v52 + 48) = a1++ - 1;
        *(_QWORD *)(v52 + 56) = a1;
        if ( v41 <= 1 )
          v41 = 2LL;
        if ( *a1 > 47 && *a1 <= 57 )
        {
          for ( m = a1; *m > 47 && *m <= 57; ++m )
            ;
          if ( *m == 36 )
          {
            v51 = 0LL;
            for ( n = a1; *n > 47 && *n <= 57; ++n )
            {
              if ( v51 > 0x1999999999999999LL )
                v12 = -1LL;
              else
                v12 = 10 * v51;
              v51 = sub_409372(v12, *n - 48);
            }
            if ( !v51 || v51 == -1LL )
              goto LABEL_272;
            *(_QWORD *)(v52 + 64) = v51 - 1;
            a1 = n + 1;
          }
        }
        if ( *(_QWORD *)(v52 + 64) == -1LL )
        {
          v13 = v37++;
          *(_QWORD *)(v52 + 64) = v13;
          if ( *(_QWORD *)(v52 + 64) == -1LL )
            goto LABEL_272;
        }
        v55 = *(_QWORD *)(v52 + 64);
        if ( v55 >= v39 )
        {
          if ( v39 < 0 )
            v14 = -1LL;
          else
            v14 = 2 * v39;
          v39 = v14;
          if ( v14 <= v55 )
            v39 = sub_409372(v55, 1LL);
          if ( (unsigned __int64)v39 > 0x7FFFFFFFFFFFFFFLL )
            v15 = -1LL;
          else
            v15 = 32 * v39;
          if ( v15 == -1LL )
            goto LABEL_277;
          v16 = *(_QWORD *)(a3 + 8) == a3 + 16 ? malloc(v15) : realloc(*(void **)(a3 + 8), v15);
          v56 = v16;
          if ( !v16 )
            goto LABEL_277;
          if ( *(_QWORD *)(a3 + 8) == a3 + 16 )
            memcpy(v16, *(const void **)(a3 + 8), 32LL * *(_QWORD *)a3);
          *(_QWORD *)(a3 + 8) = v56;
        }
        while ( *(_QWORD *)a3 <= v55 )
        {
          v17 = *(_QWORD *)(a3 + 8);
          v18 = (*(_QWORD *)a3)++;
          *(_DWORD *)(v17 + 32 * v18) = 0;
        }
        if ( *(_DWORD *)(32 * v55 + *(_QWORD *)(a3 + 8)) )
        {
          if ( *(_DWORD *)(32 * v55 + *(_QWORD *)(a3 + 8)) != 5 )
            goto LABEL_272;
        }
        else
        {
          *(_DWORD *)(32 * v55 + *(_QWORD *)(a3 + 8)) = 5;
        }
      }
      else
      {
        *(_QWORD *)(v52 + 48) = a1 - 1;
        while ( *a1 > 47 && *a1 <= 57 )
          ++a1;
        *(_QWORD *)(v52 + 56) = a1;
        if ( v41 < *(_QWORD *)(v52 + 56) - *(_QWORD *)(v52 + 48) )
          v41 = *(_QWORD *)(v52 + 56) - *(_QWORD *)(v52 + 48);
      }
    }
    for ( ii = 0; ; ii += 8 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( *a1 == 104 )
              {
                ii |= 1 << (ii & 1);
                ++a1;
              }
              if ( *a1 != 76 )
                break;
              ii |= 4u;
              ++a1;
            }
            if ( *a1 != 108 )
              break;
            ii += 8;
            ++a1;
          }
          if ( *a1 != 106 )
            break;
          ii += 8;
          ++a1;
        }
        if ( *a1 != 122 && *a1 != 90 )
          break;
        ii += 8;
        ++a1;
      }
      if ( *a1 != 116 )
        break;
      ++a1;
    }
    v19 = a1++;
    v33 = *v19;
    v20 = *v19;
    if ( v20 == 100 )
    {
LABEL_185:
      if ( ii > 15 || (ii & 4) != 0 )
      {
        v34 = 9;
      }
      else if ( ii <= 7 )
      {
        if ( (ii & 2) != 0 )
        {
          v34 = 1;
        }
        else if ( (ii & 1) != 0 )
        {
          v34 = 3;
        }
        else
        {
          v34 = 5;
        }
      }
      else
      {
        v34 = 7;
      }
      goto LABEL_229;
    }
    if ( v20 > 100 )
    {
      if ( v20 == 111 )
        goto LABEL_195;
      if ( v20 > 111 )
      {
        if ( v20 == 115 )
        {
          if ( ii <= 7 )
            v34 = 15;
          else
            v34 = 16;
          goto LABEL_229;
        }
        if ( v20 > 115 )
        {
          if ( v20 != 117 && v20 != 120 )
            goto LABEL_272;
LABEL_195:
          if ( ii > 15 || (ii & 4) != 0 )
          {
            v34 = 10;
          }
          else if ( ii <= 7 )
          {
            if ( (ii & 2) != 0 )
            {
              v34 = 2;
            }
            else if ( (ii & 1) != 0 )
            {
              v34 = 4;
            }
            else
            {
              v34 = 6;
            }
          }
          else
          {
            v34 = 8;
          }
          goto LABEL_229;
        }
        if ( v20 != 112 )
          goto LABEL_272;
        v34 = 17;
      }
      else
      {
        if ( v20 == 105 )
          goto LABEL_185;
        if ( v20 <= 105 )
        {
          if ( v20 > 103 )
            goto LABEL_272;
LABEL_205:
          if ( ii > 15 || (ii & 4) != 0 )
            v34 = 12;
          else
            v34 = 11;
          goto LABEL_229;
        }
        if ( v20 != 110 )
          goto LABEL_272;
        if ( ii > 15 || (ii & 4) != 0 )
        {
          v34 = 22;
        }
        else if ( ii <= 7 )
        {
          if ( (ii & 2) != 0 )
          {
            v34 = 18;
          }
          else if ( (ii & 1) != 0 )
          {
            v34 = 19;
          }
          else
          {
            v34 = 20;
          }
        }
        else
        {
          v34 = 21;
        }
      }
    }
    else if ( v20 > 71 )
    {
      if ( v20 == 88 )
        goto LABEL_195;
      if ( v20 > 88 )
      {
        if ( v20 == 97 )
          goto LABEL_205;
        if ( v20 != 99 )
          goto LABEL_272;
        if ( ii <= 7 )
          v34 = 13;
        else
          v34 = 14;
      }
      else
      {
        if ( v20 != 83 )
          goto LABEL_272;
        v34 = 16;
        v33 = 115;
      }
    }
    else
    {
      if ( v20 >= 69 || v20 == 65 )
        goto LABEL_205;
      if ( v20 == 67 )
      {
        v34 = 14;
        v33 = 99;
      }
      else
      {
        if ( v20 != 37 )
          goto LABEL_272;
        v34 = 0;
      }
    }
LABEL_229:
    if ( v34 )
    {
      *(_QWORD *)(v52 + 80) = v42;
      if ( *(_QWORD *)(v52 + 80) == -1LL )
      {
        v21 = v37++;
        *(_QWORD *)(v52 + 80) = v21;
        if ( *(_QWORD *)(v52 + 80) == -1LL )
          goto LABEL_272;
      }
      v57 = *(_QWORD *)(v52 + 80);
      if ( v57 >= v39 )
      {
        if ( v39 < 0 )
          v22 = -1LL;
        else
          v22 = 2 * v39;
        v39 = v22;
        if ( v22 <= v57 )
          v39 = sub_409372(v57, 1LL);
        if ( (unsigned __int64)v39 > 0x7FFFFFFFFFFFFFFLL )
          v23 = -1LL;
        else
          v23 = 32 * v39;
        if ( v23 == -1LL )
          goto LABEL_277;
        v24 = *(_QWORD *)(a3 + 8) == a3 + 16 ? malloc(v23) : realloc(*(void **)(a3 + 8), v23);
        v58 = v24;
        if ( !v24 )
          goto LABEL_277;
        if ( *(_QWORD *)(a3 + 8) == a3 + 16 )
          memcpy(v24, *(const void **)(a3 + 8), 32LL * *(_QWORD *)a3);
        *(_QWORD *)(a3 + 8) = v58;
      }
      while ( *(_QWORD *)a3 <= v57 )
      {
        v25 = *(_QWORD *)(a3 + 8);
        v26 = (*(_QWORD *)a3)++;
        *(_DWORD *)(v25 + 32 * v26) = 0;
      }
      if ( *(_DWORD *)(32 * v57 + *(_QWORD *)(a3 + 8)) )
      {
        if ( *(_DWORD *)(32 * v57 + *(_QWORD *)(a3 + 8)) != v34 )
          goto LABEL_272;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(a3 + 8) + 32 * v57) = v34;
      }
    }
    *(_BYTE *)(v52 + 72) = v33;
    *(_QWORD *)(v52 + 8) = a1;
    if ( ++*(_QWORD *)a2 >= (unsigned __int64)v38 )
    {
      if ( v38 < 0 )
        v27 = -1LL;
      else
        v27 = 2 * v38;
      v38 = v27;
      if ( v27 > 0x2E8BA2E8BA2E8BALL )
        v28 = -1LL;
      else
        v28 = 88 * v27;
      if ( v28 == -1LL )
        goto LABEL_277;
      v29 = *(_QWORD *)(a2 + 8) == a2 + 32 ? malloc(v28) : realloc(*(void **)(a2 + 8), v28);
      v59 = v29;
      if ( !v29 )
        goto LABEL_277;
      if ( *(_QWORD *)(a2 + 8) == a2 + 32 )
        memcpy(v29, *(const void **)(a2 + 8), 88LL * *(_QWORD *)a2);
      *(_QWORD *)(a2 + 8) = v59;
    }
  }
  if ( v39 < 0 )
    v7 = -1LL;
  else
    v7 = 2 * v39;
  v39 = v7;
  if ( v7 <= v53 )
    v39 = sub_409372(v53, 1LL);
  if ( (unsigned __int64)v39 > 0x7FFFFFFFFFFFFFFLL )
    v8 = -1LL;
  else
    v8 = 32 * v39;
  if ( v8 != -1LL )
  {
    v9 = *(_QWORD *)(a3 + 8) == a3 + 16 ? malloc(v8) : realloc(*(void **)(a3 + 8), v8);
    dest = v9;
    if ( v9 )
    {
      if ( *(_QWORD *)(a3 + 8) == a3 + 16 )
        memcpy(v9, *(const void **)(a3 + 8), 32LL * *(_QWORD *)a3);
      *(_QWORD *)(a3 + 8) = dest;
      goto LABEL_75;
    }
  }
LABEL_277:
  if ( *(_QWORD *)(a3 + 8) != a3 + 16 )
    free(*(void **)(a3 + 8));
  if ( *(_QWORD *)(a2 + 8) != a2 + 32 )
    free(*(void **)(a2 + 8));
  *__errno_location() = 12;
  return 0xFFFFFFFFLL;
}
