#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_408BE4(const char *a1, char **a2, int a3, uintmax_t *a4, const char *a5)
{
  char **v5; // rax
  int v7; // eax
  int v8; // eax
  unsigned __int8 i; // [rsp+3Fh] [rbp-31h]
  unsigned int v13; // [rsp+40h] [rbp-30h]
  int v14; // [rsp+44h] [rbp-2Ch]
  int v15; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+4Ch] [rbp-24h]
  char v17; // [rsp+50h] [rbp-20h] BYREF
  uintmax_t v18; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int8 *v19; // [rsp+60h] [rbp-10h]
  char **endptr; // [rsp+68h] [rbp-8h]

  v13 = 0;
  if ( a3 < 0 || a3 > 36 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "../../src/lib/xstrtol.c", 0x53u, "xstrtoumax");
  if ( a2 )
    v5 = a2;
  else
    v5 = (char **)&v17;
  endptr = v5;
  v19 = (unsigned __int8 *)a1;
  for ( i = *a1; ((*__ctype_b_loc())[i] & 0x2000) != 0; i = *v19 )
    ++v19;
  if ( i == 45 )
    return 4LL;
  *__errno_location() = 0;
  v18 = strtoumax(a1, endptr, a3);
  if ( *endptr == a1 )
  {
    if ( !a5 || !**endptr || !strchr(a5, **endptr) )
      return 4LL;
    v18 = 1LL;
  }
  else if ( *__errno_location() )
  {
    if ( *__errno_location() != 34 )
      return 4LL;
    v13 = 1;
  }
  if ( !a5 )
  {
    *a4 = v18;
    return v13;
  }
  if ( !**endptr )
    goto LABEL_76;
  v14 = 1024;
  v15 = 1;
  if ( !strchr(a5, **endptr) )
  {
    *a4 = v18;
    return v13 | 2;
  }
  if ( strchr(a5, 48) )
  {
    v7 = (*endptr)[1];
    if ( v7 == 68 )
      goto LABEL_35;
    if ( v7 != 105 )
    {
      if ( v7 != 66 )
        goto LABEL_36;
LABEL_35:
      v14 = 1000;
      v15 = 2;
      goto LABEL_36;
    }
    if ( (*endptr)[2] == 66 )
      v15 = 3;
  }
LABEL_36:
  v8 = **endptr;
  if ( v8 != 89 )
  {
    if ( v8 > 89 )
    {
      if ( v8 == 103 )
      {
LABEL_65:
        v16 = sub_408BA3(&v18, v14, 3);
        goto LABEL_74;
      }
      if ( v8 <= 103 )
      {
        switch ( v8 )
        {
          case 'b':
            v16 = sub_408B44(&v18, 512);
            break;
          case 'c':
            v16 = 0;
            break;
          case 'Z':
            v16 = sub_408BA3(&v18, v14, 7);
            break;
          default:
            goto LABEL_73;
        }
        goto LABEL_74;
      }
      if ( v8 == 109 )
        goto LABEL_67;
      if ( v8 > 109 )
      {
        if ( v8 != 116 )
        {
          if ( v8 != 119 )
            goto LABEL_73;
          v16 = sub_408B44(&v18, 2);
          goto LABEL_74;
        }
LABEL_69:
        v16 = sub_408BA3(&v18, v14, 4);
        goto LABEL_74;
      }
      if ( v8 != 107 )
        goto LABEL_73;
    }
    else if ( v8 != 75 )
    {
      if ( v8 <= 75 )
      {
        if ( v8 == 69 )
        {
          v16 = sub_408BA3(&v18, v14, 6);
          goto LABEL_74;
        }
        if ( v8 != 71 )
        {
          if ( v8 != 66 )
          {
LABEL_73:
            *a4 = v18;
            return v13 | 2;
          }
          v16 = sub_408B44(&v18, 1024);
          goto LABEL_74;
        }
        goto LABEL_65;
      }
      if ( v8 == 80 )
      {
        v16 = sub_408BA3(&v18, v14, 5);
        goto LABEL_74;
      }
      if ( v8 != 84 )
      {
        if ( v8 != 77 )
          goto LABEL_73;
LABEL_67:
        v16 = sub_408BA3(&v18, v14, 2);
        goto LABEL_74;
      }
      goto LABEL_69;
    }
    v16 = sub_408BA3(&v18, v14, 1);
    goto LABEL_74;
  }
  v16 = sub_408BA3(&v18, v14, 8);
LABEL_74:
  v13 |= v16;
  *endptr += v15;
  if ( **endptr )
    v13 |= 2u;
LABEL_76:
  *a4 = v18;
  return v13;
}
