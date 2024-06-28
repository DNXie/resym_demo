#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404AFF(const char *a1, __gid_t a2, __gid_t **a3)
{
  __int64 result; // rax
  _BOOL8 v4; // rax
  int ngroups; // [rsp+28h] [rbp-38h] BYREF
  int v7; // [rsp+2Ch] [rbp-34h]
  int v8; // [rsp+30h] [rbp-30h]
  int v9; // [rsp+34h] [rbp-2Ch]
  int v10; // [rsp+38h] [rbp-28h]
  __gid_t v11; // [rsp+3Ch] [rbp-24h]
  __gid_t *groups; // [rsp+40h] [rbp-20h]
  __gid_t *i; // [rsp+48h] [rbp-18h]
  __gid_t *v14; // [rsp+50h] [rbp-10h]
  __gid_t *v15; // [rsp+58h] [rbp-8h]

  if ( a1 )
  {
    ngroups = 10;
    groups = (__gid_t *)sub_404AB0(0LL, 0xAuLL);
    if ( groups )
    {
      do
      {
        v8 = ngroups;
        v7 = getgrouplist(a1, a2, groups, &ngroups);
        if ( v7 < 0 && v8 == ngroups )
          ngroups *= 2;
        v14 = (__gid_t *)sub_404AB0(groups, ngroups);
        if ( !v14 )
        {
          v9 = *__errno_location();
          free(groups);
          *__errno_location() = v9;
          return 0xFFFFFFFFLL;
        }
        groups = v14;
      }
      while ( v7 < 0 );
      *a3 = groups;
      result = (unsigned int)ngroups;
    }
    else
    {
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    ngroups = getgroups(0, 0LL);
    if ( ngroups >= 0 )
    {
      if ( a2 != -1 )
        ++ngroups;
      groups = (__gid_t *)sub_404AB0(0LL, ngroups);
      if ( groups )
      {
        v4 = a2 != -1;
        v7 = getgroups(ngroups - (a2 != -1), &groups[v4]);
        if ( v7 >= 0 )
        {
          if ( a2 != -1 )
          {
            *groups = a2;
            ++v7;
          }
          *a3 = groups;
          if ( v7 > 1 )
          {
            v11 = *groups;
            v15 = &groups[v7];
            for ( i = groups + 1; i < v15; ++i )
            {
              if ( *i == v11 || *i == *groups )
                --v7;
              else
                *++groups = *i;
            }
          }
          result = (unsigned int)v7;
        }
        else
        {
          v10 = *__errno_location();
          free(groups);
          *__errno_location() = v10;
          result = 0xFFFFFFFFLL;
        }
      }
      else
      {
        result = 0xFFFFFFFFLL;
      }
    }
    else if ( *__errno_location() == 38 && (groups = (__gid_t *)sub_404AB0(0LL, 1uLL)) != 0LL )
    {
      *a3 = groups;
      *groups = a2;
      result = a2 != -1;
    }
    else
    {
      result = 0xFFFFFFFFLL;
    }
  }
  return result;
}
