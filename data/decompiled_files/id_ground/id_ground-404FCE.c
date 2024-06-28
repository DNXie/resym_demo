#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404FCE(int a1, _DWORD *a2, const char *a3, int a4)
{
  int v6; // [rsp+24h] [rbp-1Ch]
  int j; // [rsp+28h] [rbp-18h]
  int v8; // [rsp+2Ch] [rbp-14h]
  const char **i; // [rsp+30h] [rbp-10h]
  struct group *v10; // [rsp+38h] [rbp-8h]

  v6 = 0;
  if ( a4 != -1 )
  {
    if ( a1 )
      *a2 = a4;
    v6 = 1;
  }
  setgrent();
  while ( 1 )
  {
    *__errno_location() = 0;
    v10 = getgrent();
    if ( !v10 )
      break;
    for ( i = (const char **)v10->gr_mem; *i; ++i )
    {
      if ( !strcmp(a3, *i) )
      {
        for ( j = 0; j < v6 && (!a2 || a2[j] != v10->gr_gid); ++j )
          ;
        if ( j == v6 )
        {
          if ( a1 )
          {
            if ( v6 >= a1 )
              goto LABEL_26;
            a2[v6] = v10->gr_gid;
          }
          if ( v6 == 0x7FFFFFFF )
          {
            *__errno_location() = 75;
            goto LABEL_26;
          }
          ++v6;
        }
      }
    }
  }
  if ( *__errno_location() )
    v6 = -1;
LABEL_26:
  v8 = *__errno_location();
  endgrent();
  *__errno_location() = v8;
  return (unsigned int)v6;
}
