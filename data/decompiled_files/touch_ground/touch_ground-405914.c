#include "/share/binary_recovery/clang-parser/defs.hh"
char **__fastcall sub_405914(__int64 a1, _BYTE *a2)
{
  char **result; // rax
  bool v3; // al
  bool v4; // al
  char v5; // [rsp+1Dh] [rbp-23h]
  bool v6; // [rsp+1Fh] [rbp-21h]
  _BYTE *i; // [rsp+20h] [rbp-20h]
  _BYTE *v8; // [rsp+20h] [rbp-20h]
  _BYTE *v9; // [rsp+28h] [rbp-18h]
  const char **j; // [rsp+30h] [rbp-10h]
  const char **k; // [rsp+30h] [rbp-10h]
  const char **v12; // [rsp+30h] [rbp-10h]
  const char **l; // [rsp+30h] [rbp-10h]
  const char **m; // [rsp+30h] [rbp-10h]
  const char **n; // [rsp+30h] [rbp-10h]
  __int16 **ii; // [rsp+30h] [rbp-10h]
  const char **v17; // [rsp+30h] [rbp-10h]
  size_t v18; // [rsp+38h] [rbp-8h]

  for ( i = a2; *i; ++i )
    *i = sub_40A5D0((unsigned __int8)*i);
  for ( j = (const char **)&off_40D920; *j; j += 2 )
  {
    if ( !strcmp(a2, *j) )
      return (char **)j;
  }
  v18 = strlen(a2);
  v3 = v18 == 3 || v18 == 4 && a2[3] == 46;
  v6 = v3;
  for ( k = (const char **)&off_40DA40; *k; k += 2 )
  {
    if ( v6 )
      v4 = strncmp(a2, *k, 3uLL) == 0;
    else
      v4 = strcmp(a2, *k) == 0;
    if ( v4 )
      return (char **)k;
  }
  v12 = sub_405843(a1, a2);
  if ( v12 )
    return (char **)v12;
  if ( !strcmp(a2, "DST") )
    return &off_40D980;
  for ( l = (const char **)&off_40DC20; *l; l += 2 )
  {
    if ( !strcmp(a2, *l) )
      return (char **)l;
  }
  if ( a2[v18 - 1] == 83 )
  {
    a2[v18 - 1] = 0;
    for ( m = (const char **)&off_40DC20; *m; m += 2 )
    {
      if ( !strcmp(a2, *m) )
        return (char **)m;
    }
    a2[v18 - 1] = 83;
  }
  for ( n = (const char **)&off_40DD60; *n; n += 2 )
  {
    if ( !strcmp(a2, *n) )
      return (char **)n;
  }
  if ( v18 == 1 )
  {
    for ( ii = &off_40E320; *ii; ii += 2 )
    {
      if ( *a2 == *(_BYTE *)*ii )
        return (char **)ii;
    }
  }
  v5 = 0;
  v9 = a2;
  v8 = a2;
  while ( 1 )
  {
    *v8 = *v9;
    if ( !*v8 )
      break;
    if ( *v9 == 46 )
      v5 = 1;
    else
      ++v8;
    ++v9;
  }
  if ( v5 && (v17 = sub_405843(a1, a2)) != 0LL )
    result = (char **)v17;
  else
    result = 0LL;
  return result;
}
