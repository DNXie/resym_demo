#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401D73(unsigned int a1, const char *a2, __int64 a3)
{
  char *v3; // rax
  bool v4; // al
  bool v5; // al
  __int64 v6; // rax
  int *v7; // rax
  int *v8; // rax
  int *v9; // rax
  int *v10; // rax
  char *v11; // rax
  int v12; // eax
  const unsigned __int16 *v13; // rbx
  const unsigned __int16 *v14; // rbx
  unsigned __int8 v17; // [rsp+21h] [rbp-40CFh]
  char v18; // [rsp+22h] [rbp-40CEh]
  unsigned __int8 v19; // [rsp+23h] [rbp-40CDh]
  unsigned __int8 v20; // [rsp+24h] [rbp-40CCh]
  char v21; // [rsp+25h] [rbp-40CBh]
  unsigned __int8 v22; // [rsp+26h] [rbp-40CAh]
  bool v23; // [rsp+27h] [rbp-40C9h]
  wchar_t pwc; // [rsp+28h] [rbp-40C8h] BYREF
  int v25; // [rsp+2Ch] [rbp-40C4h]
  size_t n; // [rsp+30h] [rbp-40C0h]
  __int64 v27; // [rsp+38h] [rbp-40B8h]
  __int64 v28; // [rsp+40h] [rbp-40B0h]
  __int64 v29; // [rsp+48h] [rbp-40A8h]
  __int64 v30; // [rsp+50h] [rbp-40A0h]
  unsigned __int64 v31; // [rsp+58h] [rbp-4098h]
  void *s; // [rsp+60h] [rbp-4090h]
  unsigned __int64 v33; // [rsp+68h] [rbp-4088h]
  size_t i; // [rsp+70h] [rbp-4080h]
  char *v35; // [rsp+78h] [rbp-4078h]
  size_t v36; // [rsp+80h] [rbp-4070h]
  unsigned __int64 v37; // [rsp+88h] [rbp-4068h]
  char *v38; // [rsp+90h] [rbp-4060h]
  char *v39; // [rsp+98h] [rbp-4058h]
  __off_t v40; // [rsp+A0h] [rbp-4050h]
  __off_t v41; // [rsp+A8h] [rbp-4048h]
  mbstate_t p; // [rsp+B0h] [rbp-4040h] BYREF
  mbstate_t v43; // [rsp+C0h] [rbp-4030h]
  char dest[16392]; // [rsp+D0h] [rbp-4020h] BYREF
  unsigned __int64 v45; // [rsp+40D8h] [rbp-18h]

  v45 = __readfsqword(0x28u);
  v17 = 1;
  if ( a2 )
    v3 = (char *)a2;
  else
    v3 = gettext("standard input");
  v39 = v3;
  v31 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  if ( __ctype_get_mb_cur_max() <= 1 )
  {
    v4 = byte_60930B || byte_60930A;
    v18 = v4;
    v19 = 0;
  }
  else
  {
    v18 = byte_60930B;
    v19 = byte_60930A;
  }
  v5 = byte_609309 || byte_60930C;
  v23 = v5;
  if ( v18 != 1 || v19 || byte_609308 || v23 )
    sub_403961(a1, 0LL, 0LL, 2LL);
  if ( v18 && v19 != 1 && byte_609308 != 1 && !v23 )
  {
    if ( *(int *)a3 > 0 )
      *(_DWORD *)a3 = sub_4069C0(a1, (struct stat *)(a3 + 8));
    if ( *(_DWORD *)a3
      || (*(_DWORD *)(a3 + 32) & 0xF000) != 0x8000
      || (v40 = lseek(a1, 0LL, 1), v40 == -1)
      || (v41 = lseek(a1, 0LL, 2), v41 == -1) )
    {
      sub_403961(a1, 0LL, 0LL, 2LL);
      while ( 1 )
      {
        n = sub_405AD0(a1, dest, 0x4000LL);
        if ( !n )
          break;
        if ( n == -1LL )
        {
          v7 = __errno_location();
          error(0, *v7, "%s", v39);
          v17 = 0;
          goto LABEL_124;
        }
        v30 += n;
      }
    }
    else
    {
      if ( v41 < v40 )
        v6 = 0LL;
      else
        v6 = v41 - v40;
      v30 = v6;
    }
    goto LABEL_124;
  }
  if ( v19 == 1 || v23 )
  {
    if ( __ctype_get_mb_cur_max() > 1 )
    {
      v20 = 0;
      v33 = 0LL;
      p = 0LL;
      v21 = 0;
      for ( i = 0LL; ; i = n )
      {
        n = sub_405AD0(a1, &dest[i], 0x4000 - i);
        if ( !n )
        {
LABEL_94:
          if ( v33 > v31 )
            v31 = v33;
          v28 += v20;
          goto LABEL_124;
        }
        if ( n == -1LL )
        {
          v9 = __errno_location();
          error(0, *v9, "%s", v39);
          v17 = 0;
          goto LABEL_94;
        }
        v30 += n;
        v35 = dest;
        n += i;
        while ( 1 )
        {
          if ( v21 != 1 && sub_401A96(*v35) )
          {
            v36 = 1LL;
            pwc = *v35;
            goto LABEL_67;
          }
          v21 = 1;
          v43 = p;
          v36 = mbrtowc(&pwc, v35, n, &p);
          if ( v36 == -2LL )
            break;
          if ( v36 != -1LL )
          {
            if ( mbsinit(&p) )
              v21 = 0;
            if ( !v36 )
            {
              pwc = 0;
              v36 = 1LL;
            }
LABEL_67:
            v35 += v36;
            n -= v36;
            ++v29;
            if ( pwc != 11 )
            {
              if ( pwc > 11 )
              {
                if ( pwc <= 13 )
                  goto LABEL_76;
                if ( pwc == 32 )
                {
                  ++v33;
                }
                else
                {
LABEL_82:
                  if ( !iswprint(pwc) )
                    goto LABEL_87;
                  v25 = wcwidth(pwc);
                  if ( v25 > 0 )
                    v33 += v25;
                  if ( !iswspace(pwc) )
                  {
                    v20 = 1;
                    goto LABEL_87;
                  }
                }
              }
              else if ( pwc == 9 )
              {
                v33 = (v33 & 0xFFFFFFFFFFFFFFF8LL) + 8;
              }
              else
              {
                if ( pwc != 10 )
                  goto LABEL_82;
                ++v27;
LABEL_76:
                if ( v33 > v31 )
                  v31 = v33;
                v33 = 0LL;
              }
            }
            v28 += v20;
            v20 = 0;
            goto LABEL_87;
          }
          ++v35;
          --n;
LABEL_87:
          if ( !n )
            goto LABEL_88;
        }
        p = v43;
LABEL_88:
        if ( n )
        {
          if ( n == 0x4000 )
          {
            ++v35;
            n = 0x3FFFLL;
          }
          memmove(dest, v35, n);
        }
      }
    }
    v22 = 0;
    v37 = 0LL;
LABEL_120:
    n = sub_405AD0(a1, dest, 0x4000LL);
    if ( !n )
    {
LABEL_121:
      if ( v37 > v31 )
        v31 = v37;
      v28 += v22;
      goto LABEL_124;
    }
    v38 = dest;
    if ( n == -1LL )
    {
      v10 = __errno_location();
      error(0, *v10, "%s", v39);
      v17 = 0;
      goto LABEL_121;
    }
    v30 += n;
    while ( 1 )
    {
      v11 = v38++;
      v12 = *v11;
      if ( v12 != 11 )
      {
        if ( v12 > 11 )
        {
          if ( v12 <= 13 )
            goto LABEL_110;
          if ( v12 == 32 )
          {
            ++v37;
            goto LABEL_115;
          }
        }
        else
        {
          if ( v12 == 9 )
          {
            v37 = (v37 & 0xFFFFFFFFFFFFFFF8LL) + 8;
            goto LABEL_115;
          }
          if ( v12 == 10 )
          {
            ++v27;
LABEL_110:
            if ( v37 > v31 )
              v31 = v37;
            v37 = 0LL;
            goto LABEL_115;
          }
        }
        v13 = *__ctype_b_loc();
        if ( (v13[(unsigned __int8)sub_40197D(*(v38 - 1))] & 0x4000) == 0 )
          goto LABEL_119;
        ++v37;
        v14 = *__ctype_b_loc();
        if ( (v14[(unsigned __int8)sub_40197D(*(v38 - 1))] & 0x2000) == 0 )
        {
          v22 = 1;
          goto LABEL_119;
        }
      }
LABEL_115:
      v28 += v22;
      v22 = 0;
LABEL_119:
      if ( !--n )
        goto LABEL_120;
    }
  }
  while ( 1 )
  {
    n = sub_405AD0(a1, dest, 0x4000LL);
    if ( !n )
      break;
    s = dest;
    if ( n == -1LL )
    {
      v8 = __errno_location();
      error(0, *v8, "%s", v39);
      v17 = 0;
      break;
    }
    while ( 1 )
    {
      s = memchr(s, 10, &dest[n] - (_BYTE *)s);
      if ( !s )
        break;
      s = (char *)s + 1;
      ++v27;
    }
    v30 += n;
  }
LABEL_124:
  if ( v19 < (int)(unsigned __int8)byte_60930A )
    v29 = v30;
  sub_401BBD(v27, v28, v29, v30, v31, a2);
  qword_6092E0 += v27;
  qword_6092E8 += v28;
  qword_6092F0 += v29;
  qword_6092F8 += v30;
  if ( v31 > qword_609300 )
    qword_609300 = v31;
  return v17;
}
