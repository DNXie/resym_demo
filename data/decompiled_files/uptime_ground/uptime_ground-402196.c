#include "/share/binary_recovery/clang-parser/defs.hh"
double __fastcall sub_402196(const char *a1, char **a2)
{
  struct __locale_struct *loc; // [rsp+20h] [rbp-10h]

  loc = (struct __locale_struct *)sub_402162();
  if ( loc )
    return strtod_l(a1, a2, loc);
  if ( a2 )
    *a2 = (char *)a1;
  return 0.0;
}
