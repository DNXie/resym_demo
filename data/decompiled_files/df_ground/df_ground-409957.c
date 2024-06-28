#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_409957(size_t a1, size_t a2, double a3)
{
  void *v4; // [rsp+18h] [rbp-8h]

  v4 = calloc(a1, a2);
  if ( !v4 )
    sub_4099EE(a3);
  return v4;
}
