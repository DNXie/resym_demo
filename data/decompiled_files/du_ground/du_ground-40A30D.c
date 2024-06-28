#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_40A30D(unsigned __int64 a1, char *a2, __int16 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  int v5; // eax
  int v6; // eax
  long double v7; // fst7
  long double v8; // fst7
  long double v9; // fst7
  int v10; // eax
  bool v11; // al
  bool v12; // al
  bool v13; // al
  bool v14; // al
  char *v15; // rax
  char v16; // dl
  char *v17; // rax
  char *v18; // rax
  long double v20; // [rsp+0h] [rbp-130h]
  int v24; // [rsp+44h] [rbp-ECh]
  int v25; // [rsp+48h] [rbp-E8h]
  int v26; // [rsp+4Ch] [rbp-E4h]
  int v27; // [rsp+50h] [rbp-E0h]
  unsigned int v28; // [rsp+54h] [rbp-DCh]
  unsigned int v29; // [rsp+5Ch] [rbp-D4h]
  unsigned int v30; // [rsp+60h] [rbp-D0h]
  unsigned __int64 v31; // [rsp+68h] [rbp-C8h]
  char *dest; // [rsp+70h] [rbp-C0h]
  char *desta; // [rsp+70h] [rbp-C0h]
  char *v34; // [rsp+78h] [rbp-B8h]
  char *v35; // [rsp+80h] [rbp-B0h]
  char *src; // [rsp+88h] [rbp-A8h]
  size_t v37; // [rsp+90h] [rbp-A0h]
  const char *v38; // [rsp+98h] [rbp-98h]
  unsigned __int64 n; // [rsp+A0h] [rbp-90h]
  size_t v40; // [rsp+A8h] [rbp-88h]
  unsigned __int64 i; // [rsp+B0h] [rbp-80h]
  unsigned __int8 *v42; // [rsp+B8h] [rbp-78h]
  struct lconv *v43; // [rsp+C0h] [rbp-70h]
  size_t v44; // [rsp+C8h] [rbp-68h]
  unsigned __int64 v45; // [rsp+E8h] [rbp-48h]
  long double v46; // [rsp+F0h] [rbp-40h]
  long double v47; // [rsp+110h] [rbp-20h]
  long double v48; // [rsp+110h] [rbp-20h]

  v27 = a3 & 3;
  if ( (a3 & 0x20) != 0 )
    v5 = 1024;
  else
    v5 = 1000;
  v28 = v5;
  v25 = -1;
  src = ".";
  v37 = 1LL;
  v38 = (const char *)&unk_41749B;
  v43 = localeconv();
  v44 = strlen(v43->decimal_point);
  if ( v44 && v44 <= 0x10 )
  {
    src = v43->decimal_point;
    v37 = v44;
  }
  v42 = (unsigned __int8 *)v43->grouping;
  if ( strlen(v43->thousands_sep) <= 0x10 )
    v38 = v43->thousands_sep;
  v34 = a2 + 648;
  dest = a2 + 648;
  if ( a5 > a4 )
  {
    if ( a4 && !(a5 % a4) )
    {
      v45 = 2 * (10 * (a1 % (a5 / a4)) % (a5 / a4));
      v31 = a1 / (a5 / a4);
      v24 = 10 * (a1 % (a5 / a4)) / (a5 / a4);
      if ( v45 >= a5 / a4 )
      {
        if ( a5 / a4 >= v45 )
          v6 = 2;
        else
          v6 = 3;
      }
      else
      {
        v6 = v45 != 0;
      }
      v26 = v6;
LABEL_32:
      if ( (a3 & 0x10) != 0 )
      {
        v25 = 0;
        if ( v28 <= v31 )
        {
          do
          {
            v29 = 10 * (v31 % v28) + v24;
            v30 = 2 * (v29 % v28) + (v26 >> 1);
            v31 /= v28;
            v24 = v29 / v28;
            if ( v30 >= v28 )
            {
              if ( v26 + v30 <= v28 )
                v10 = 2;
              else
                v10 = 3;
            }
            else
            {
              v10 = v26 + v30 != 0;
            }
            v26 = v10;
            ++v25;
          }
          while ( v28 <= v31 && v25 < 8 );
          if ( v31 <= 9 )
          {
            if ( v27 == 1 )
            {
              v11 = (int)(((v29 / v28) & 1) + v10) > 2;
            }
            else
            {
              v12 = !v27 && v10 > 0;
              v11 = v12;
            }
            if ( v11 )
            {
              ++v24;
              v26 = 0;
              if ( v24 == 10 )
              {
                ++v31;
                v24 = 0;
              }
            }
            if ( v31 <= 9 && (v24 || (a3 & 8) == 0) )
            {
              a2[647] = v24 + 48;
              dest = &a2[-v37 + 647];
              memcpy(dest, src, v37);
              v26 = 0;
              v24 = 0;
            }
          }
        }
      }
      if ( v27 == 1 )
      {
        v13 = ((v31 & 1) + v26 != 0) + v24 > 5;
      }
      else
      {
        v14 = !v27 && v24 + v26 > 0;
        v13 = v14;
      }
      if ( v13 )
      {
        ++v31;
        if ( (a3 & 0x10) != 0 && v28 == v31 && v25 < 8 )
        {
          ++v25;
          if ( (a3 & 8) == 0 )
          {
            desta = dest - 1;
            *desta = 48;
            dest = &desta[-v37];
            memcpy(dest, src, v37);
          }
          v31 = 1LL;
        }
      }
      v35 = dest;
      do
      {
        *--dest = v31 % 0xA + 48;
        v31 /= 0xAuLL;
      }
      while ( v31 );
      goto LABEL_72;
    }
  }
  else if ( !(a4 % a5) )
  {
    v31 = a4 / a5 * a1;
    if ( v31 / (a4 / a5) == a1 )
    {
      v24 = 0;
      v26 = 0;
      goto LABEL_32;
    }
  }
  v47 = (long double)a1 * ((long double)a4 / (long double)a5);
  if ( (a3 & 0x10) != 0 )
  {
    *(_QWORD *)&v46 = 0x8000000000000000LL;
    DWORD2(v46) = 0x3FFF;
    v25 = 0;
    do
    {
      v46 = (long double)v28 * v46;
      ++v25;
    }
    while ( v47 >= (long double)v28 * v46 && v25 < 8 );
    v48 = v47 / v46;
    *(_QWORD *)&v20 = *(_QWORD *)&v48;
    DWORD2(v20) = DWORD2(v48);
    v8 = sub_40A0DF(v27, v20);
    sprintf(a2, "%.1Lf", v8);
    n = strlen(a2);
    v40 = v37 + 1;
    if ( ((a3 & 0x20) == 0) + v37 + 1 + 1 < n || (a3 & 8) != 0 && a2[n - 1] == 48 )
    {
      v9 = sub_40A0DF(v27, v48 * 10.0);
      sprintf(a2, "%.0Lf", v9 / 10.0);
      n = strlen(a2);
      v40 = 0LL;
    }
  }
  else
  {
    *(_QWORD *)&v20 = *(_QWORD *)&v47;
    DWORD2(v20) = DWORD2(v47);
    v7 = sub_40A0DF(v27, v20);
    sprintf(a2, "%.0Lf", v7);
    n = strlen(a2);
    v40 = 0LL;
  }
  dest = &v34[-n];
  memmove(&v34[-n], a2, n);
  v35 = &v34[-v40];
LABEL_72:
  if ( (a3 & 4) != 0 )
    dest = sub_40A1D6(dest, v35 - dest, v42, v38);
  if ( (a3 & 0x80) != 0 )
  {
    if ( v25 < 0 )
    {
      v25 = 0;
      for ( i = 1LL; i < a5; i *= v28 )
      {
        if ( ++v25 == 8 )
          break;
      }
    }
    if ( v25 | a3 & 0x100 && (a3 & 0x40) != 0 )
    {
      v34 = a2 + 649;
      a2[648] = 32;
    }
    if ( v25 )
    {
      v15 = v34++;
      if ( (a3 & 0x20) == 0 && v25 == 1 )
        v16 = 107;
      else
        v16 = byte_417490[v25];
      *v15 = v16;
    }
    if ( (a3 & 0x100) != 0 )
    {
      if ( (a3 & 0x20) != 0 && v25 )
      {
        v17 = v34++;
        *v17 = 105;
      }
      v18 = v34++;
      *v18 = 66;
    }
  }
  *v34 = 0;
  return dest;
}
