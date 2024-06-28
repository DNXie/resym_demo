#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40F12B(const char *a1, _BYTE *a2, __int64 a3, unsigned __int64 *a4, int a5, char a6)
{
  size_t v6; // rax
  _BYTE *v7; // rax
  size_t v8; // rax
  void *dest; // [rsp+20h] [rbp-80h]
  _BYTE *desta; // [rsp+20h] [rbp-80h]
  char v16; // [rsp+36h] [rbp-6Ah]
  char v17; // [rsp+37h] [rbp-69h]
  __int64 v18; // [rsp+38h] [rbp-68h]
  size_t size; // [rsp+40h] [rbp-60h]
  char *v20; // [rsp+48h] [rbp-58h]
  wchar_t *pwcs; // [rsp+50h] [rbp-50h]
  void *src; // [rsp+58h] [rbp-48h]
  unsigned __int64 v23; // [rsp+60h] [rbp-40h]
  size_t v24; // [rsp+68h] [rbp-38h]
  unsigned __int64 v25; // [rsp+70h] [rbp-30h]
  __int64 v26; // [rsp+80h] [rbp-20h]
  size_t n; // [rsp+88h] [rbp-18h]
  size_t na; // [rsp+88h] [rbp-18h]
  unsigned __int64 v29; // [rsp+90h] [rbp-10h]
  size_t v30; // [rsp+98h] [rbp-8h]

  v18 = -1LL;
  v6 = strlen(a1);
  size = v6 + 1;
  v20 = 0LL;
  pwcs = 0LL;
  src = (void *)a1;
  v23 = v6;
  v24 = v6;
  v25 = 0LL;
  v16 = 0;
  v17 = 0;
  if ( __ctype_get_mb_cur_max() > 1 )
  {
    n = mbstowcs(0LL, a1, 0LL);
    if ( n == -1LL )
    {
      if ( (a6 & 1) == 0 )
        goto LABEL_32;
      goto LABEL_19;
    }
    na = n + 1;
    pwcs = (wchar_t *)malloc(4 * na);
    if ( !pwcs )
    {
      if ( (a6 & 1) == 0 )
        goto LABEL_32;
      goto LABEL_19;
    }
    if ( mbstowcs(pwcs, a1, na) )
    {
      pwcs[na - 1] = 0;
      v17 = 1;
      v16 = sub_40F00F((wint_t *)pwcs);
      v23 = wcswidth(pwcs, na);
    }
  }
  if ( v17 && (v16 || *a4 < v23) )
  {
    if ( v16 )
      size = wcstombs(0LL, pwcs, 0LL) + 1;
    v20 = (char *)malloc(size);
    if ( v20 )
    {
      src = v20;
      v23 = sub_40F05D(pwcs, *a4);
      v24 = wcstombs(v20, pwcs, size);
    }
    else if ( (a6 & 1) == 0 )
    {
      goto LABEL_32;
    }
  }
LABEL_19:
  if ( *a4 < v23 )
  {
    v23 = *a4;
    v24 = *a4;
  }
  if ( *a4 > v23 )
    v25 = *a4 - v23;
  *a4 = v23;
  v18 = v24 + v25;
  if ( a3 )
  {
    v29 = (unsigned __int64)&a2[a3 - 1];
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        v26 = 0LL;
        v7 = sub_40F0E2(a2, v29, v25);
      }
      else
      {
        v26 = v25 >> 1;
        v7 = sub_40F0E2(a2, v29, (v25 >> 1) + (v25 & 1));
      }
    }
    else
    {
      v26 = v25;
      v7 = sub_40F0E2(a2, v29, 0LL);
    }
    dest = v7;
    v30 = v29 - (_QWORD)v7;
    v8 = v24;
    if ( v30 <= v24 )
      v8 = v30;
    desta = mempcpy(dest, src, v8);
    sub_40F0E2(desta, v29, v26);
  }
LABEL_32:
  free(pwcs);
  free(v20);
  return v18;
}
