#include "/share/binary_recovery/clang-parser/defs.hh"
const char *__fastcall sub_40C0C8(const char *a1)
{
  size_t v2; // rbx
  size_t v3; // rax
  char *s; // [rsp+10h] [rbp-20h]
  char *v5; // [rsp+18h] [rbp-18h]

  s = gettext(a1);
  if ( s == a1 )
    return a1;
  if ( (unsigned __int8)sub_40BBFA(s, (__int64)a1) )
    return s;
  v2 = strlen(s);
  v3 = strlen(a1);
  v5 = (char *)sub_40EB4C(v2 + v3 + 4);
  sprintf(v5, "%s (%s)", s, a1);
  return v5;
}
