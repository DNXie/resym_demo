#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404E8C(unsigned int a1, __int64 a2, FILE *a3)
{
  if ( a1 > 0xFFFF )
    fprintf(a3, "\\U%08X", a1);
  else
    fprintf(a3, "\\u%04X", a1);
  return -1LL;
}
