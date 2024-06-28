#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_4037FD(FILE *a1, const char *a2, const char *a3, const char *a4, __int64 *a5)
{
  unsigned __int64 i; // [rsp+38h] [rbp-8h]

  for ( i = 0LL; a5[i]; ++i )
    ;
  return sub_403212(a1, a2, a3, a4, a5, i);
}
