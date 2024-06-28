#include "/share/binary_recovery/clang-parser/defs.hh"
char sub_401C5D()
{
  FILE *v0; // rax
  __int64 v1; // rax
  char *v2; // rax
  char *v3; // rbx
  int *v4; // rax
  char *v5; // rax
  bool v6; // al
  char *v7; // rbx
  int *v8; // rax
  char v10; // [rsp+3h] [rbp-3Dh]
  int c; // [rsp+4h] [rbp-3Ch]
  FILE *stream; // [rsp+8h] [rbp-38h]
  unsigned __int64 v13; // [rsp+10h] [rbp-30h]
  __int64 v14; // [rsp+18h] [rbp-28h]
  unsigned __int64 v15; // [rsp+20h] [rbp-20h]

  v0 = sub_401ACE(0LL);
  stream = v0;
  if ( v0 )
  {
LABEL_2:
    v10 = 1;
    v13 = 0LL;
    v14 = 0LL;
    while ( 1 )
    {
      do
      {
        LODWORD(v0) = getc_unlocked(stream);
        c = (int)v0;
        if ( (int)v0 >= 0 )
          break;
        v0 = sub_401ACE(stream);
        stream = v0;
      }
      while ( v0 );
      if ( v10 )
      {
        if ( c == 9 )
        {
          if ( qword_607268 )
          {
            v15 = qword_607268 - v13 % qword_607268 + v13;
          }
          else
          {
            do
            {
              if ( v14 == qword_607280 )
              {
                v15 = v13 + 1;
                goto LABEL_14;
              }
              v1 = v14++;
            }
            while ( v13 >= *(_QWORD *)(qword_607270 + 8 * v1) );
            v15 = *(_QWORD *)(qword_607270 + 8 * v1);
          }
LABEL_14:
          if ( v15 < v13 )
          {
            v2 = gettext("input line is too long");
            error(1, 0, v2);
          }
          while ( ++v13 < v15 )
          {
            if ( putchar_unlocked(32) < 0 )
            {
              v3 = gettext("write error");
              v4 = __errno_location();
              error(1, *v4, v3);
            }
          }
          c = 32;
        }
        else if ( c == 8 )
        {
          v13 -= v13 != 0;
          v14 -= v14 != 0;
        }
        else if ( !++v13 )
        {
          v5 = gettext("input line is too long");
          error(1, 0, v5);
        }
        v6 = byte_607260 || ((*__ctype_b_loc())[c] & 1) != 0;
        LOBYTE(v0) = ((unsigned __int8)v10 & v6) != 0;
        v10 = (char)v0;
      }
      if ( c < 0 )
        break;
      if ( putchar_unlocked(c) < 0 )
      {
        v7 = gettext("write error");
        v8 = __errno_location();
        error(1, *v8, v7);
      }
      if ( c == 10 )
        goto LABEL_2;
    }
  }
  return (char)v0;
}
