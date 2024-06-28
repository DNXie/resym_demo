#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_401CFF()
{
  const unsigned __int16 **v0; // rax
  __int64 v1; // rax
  char *v2; // rax
  size_t v3; // rax
  char *v4; // rax
  char *v5; // rbx
  int *v6; // rax
  bool v7; // al
  char *v8; // rbx
  int *v9; // rax
  bool v10; // [rsp+0h] [rbp-50h]
  unsigned __int8 v11; // [rsp+1h] [rbp-4Fh]
  char v12; // [rsp+2h] [rbp-4Eh]
  bool v13; // [rsp+3h] [rbp-4Dh]
  int c; // [rsp+4h] [rbp-4Ch]
  FILE *stream; // [rsp+8h] [rbp-48h]
  unsigned __int64 v16; // [rsp+10h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-38h]
  __int64 v18; // [rsp+20h] [rbp-30h]
  size_t n; // [rsp+28h] [rbp-28h]
  _BYTE *ptr; // [rsp+30h] [rbp-20h]

  stream = sub_401B70(0LL);
  if ( stream )
  {
    ptr = (_BYTE *)sub_404822(qword_607290);
LABEL_3:
    v10 = 1;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v11 = 0;
    v12 = 1;
    n = 0LL;
    while ( 1 )
    {
      do
      {
        c = getc_unlocked(stream);
        if ( c >= 0 )
          break;
        stream = sub_401B70(stream);
      }
      while ( stream );
      if ( v10 )
      {
        v0 = __ctype_b_loc();
        v13 = ((*v0)[c] & 1) != 0;
        if ( ((*v0)[c] & 1) != 0 )
        {
          if ( v17 <= v16 )
          {
            if ( qword_607288 )
            {
              v17 = qword_607288 - v16 % qword_607288 + v16;
            }
            else
            {
              do
              {
                if ( v18 == qword_6072A8 )
                {
                  v10 = 0;
                  goto LABEL_16;
                }
                v1 = v18++;
              }
              while ( v16 >= *(_QWORD *)(qword_607298 + 8 * v1) );
              v17 = *(_QWORD *)(qword_607298 + 8 * v1);
            }
          }
LABEL_16:
          if ( v10 )
          {
            if ( v17 < v16 )
            {
              v2 = gettext("input line is too long");
              error(1, 0, v2);
            }
            if ( c == 9 )
            {
              v16 = v17;
              if ( n )
                *ptr = 9;
            }
            else
            {
              ++v16;
              if ( v12 != 1 || v16 != v17 )
              {
                if ( v16 == v17 )
                  v11 = 1;
                v3 = n++;
                ptr[v3] = c;
                v12 = 1;
                goto LABEL_49;
              }
              c = 9;
              *ptr = 9;
            }
            n = v11;
          }
        }
        else if ( c == 8 )
        {
          v16 -= v16 != 0;
          v17 = v16;
          v18 -= v18 != 0;
        }
        else if ( !++v16 )
        {
          v4 = gettext("input line is too long");
          error(1, 0, v4);
        }
        if ( n )
        {
          if ( n > 1 && v11 )
            *ptr = 9;
          if ( fwrite_unlocked(ptr, 1uLL, n, stdout) != n )
          {
            v5 = gettext("write error");
            v6 = __errno_location();
            error(1, *v6, v5);
          }
          n = 0LL;
          v11 = 0;
        }
        v12 = v13;
        v7 = byte_607280 || v13;
        v10 = v10 && v7;
      }
      if ( c < 0 )
      {
        free(ptr);
        return;
      }
      if ( putchar_unlocked(c) < 0 )
      {
        v8 = gettext("write error");
        v9 = __errno_location();
        error(1, *v9, v8);
      }
LABEL_49:
      if ( c == 10 )
        goto LABEL_3;
    }
  }
}
