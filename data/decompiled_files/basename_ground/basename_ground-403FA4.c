#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_403FA4(const char *a1, size_t a2)
{
  char *v3; // [rsp+18h] [rbp-8h]

  v3 = strndup(a1, a2);
  if ( !v3 )
    sub_403F6F();
  return v3;
}
