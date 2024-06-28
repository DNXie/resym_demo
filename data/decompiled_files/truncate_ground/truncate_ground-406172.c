#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406172(const char *a1, char **a2, int a3, intmax_t *a4, const char *a5)
{
  char **v5; // rax
  int v7; // eax
  int v8; // eax
  unsigned int v12; // [rsp+38h] [rbp-28h]
  int v13; // [rsp+3Ch] [rbp-24h]
  int v14; // [rsp+40h] [rbp-20h]
  int v15; // [rsp+44h] [rbp-1Ch]
  char v16; // [rsp+48h] [rbp-18h] BYREF
  intmax_t v17; // [rsp+50h] [rbp-10h] BYREF
  char **endptr; // [rsp+58h] [rbp-8h]

  v12 = 0;
  if ( a3 < 0 || a3 > 36 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "../../src/lib/xstrtol.c", 0x53u, "xstrtoimax");
  if ( a2 )
    v5 = a2;
  else
    v5 = (char **)&v16;
  endptr = v5;
  *__errno_location() = 0;
  v17 = strtoimax(a1, endptr, a3);
  if ( *endptr == a1 )
  {
    if ( !a5 || !**endptr || !strchr(a5, **endptr) )
      return 4LL;
    v17 = 1LL;
  }
  else if ( *__errno_location() )
  {
    if ( *__errno_location() != 34 )
      return 4LL;
    v12 = 1;
  }
  if ( !a5 )
  {
    *a4 = v17;
    return v12;
  }
  if ( !**endptr )
    goto LABEL_71;
  v13 = 1024;
  v14 = 1;
  if ( !strchr(a5, **endptr) )
  {
    *a4 = v17;
    return v12 | 2;
  }
  if ( strchr(a5, 48) )
  {
    v7 = (*endptr)[1];
    if ( v7 == 68 )
      goto LABEL_30;
    if ( v7 != 105 )
    {
      if ( v7 != 66 )
        goto LABEL_31;
LABEL_30:
      v13 = 1000;
      v14 = 2;
      goto LABEL_31;
    }
    if ( (*endptr)[2] == 66 )
      v14 = 3;
  }
LABEL_31:
  v8 = **endptr;
  if ( v8 != 89 )
  {
    if ( v8 > 89 )
    {
      if ( v8 == 103 )
      {
LABEL_60:
        v15 = sub_406131(&v17, v13, 3);
        goto LABEL_69;
      }
      if ( v8 <= 103 )
      {
        switch ( v8 )
        {
          case 'b':
            v15 = sub_406091(&v17, 512);
            break;
          case 'c':
            v15 = 0;
            break;
          case 'Z':
            v15 = sub_406131(&v17, v13, 7);
            break;
          default:
            goto LABEL_68;
        }
        goto LABEL_69;
      }
      if ( v8 == 109 )
        goto LABEL_62;
      if ( v8 > 109 )
      {
        if ( v8 != 116 )
        {
          if ( v8 != 119 )
            goto LABEL_68;
          v15 = sub_406091(&v17, 2);
          goto LABEL_69;
        }
LABEL_64:
        v15 = sub_406131(&v17, v13, 4);
        goto LABEL_69;
      }
      if ( v8 != 107 )
        goto LABEL_68;
    }
    else if ( v8 != 75 )
    {
      if ( v8 <= 75 )
      {
        if ( v8 == 69 )
        {
          v15 = sub_406131(&v17, v13, 6);
          goto LABEL_69;
        }
        if ( v8 != 71 )
        {
          if ( v8 != 66 )
          {
LABEL_68:
            *a4 = v17;
            return v12 | 2;
          }
          v15 = sub_406091(&v17, 1024);
          goto LABEL_69;
        }
        goto LABEL_60;
      }
      if ( v8 == 80 )
      {
        v15 = sub_406131(&v17, v13, 5);
        goto LABEL_69;
      }
      if ( v8 != 84 )
      {
        if ( v8 != 77 )
          goto LABEL_68;
LABEL_62:
        v15 = sub_406131(&v17, v13, 2);
        goto LABEL_69;
      }
      goto LABEL_64;
    }
    v15 = sub_406131(&v17, v13, 1);
    goto LABEL_69;
  }
  v15 = sub_406131(&v17, v13, 8);
LABEL_69:
  v12 |= v15;
  *endptr += v14;
  if ( **endptr )
    v12 |= 2u;
LABEL_71:
  *a4 = v17;
  return v12;
}
