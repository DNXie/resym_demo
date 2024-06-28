#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405F58(size_t a1, size_t a2)
{
  void *v3; // [rsp+18h] [rbp-8h]

  v3 = calloc(a1, a2);
  if ( !v3 )
    sub_405FEF();
  return v3;
}
