#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4058DE(const char *a1, char a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v5; // [rsp+14h] [rbp-CCh]

  v5 = 0;
  if ( (a2 & 0x40) != 0 )
    v5 = a3;
  v3 = open(a1, a2, v5);
  return sub_405E3D(v3);
}
