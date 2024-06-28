#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_40257C(const char *a1, const char *a2)
{
  size_t v2; // rbx
  size_t v3; // rax
  char *v4; // rax
  char *dest; // [rsp+18h] [rbp-18h]

  dest = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v2 = strlen(a1);
      v3 = strlen(a2);
      dest = (char *)sub_405AE1(v2 + v3 + 2);
      v4 = stpcpy(dest, a1);
      *(_WORD *)v4 = 58;
      strcpy(v4 + 1, a2);
    }
    else
    {
      dest = (char *)sub_405C36(a1);
    }
  }
  else if ( a2 )
  {
    dest = (char *)sub_405C36(a2);
  }
  return dest;
}
