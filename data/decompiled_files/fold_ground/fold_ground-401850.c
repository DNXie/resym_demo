#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401850(const char *a1, unsigned __int64 a2)
{
  int *v2; // rax
  __int64 result; // rax
  unsigned __int64 i; // rax
  const unsigned __int16 *v5; // rbx
  size_t v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h]
  int v8; // [rsp+20h] [rbp-40h]
  int errnum; // [rsp+24h] [rbp-3Ch]
  FILE *stream; // [rsp+28h] [rbp-38h]
  unsigned __int64 v11; // [rsp+30h] [rbp-30h]
  size_t n; // [rsp+38h] [rbp-28h]
  size_t v13; // [rsp+40h] [rbp-20h]
  size_t v14; // [rsp+40h] [rbp-20h]
  size_t v15; // [rsp+48h] [rbp-18h]

  v11 = 0LL;
  n = 0LL;
  if ( !strcmp(a1, "-") )
  {
    stream = (FILE *)stdin;
    byte_607262 = 1;
  }
  else
  {
    stream = fopen(a1, "r");
  }
  if ( !stream )
    goto LABEL_5;
  sub_402115(stream, 2LL);
LABEL_27:
  while ( 1 )
  {
    v8 = getc_unlocked(stream);
    if ( v8 == -1 )
      break;
    if ( n + 1 >= qword_607268 )
      ptr = (void *)sub_404422(ptr, &qword_607268);
    if ( v8 == 10 )
    {
      *((_BYTE *)ptr + n) = 10;
      fwrite_unlocked(ptr, 1uLL, n + 1, stdout);
      n = 0LL;
      v11 = 0LL;
    }
    else
    {
LABEL_11:
      for ( i = sub_4017E7(v11, v8); ; i = sub_4017E7(0LL, v8) )
      {
        v11 = i;
        if ( i <= a2 )
          break;
        if ( byte_607260 )
        {
          v7 = 0;
          v13 = n;
          while ( v13 )
          {
            --v13;
            v5 = *__ctype_b_loc();
            if ( (v5[(unsigned __int8)sub_4015CD(*((_BYTE *)ptr + v13))] & 1) != 0 )
            {
              v7 = 1;
              break;
            }
          }
          if ( v7 )
          {
            v14 = v13 + 1;
            fwrite_unlocked(ptr, 1uLL, v14, stdout);
            putchar_unlocked(10);
            memmove(ptr, (char *)ptr + v14, n - v14);
            n -= v14;
            v15 = 0LL;
            v11 = 0LL;
            while ( v15 < n )
              v11 = sub_4017E7(v11, *((_BYTE *)ptr + v15++));
            goto LABEL_11;
          }
        }
        if ( !n )
        {
          n = 1LL;
          *(_BYTE *)ptr = v8;
          goto LABEL_27;
        }
        *((_BYTE *)ptr + n) = 10;
        fwrite_unlocked(ptr, 1uLL, n + 1, stdout);
        n = 0LL;
      }
      v6 = n++;
      *((_BYTE *)ptr + v6) = v8;
    }
  }
  errnum = *__errno_location();
  if ( n )
    fwrite_unlocked(ptr, 1uLL, n, stdout);
  if ( ferror_unlocked(stream) )
  {
    error(0, errnum, "%s", a1);
    if ( strcmp(a1, "-") )
      sub_404A4F(stream);
    result = 0LL;
  }
  else
  {
    if ( strcmp(a1, "-") && (unsigned int)sub_404A4F(stream) == -1 )
    {
LABEL_5:
      v2 = __errno_location();
      error(0, *v2, "%s", a1);
      return 0LL;
    }
    result = 1LL;
  }
  return result;
}
