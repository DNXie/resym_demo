#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401774(char *a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *s; // [rsp+18h] [rbp-18h]
  char *sa; // [rsp+18h] [rbp-18h]

  for ( s = a1; ; s = sa + 1 )
  {
    sa = strchr(s, 45);
    if ( !sa )
      break;
    if ( sa == a1 || *(sa - 1) == 47 )
    {
      v1 = sub_402238(a1);
      v2 = gettext("leading `-' in a component of file name %s");
      error(0, 0, v2, v1);
      return 0LL;
    }
  }
  return 1LL;
}
