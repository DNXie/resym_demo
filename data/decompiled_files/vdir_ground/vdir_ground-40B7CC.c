#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_40B7CC(const char *a1)
{
  size_t i; // [rsp+10h] [rbp-10h]

  for ( i = strlen(a1); i > 1 && a1[i - 1] == 47; --i )
    ;
  return i;
}
