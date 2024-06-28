#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_4073D3(const char *a1, size_t a2)
{
  char *v3; // [rsp+18h] [rbp-8h]

  v3 = strndup(a1, a2);
  if ( !v3 )
    sub_40739E();
  return v3;
}
