#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4128F3(unsigned __int64 *a1, int a2, int a3)
{
  unsigned int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; a3--; i |= sub_412894(a1, a2) )
    ;
  return i;
}
