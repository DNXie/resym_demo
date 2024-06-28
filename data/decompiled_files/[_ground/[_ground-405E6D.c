#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405E6D(size_t a1, __int64 a2)
{
  void *v3; // [rsp+18h] [rbp-8h]

  v3 = malloc(a1);
  if ( !v3 && a1 )
    sub_405FEF();
  return v3;
}
