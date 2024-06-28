#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_402098(unsigned __int8 *a1, char *a2)
{
  int result; // eax

  if ( a1 )
    result = sprintf(a2, "%02x%02x%02x", *a1, a1[1], a1[2]);
  else
    result = (unsigned int)memcpy(a2, "random", 7uLL);
  return result;
}
