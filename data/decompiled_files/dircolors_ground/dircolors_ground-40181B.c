#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_40181B()
{
  char *s1; // [rsp+8h] [rbp-8h]
  char *s1a; // [rsp+8h] [rbp-8h]

  s1 = getenv("SHELL");
  if ( !s1 || !*s1 )
    return 2LL;
  s1a = (char *)sub_4029E7(s1);
  return !strcmp(s1a, "csh") || !strcmp(s1a, "tcsh");
}
