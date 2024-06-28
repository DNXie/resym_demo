#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402379(__gid_t a1, char a2)
{
  char *v2; // rax
  unsigned __int8 v4; // [rsp+17h] [rbp-19h]
  struct group *v5; // [rsp+18h] [rbp-18h]

  v5 = 0LL;
  v4 = 1;
  if ( a2 )
  {
    v5 = getgrgid(a1);
    if ( !v5 )
    {
      v2 = gettext("cannot find name for group ID %lu");
      error(0, 0, v2, a1);
      v4 = 0;
    }
  }
  if ( v5 )
    printf("%s", v5->gr_name);
  else
    printf("%lu", a1);
  return v4;
}
