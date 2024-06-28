#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_4049D9(const char *a1, size_t a2)
{
  char *v3; // [rsp+18h] [rbp-8h]

  v3 = strndup(a1, a2);
  if ( !v3 )
    sub_4049A4();
  return v3;
}
