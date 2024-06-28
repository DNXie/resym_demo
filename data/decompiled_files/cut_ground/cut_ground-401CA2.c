#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401CA2(unsigned __int8 *a1)
{
  char *v1; // rax
  unsigned __int64 v2; // rax
  const unsigned __int16 *v3; // rbx
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char v9; // al
  __int64 v10; // rbx
  char *v11; // rax
  char *v12; // rax
  __int64 v13; // rax
  char v16; // [rsp+1Bh] [rbp-65h]
  char v17; // [rsp+1Ch] [rbp-64h]
  char v18; // [rsp+1Dh] [rbp-63h]
  unsigned __int8 v19; // [rsp+1Eh] [rbp-62h]
  char v20; // [rsp+1Fh] [rbp-61h]
  unsigned __int64 v21; // [rsp+20h] [rbp-60h]
  size_t v22; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+30h] [rbp-50h]
  void *base; // [rsp+38h] [rbp-48h]
  size_t nmemb; // [rsp+40h] [rbp-40h]
  size_t i; // [rsp+48h] [rbp-38h]
  unsigned __int64 j; // [rsp+50h] [rbp-30h]
  size_t v28; // [rsp+58h] [rbp-28h]
  void *ptr; // [rsp+60h] [rbp-20h]
  unsigned __int64 v30; // [rsp+68h] [rbp-18h]

  v23 = 1LL;
  v21 = 0LL;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  base = 0LL;
  nmemb = 0LL;
  v22 = 0LL;
  v20 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( *a1 == 45 )
      {
        v20 = 0;
        if ( v18 )
        {
          v1 = gettext("invalid byte or field list");
          error(0, 0, v1);
          sub_4018F6(1);
        }
        v18 = 1;
        ++a1;
        if ( v16 )
          v2 = v21;
        else
          v2 = 1LL;
        v23 = v2;
        v21 = 0LL;
      }
      if ( *a1 == 44 )
        break;
      v3 = *__ctype_b_loc();
      if ( (v3[(unsigned __int8)sub_4017DD(*a1)] & 1) != 0 || !*a1 )
        break;
      if ( (unsigned int)((char)*a1 - 48) > 9 )
      {
        v12 = gettext("invalid byte or field list");
        error(0, 0, v12);
        sub_4018F6(1);
      }
      if ( v20 != 1 || !s )
        s = (char *)a1;
      v20 = 1;
      if ( v18 )
        v17 = 1;
      else
        v16 = 1;
      if ( v21 > 0x1999999999999999LL || (char)*a1 - 48 + 10 * v21 < v21 )
      {
        v9 = 1;
      }
      else
      {
        v21 = 10 * v21 + (char)*a1 - 48;
        v9 = 0;
      }
      if ( v9 )
      {
        v28 = strspn(s, "0123456789");
        ptr = (void *)sub_4073D3(s, v28);
        if ( dword_60B2C8 == 1 )
        {
          v10 = sub_4050EA(ptr);
          v11 = gettext("byte offset %s is too large");
        }
        else
        {
          v10 = sub_4050EA(ptr);
          v11 = gettext("field number %s is too large");
        }
        error(0, 0, v11, v10);
        free(ptr);
        exit(1);
      }
      ++a1;
    }
    v20 = 0;
    if ( v18 )
    {
      v18 = 0;
      if ( v16 != 1 && v17 != 1 )
      {
        v4 = gettext("invalid range with no endpoint: -");
        error(0, 0, v4);
        sub_4018F6(1);
      }
      if ( v17 != 1 )
      {
        qword_60B2B8 = v23;
        v19 = 1;
      }
      else
      {
        if ( v21 < v23 )
        {
          v5 = gettext("invalid decreasing range");
          error(0, 0, v5);
          sub_4018F6(1);
        }
        if ( qword_60B2B8 )
        {
          if ( v23 < qword_60B2B8 )
          {
            if ( qword_60B2B8 > v21 )
            {
              if ( !v23 || !v21 )
              {
                v6 = gettext("fields and positions are numbered from 1");
                error(0, 0, v6);
                sub_4018F6(1);
              }
              if ( nmemb >= v22 )
                base = (void *)sub_40715D(base, &v22, 16LL);
              *((_QWORD *)base + 2 * nmemb) = v23;
              *((_QWORD *)base + 2 * nmemb++ + 1) = v21;
            }
            else
            {
              qword_60B2B8 = v23;
            }
            v19 = 1;
          }
        }
        else
        {
          if ( !v23 || !v21 )
          {
            v7 = gettext("fields and positions are numbered from 1");
            error(0, 0, v7);
            sub_4018F6(1);
          }
          if ( nmemb >= v22 )
            base = (void *)sub_40715D(base, &v22, 16LL);
          *((_QWORD *)base + 2 * nmemb) = v23;
          *((_QWORD *)base + 2 * nmemb++ + 1) = v21;
          v19 = 1;
        }
        v21 = 0LL;
      }
    }
    else
    {
      if ( !v21 )
      {
        v8 = gettext("fields and positions are numbered from 1");
        error(0, 0, v8);
        sub_4018F6(1);
      }
      if ( nmemb >= v22 )
        base = (void *)sub_40715D(base, &v22, 16LL);
      *((_QWORD *)base + 2 * nmemb) = v21;
      *((_QWORD *)base + 2 * nmemb++ + 1) = v21;
      v21 = 0LL;
      v19 = 1;
    }
    if ( !*a1 )
      break;
    ++a1;
    v16 = 0;
    v17 = 0;
  }
  qword_60B2B0 = 0LL;
  for ( i = 0LL; i < nmemb; ++i )
  {
    if ( *((_QWORD *)base + 2 * i + 1) > (unsigned __int64)qword_60B2B0 )
      qword_60B2B0 = *((_QWORD *)base + 2 * i + 1);
  }
  if ( qword_60B2B0 < (unsigned __int64)qword_60B2B8 )
    qword_60B2B0 = qword_60B2B8;
  qword_60B2C0 = sub_4072DC(((unsigned __int64)qword_60B2B0 >> 3) + 1);
  qsort(base, nmemb, 0x10uLL, (__compar_fn_t)compar);
  for ( i = 0LL; i < nmemb; ++i )
  {
    if ( byte_60B2CD )
      v13 = *((_QWORD *)base + 2 * i + 1) + 1LL;
    else
      v13 = *((_QWORD *)base + 2 * i);
    v30 = v13;
    if ( byte_60B2CF && !sub_401B27(v30) )
      sub_401A83(v30);
    for ( j = *((_QWORD *)base + 2 * i); *((_QWORD *)base + 2 * i + 1) >= j; ++j )
      sub_401ADA(j);
  }
  if ( byte_60B2CF && byte_60B2CD != 1 && qword_60B2B8 && !sub_401B27(qword_60B2B8) )
    sub_401A83(qword_60B2B8);
  free(base);
  return v19;
}
