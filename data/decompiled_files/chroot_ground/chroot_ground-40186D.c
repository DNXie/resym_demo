#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40186D(__int64 a1)
{
  __int64 v1; // r12
  char *v2; // rbx
  int *v3; // rax
  size_t v4; // rax
  __int64 v5; // rbx
  char *v6; // rax
  char *v7; // rbx
  int *v8; // rax
  unsigned int v10; // [rsp+14h] [rbp-4Ch]
  __int64 v11; // [rsp+18h] [rbp-48h] BYREF
  __gid_t gid[2]; // [rsp+20h] [rbp-40h] BYREF
  __gid_t *groups; // [rsp+28h] [rbp-38h]
  size_t n; // [rsp+30h] [rbp-30h]
  char *name; // [rsp+38h] [rbp-28h]
  struct group *v16; // [rsp+40h] [rbp-20h]
  char *s; // [rsp+48h] [rbp-18h]

  groups = 0LL;
  v11 = 0LL;
  n = 0LL;
  s = (char *)sub_4049AD(a1);
  v10 = 0;
  for ( name = strtok(s, ","); name; name = strtok(0LL, ",") )
  {
    if ( (unsigned int)sub_404AAF(name, 0LL, 10LL, gid, &locale) || *(_QWORD *)gid > 0xFFFFFFFFuLL )
    {
      v16 = getgrnam(name);
      if ( v16 )
        *(_QWORD *)gid = v16->gr_gid;
    }
    else
    {
      v16 = getgrgid(gid[0]);
    }
    if ( v16 )
    {
      if ( n == v11 )
        groups = (__gid_t *)sub_404799(groups, &v11, 4LL);
      v4 = n++;
      groups[v4] = gid[0];
    }
    else
    {
      v1 = sub_4022BE(name);
      v2 = gettext("invalid group %s");
      v3 = __errno_location();
      error(0, *v3, v2, v1);
      v10 = -1;
    }
  }
  if ( !v10 && !n )
  {
    v5 = sub_4022BE(a1);
    v6 = gettext("invalid group list %s");
    error(0, 0, v6, v5);
    v10 = -1;
  }
  if ( !v10 )
  {
    v10 = setgroups(n, groups);
    if ( v10 )
    {
      v7 = gettext("failed to set additional groups");
      v8 = __errno_location();
      error(0, *v8, v7);
    }
  }
  free(s);
  free(groups);
  return v10;
}
