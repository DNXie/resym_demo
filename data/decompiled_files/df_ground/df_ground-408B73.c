#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_408B73(const char *a1, int a2, double a3)
{
  size_t v3; // rax
  size_t v4; // rax
  int v6; // [rsp+14h] [rbp-7Ch]
  char *v7; // [rsp+18h] [rbp-78h]
  char *i; // [rsp+20h] [rbp-70h]
  char *j; // [rsp+20h] [rbp-70h]
  char *v10; // [rsp+28h] [rbp-68h]
  unsigned __int64 v11; // [rsp+30h] [rbp-60h] BYREF
  char v12; // [rsp+38h] [rbp-58h]
  int v13; // [rsp+3Ch] [rbp-54h] BYREF
  char k; // [rsp+44h] [rbp-4Ch]
  char *v15; // [rsp+48h] [rbp-48h]
  __int64 v16; // [rsp+50h] [rbp-40h]
  char v17; // [rsp+58h] [rbp-38h]
  wint_t wc; // [rsp+5Ch] [rbp-34h]
  unsigned __int64 v19; // [rsp+78h] [rbp-18h]

  v19 = __readfsqword(0x28u);
  v10 = strdup(a1);
  if ( !v10 )
    sub_4099EE(a3);
  if ( __ctype_get_mb_cur_max() <= 1 )
  {
    if ( a2 )
    {
      for ( i = v10; *i && ((*__ctype_b_loc())[(unsigned __int8)*i] & 0x2000) != 0; ++i )
        ;
      v4 = strlen(i);
      memmove(v10, i, v4 + 1);
    }
    if ( a2 != 1 )
    {
      for ( j = &v10[strlen(v10) - 1]; j >= v10 && ((*__ctype_b_loc())[(unsigned __int8)*j] & 0x2000) != 0; --j )
        *j = 0;
    }
  }
  else
  {
    if ( a2 )
    {
      v15 = v10;
      v11 = (unsigned __int64)&v10[strlen(v10)];
      v12 = 0;
      memset(&v13, 0, 8uLL);
      for ( k = 0; (unsigned __int64)v15 < v11; k = 0 )
      {
        sub_408991((__int64)&v11);
        if ( !v17 || !iswspace(wc) )
          break;
        v15 += v16;
      }
      v3 = strlen(v15);
      memmove(v10, v15, v3 + 1);
    }
    if ( a2 != 1 )
    {
      v6 = 0;
      v15 = v10;
      v11 = (unsigned __int64)&v10[strlen(v10)];
      v12 = 0;
      memset(&v13, 0, 8uLL);
      k = 0;
      while ( (unsigned __int64)v15 < v11 )
      {
        sub_408991((__int64)&v11);
        if ( v6 || !v17 || !iswspace(wc) )
        {
          if ( v6 || v17 == 1 && iswspace(wc) )
          {
            if ( v6 != 1 || v17 == 1 && iswspace(wc) )
            {
              if ( v6 == 1 && v17 && iswspace(wc) )
              {
                v6 = 2;
                v7 = v15;
              }
              else if ( v6 != 2 || !v17 || !iswspace(wc) )
              {
                v6 = 1;
              }
            }
          }
          else
          {
            v6 = 1;
          }
        }
        v15 += v16;
        k = 0;
      }
      if ( v6 == 2 )
        *v7 = 0;
    }
  }
  return v10;
}
