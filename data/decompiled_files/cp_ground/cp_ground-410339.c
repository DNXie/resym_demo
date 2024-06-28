#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_410339(const char *a1, int a2)
{
  size_t v2; // rax
  size_t v3; // rax
  int v5; // [rsp+14h] [rbp-7Ch]
  char *v6; // [rsp+18h] [rbp-78h]
  char *i; // [rsp+20h] [rbp-70h]
  char *j; // [rsp+20h] [rbp-70h]
  char *v9; // [rsp+28h] [rbp-68h]
  unsigned __int64 v10; // [rsp+30h] [rbp-60h] BYREF
  char v11; // [rsp+38h] [rbp-58h]
  int v12; // [rsp+3Ch] [rbp-54h] BYREF
  char k; // [rsp+44h] [rbp-4Ch]
  char *v14; // [rsp+48h] [rbp-48h]
  __int64 v15; // [rsp+50h] [rbp-40h]
  char v16; // [rsp+58h] [rbp-38h]
  wint_t wc; // [rsp+5Ch] [rbp-34h]
  unsigned __int64 v18; // [rsp+78h] [rbp-18h]

  v18 = __readfsqword(0x28u);
  v9 = strdup(a1);
  if ( !v9 )
    sub_412847();
  if ( __ctype_get_mb_cur_max() <= 1 )
  {
    if ( a2 )
    {
      for ( i = v9; *i && ((*__ctype_b_loc())[(unsigned __int8)*i] & 0x2000) != 0; ++i )
        ;
      v3 = strlen(i);
      memmove(v9, i, v3 + 1);
    }
    if ( a2 != 1 )
    {
      for ( j = &v9[strlen(v9) - 1]; j >= v9 && ((*__ctype_b_loc())[(unsigned __int8)*j] & 0x2000) != 0; --j )
        *j = 0;
    }
  }
  else
  {
    if ( a2 )
    {
      v14 = v9;
      v10 = (unsigned __int64)&v9[strlen(v9)];
      v11 = 0;
      memset(&v12, 0, 8uLL);
      for ( k = 0; (unsigned __int64)v14 < v10; k = 0 )
      {
        sub_410157((__int64)&v10);
        if ( !v16 || !iswspace(wc) )
          break;
        v14 += v15;
      }
      v2 = strlen(v14);
      memmove(v9, v14, v2 + 1);
    }
    if ( a2 != 1 )
    {
      v5 = 0;
      v14 = v9;
      v10 = (unsigned __int64)&v9[strlen(v9)];
      v11 = 0;
      memset(&v12, 0, 8uLL);
      k = 0;
      while ( (unsigned __int64)v14 < v10 )
      {
        sub_410157((__int64)&v10);
        if ( v5 || !v16 || !iswspace(wc) )
        {
          if ( v5 || v16 == 1 && iswspace(wc) )
          {
            if ( v5 != 1 || v16 == 1 && iswspace(wc) )
            {
              if ( v5 == 1 && v16 && iswspace(wc) )
              {
                v5 = 2;
                v6 = v14;
              }
              else if ( v5 != 2 || !v16 || !iswspace(wc) )
              {
                v5 = 1;
              }
            }
          }
          else
          {
            v5 = 1;
          }
        }
        v14 += v15;
        k = 0;
      }
      if ( v5 == 2 )
        *v6 = 0;
    }
  }
  return v9;
}
