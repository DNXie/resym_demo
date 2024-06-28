#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_40475D(const char *a1, size_t a2)
{
  char *v3; // [rsp+18h] [rbp-8h]

  v3 = strndup(a1, a2);
  if ( !v3 )
    sub_404728();
  return v3;
}
