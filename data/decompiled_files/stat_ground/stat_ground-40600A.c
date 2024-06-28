#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_40600A(const char *a1, int a2)
{
  char *v3; // [rsp+18h] [rbp-8h]

  v3 = gettext(a1);
  if ( v3 == a1 && a2 == 7 )
    v3 = (char *)asc_413520;
  return v3;
}
