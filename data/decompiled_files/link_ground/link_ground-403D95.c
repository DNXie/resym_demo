#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_403D95(size_t a1, size_t a2)
{
  __int64 v2; // rdx
  void *v4; // [rsp+18h] [rbp-8h]

  v4 = calloc(a1, a2);
  if ( !v4 )
    sub_403E2C(a1, a2, v2);
  return v4;
}
