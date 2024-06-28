#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_402214(__int64 a1, unsigned __int64 a2, __int64 a3, size_t a4, unsigned int a5, int a6, __int64 a7, char *a8, char *a9)
{
  int v9; // eax
  bool v10; // al
  int v11; // eax
  char v20; // [rsp+65h] [rbp-6Bh]
  bool v21; // [rsp+66h] [rbp-6Ah]
  unsigned __int8 v22; // [rsp+67h] [rbp-69h]
  char v23; // [rsp+68h] [rbp-68h]
  char v24; // [rsp+69h] [rbp-67h]
  bool v25; // [rsp+6Ah] [rbp-66h]
  bool v26; // [rsp+6Bh] [rbp-65h]
  wchar_t pwc; // [rsp+6Ch] [rbp-64h] BYREF
  __int64 i; // [rsp+70h] [rbp-60h]
  unsigned __int64 v29; // [rsp+78h] [rbp-58h]
  char *s; // [rsp+80h] [rbp-50h]
  size_t n; // [rsp+88h] [rbp-48h]
  unsigned __int64 v32; // [rsp+90h] [rbp-40h]
  unsigned __int64 j; // [rsp+98h] [rbp-38h]
  size_t v34; // [rsp+A0h] [rbp-30h]
  unsigned __int64 v35; // [rsp+A8h] [rbp-28h]
  mbstate_t p; // [rsp+B0h] [rbp-20h] BYREF
  unsigned __int64 v37; // [rsp+B8h] [rbp-18h]

  v37 = __readfsqword(0x28u);
  v29 = 0LL;
  s = 0LL;
  n = 0LL;
  v20 = 0;
  v26 = __ctype_get_mb_cur_max() == 1;
  v21 = (a6 & 2) != 0;
  if ( a5 == 3 )
    goto LABEL_11;
  if ( a5 > 3 )
  {
    if ( a5 == 5 )
    {
      v20 = 1;
      v21 = 0;
      goto LABEL_33;
    }
    if ( a5 >= 5 )
    {
      if ( a5 > 8 )
        abort();
      if ( a5 != 8 )
      {
        a8 = sub_4021D7((const char *)L"`'", a5);
        a9 = sub_4021D7((const char *)L"'", a5);
      }
      if ( (a6 & 2) == 0 )
      {
        for ( s = a8; *s; ++s )
        {
          if ( v29 < a2 )
            *(_BYTE *)(v29 + a1) = *s;
          ++v29;
        }
      }
      v20 = 1;
      s = a9;
      n = strlen(a9);
      goto LABEL_33;
    }
    a5 = 3;
    v21 = 1;
LABEL_11:
    if ( !v21 )
    {
      if ( v29 < a2 )
        *(_BYTE *)(a1 + v29) = 34;
      ++v29;
    }
    v20 = 1;
    s = (char *)L"\"`'";
    n = 1LL;
    goto LABEL_33;
  }
  if ( a5 == 1 )
  {
    a5 = 2;
    v21 = 1;
    goto LABEL_27;
  }
  if ( a5 > 1 )
  {
LABEL_27:
    if ( !v21 )
    {
      if ( v29 < a2 )
        *(_BYTE *)(a1 + v29) = 39;
      ++v29;
    }
    s = (_BYTE *)(L"\"`'" + 4);
    n = 1LL;
    goto LABEL_33;
  }
  v21 = 0;
LABEL_33:
  for ( i = 0LL; a4 == -1LL ? *(_BYTE *)(a3 + i) != 0 : i != a4; ++i )
  {
    v24 = 0;
    if ( v20 && n && i + n <= a4 && !memcmp((const void *)(a3 + i), s, n) )
    {
      if ( v21 )
        return sub_402214(a1, a2, a3, a4, a5, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, (__int64)a9);
      v24 = 1;
    }
    v22 = *(_BYTE *)(a3 + i);
    if ( v22 > 0x3Au )
    {
      if ( v22 == 94 )
        goto LABEL_144;
      if ( v22 > 0x5Eu )
      {
        if ( v22 <= 0x7Au )
        {
          if ( v22 >= 0x61u || v22 == 95 )
            goto LABEL_206;
          goto LABEL_144;
        }
        if ( v22 != 124 )
        {
          if ( v22 < 0x7Cu || v22 == 125 )
          {
            if ( a4 == -1LL )
              v10 = *(_BYTE *)(a3 + 1) != 0;
            else
              v10 = a4 != 1;
            if ( v10 )
              goto LABEL_206;
          }
          else if ( v22 != 126 )
          {
LABEL_157:
            if ( v26 )
            {
              v32 = 1LL;
              v25 = ((*__ctype_b_loc())[v22] & 0x4000) != 0;
            }
            else
            {
              memset(&p, 0, sizeof(p));
              v32 = 0LL;
              v25 = 1;
              if ( a4 == -1LL )
                a4 = strlen((const char *)a3);
              do
              {
                v34 = mbrtowc(&pwc, (const char *)(v32 + i + a3), a4 - (v32 + i), &p);
                if ( !v34 )
                  break;
                if ( v34 == -1LL )
                {
                  v25 = 0;
                  break;
                }
                if ( v34 == -2LL )
                {
                  v25 = 0;
                  while ( i + v32 < a4 && *(_BYTE *)(v32 + i + a3) )
                    ++v32;
                  break;
                }
                if ( v21 && a5 == 2 )
                {
                  for ( j = 1LL; j < v34; ++j )
                  {
                    v11 = *(char *)(j + v32 + i + a3);
                    if ( v11 == 94 )
                      return sub_402214(a1, a2, a3, a4, a5, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, (__int64)a9);
                    if ( v11 > 94 )
                    {
                      if ( v11 == 96 || v11 == 124 )
                        return sub_402214(a1, a2, a3, a4, a5, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, (__int64)a9);
                    }
                    else if ( (unsigned int)(v11 - 91) <= 1 )
                    {
                      return sub_402214(a1, a2, a3, a4, a5, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, (__int64)a9);
                    }
                  }
                }
                if ( !iswprint(pwc) )
                  v25 = 0;
                v32 += v34;
              }
              while ( !mbsinit(&p) );
            }
            if ( v32 > 1 || v20 && !v25 )
            {
              v35 = i + v32;
              while ( 1 )
              {
                if ( v20 && !v25 )
                {
                  if ( v21 )
                    return sub_402214(a1, a2, a3, a4, a5, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, (__int64)a9);
                  if ( v29 < a2 )
                    *(_BYTE *)(a1 + v29) = 92;
                  if ( ++v29 < a2 )
                    *(_BYTE *)(v29 + a1) = (v22 >> 6) + 48;
                  if ( ++v29 < a2 )
                    *(_BYTE *)(v29 + a1) = ((v22 >> 3) & 7) + 48;
                  ++v29;
                  v22 = (v22 & 7) + 48;
                }
                else if ( v24 )
                {
                  if ( v29 < a2 )
                    *(_BYTE *)(a1 + v29) = 92;
                  ++v29;
                  v24 = 0;
                }
                if ( i + 1 >= v35 )
                  break;
                if ( v29 < a2 )
                  *(_BYTE *)(v29 + a1) = v22;
                ++v29;
                ++i;
                v22 = *(_BYTE *)(a3 + i);
              }
              goto LABEL_215;
            }
            goto LABEL_206;
          }
          goto LABEL_143;
        }
LABEL_144:
        if ( a5 == 2 && v21 )
          return sub_402214(a1, a2, a3, a4, a5, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, (__int64)a9);
        goto LABEL_206;
      }
      if ( v22 > 0x5Au )
      {
        if ( v22 == 92 )
        {
          v23 = *(_BYTE *)(a3 + i);
          if ( v20 && v21 && n )
            goto LABEL_215;
          goto LABEL_134;
        }
        if ( v22 <= 0x5Cu )
          goto LABEL_144;
      }
      else
      {
        if ( v22 >= 0x41u )
          goto LABEL_206;
        if ( v22 <= 0x3Eu )
          goto LABEL_144;
        if ( v22 != 63 )
          goto LABEL_157;
        if ( a5 == 2 )
        {
          if ( v21 )
            return sub_402214(a1, a2, a3, a4, a5, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, (__int64)a9);
        }
        else if ( a5 == 3 && (a6 & 4) != 0 && i + 2 < a4 && *(_BYTE *)(i + 1 + a3) == 63 )
        {
          v9 = *(char *)(i + 2 + a3);
          if ( v9 != 45 )
          {
            if ( v9 > 45 )
            {
              if ( v9 != 47 && (v9 < 47 || (unsigned int)(v9 - 60) > 2) )
                goto LABEL_206;
            }
            else if ( v9 != 33 && (v9 < 33 || (unsigned int)(v9 - 39) > 2) )
            {
              goto LABEL_206;
            }
          }
          if ( v21 )
            return sub_402214(a1, a2, a3, a4, a5, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, (__int64)a9);
          v22 = *(_BYTE *)(i + 2 + a3);
          i += 2LL;
          if ( v29 < a2 )
            *(_BYTE *)(a1 + v29) = 63;
          if ( ++v29 < a2 )
            *(_BYTE *)(a1 + v29) = 34;
          if ( ++v29 < a2 )
            *(_BYTE *)(a1 + v29) = 34;
          if ( ++v29 < a2 )
            *(_BYTE *)(a1 + v29) = 63;
          ++v29;
        }
      }
    }
    else
    {
      if ( v22 >= 0x2Bu )
        goto LABEL_206;
      if ( v22 > 0x22u )
      {
        if ( v22 != 38 )
        {
          if ( v22 > 0x26u )
          {
            if ( v22 == 39 )
            {
              if ( a5 == 2 )
              {
                if ( v21 )
                  return sub_402214(a1, a2, a3, a4, a5, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, (__int64)a9);
                if ( v29 < a2 )
                  *(_BYTE *)(a1 + v29) = 39;
                if ( ++v29 < a2 )
                  *(_BYTE *)(a1 + v29) = 92;
                if ( ++v29 < a2 )
                  *(_BYTE *)(a1 + v29) = 39;
                ++v29;
              }
              goto LABEL_206;
            }
            goto LABEL_144;
          }
          if ( v22 != 36 )
          {
            if ( v22 > 0x24u )
              goto LABEL_206;
LABEL_143:
            if ( i )
              goto LABEL_206;
          }
        }
        goto LABEL_144;
      }
      if ( v22 >= 0x20u )
        goto LABEL_144;
      if ( v22 == 9 )
      {
        v23 = 116;
        goto LABEL_134;
      }
      if ( v22 > 9u )
      {
        if ( v22 == 11 )
        {
          v23 = 118;
        }
        else
        {
          if ( v22 < 0xBu )
          {
            v23 = 110;
            goto LABEL_134;
          }
          if ( v22 == 12 )
          {
            v23 = 102;
          }
          else
          {
            if ( v22 != 13 )
              goto LABEL_157;
            v23 = 114;
LABEL_134:
            if ( a5 == 2 && v21 )
              return sub_402214(a1, a2, a3, a4, a5, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, (__int64)a9);
          }
        }
LABEL_136:
        if ( v20 )
        {
          v22 = v23;
LABEL_211:
          if ( v21 )
            return sub_402214(a1, a2, a3, a4, a5, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, (__int64)a9);
          if ( v29 < a2 )
            *(_BYTE *)(a1 + v29) = 92;
          ++v29;
          goto LABEL_215;
        }
        goto LABEL_206;
      }
      if ( v22 == 7 )
      {
        v23 = 97;
        goto LABEL_136;
      }
      if ( v22 > 7u )
      {
        v23 = 98;
        goto LABEL_136;
      }
      if ( v22 )
        goto LABEL_157;
      if ( v20 )
      {
        if ( v21 )
          return sub_402214(a1, a2, a3, a4, a5, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, (__int64)a9);
        if ( v29 < a2 )
          *(_BYTE *)(a1 + v29) = 92;
        ++v29;
        if ( i + 1 < a4 && *(char *)(i + 1 + a3) > 47 && *(char *)(i + 1 + a3) <= 57 )
        {
          if ( v29 < a2 )
            *(_BYTE *)(a1 + v29) = 48;
          if ( ++v29 < a2 )
            *(_BYTE *)(a1 + v29) = 48;
          ++v29;
        }
        v22 = 48;
      }
      else if ( (a6 & 1) != 0 )
      {
        continue;
      }
    }
LABEL_206:
    if ( (v20 == 1 || v21) && a7 && (*(_DWORD *)(4LL * (v22 >> 5) + a7) & (1 << (v22 & 0x1F))) != 0 || v24 == 1 )
      goto LABEL_211;
LABEL_215:
    if ( v29 < a2 )
      *(_BYTE *)(v29 + a1) = v22;
    ++v29;
  }
  if ( !v29 && a5 == 2 && v21 )
    return sub_402214(a1, a2, a3, a4, a5, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, (__int64)a9);
  if ( s && !v21 )
  {
    while ( *s )
    {
      if ( v29 < a2 )
        *(_BYTE *)(v29 + a1) = *s;
      ++v29;
      ++s;
    }
  }
  if ( v29 < a2 )
    *(_BYTE *)(a1 + v29) = 0;
  return v29;
}
