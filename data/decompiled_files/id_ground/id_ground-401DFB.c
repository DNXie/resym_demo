#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_401DFB(__uid_t a1)
{
  char *v1; // rax
  int result; // eax
  struct passwd *v3; // [rsp+18h] [rbp-18h]

  v3 = 0LL;
  if ( byte_607284 )
  {
    v3 = getpwuid(a1);
    if ( !v3 )
    {
      v1 = gettext("cannot find name for user ID %lu");
      error(0, 0, v1, a1);
      byte_6071F0 = 0;
    }
  }
  if ( v3 )
    result = printf("%s", v3->pw_name);
  else
    result = printf("%lu", a1);
  return result;
}
