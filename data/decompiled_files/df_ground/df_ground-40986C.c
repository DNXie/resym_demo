#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40986C(size_t a1, double a2)
{
  void *v3; // [rsp+18h] [rbp-8h]

  v3 = malloc(a1);
  if ( !v3 && a1 )
    sub_4099EE(a2);
  return v3;
}
