#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4088C8(size_t a1, __int64 a2)
{
  __int64 v2; // rdx
  void *v4; // [rsp+18h] [rbp-8h]

  v4 = malloc(a1);
  if ( !v4 && a1 )
    sub_408A4A(a1, a2, v2);
  return v4;
}
