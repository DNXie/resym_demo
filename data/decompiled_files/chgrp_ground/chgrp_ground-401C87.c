#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401C87(const char *a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  unsigned int v4; // [rsp+1Ch] [rbp-24h]
  unsigned __int64 v5; // [rsp+20h] [rbp-20h] BYREF
  struct group *v6; // [rsp+28h] [rbp-18h]

  v4 = -1;
  if ( *a1 )
  {
    v6 = getgrnam(a1);
    if ( v6 )
    {
      v4 = v6->gr_gid;
    }
    else
    {
      if ( (unsigned int)sub_405D38(a1, 0LL, 10LL, &v5, &locale) || v5 > 0xFFFFFFFF )
      {
        v1 = sub_4039AF(a1);
        v2 = gettext("invalid group: %s");
        error(1, 0, v2, v1);
      }
      v4 = v5;
    }
    endgrent();
  }
  return v4;
}
