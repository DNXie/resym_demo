#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40AC03(int a1, const char *a2, char a3, unsigned int a4)
{
  unsigned int v4; // eax
  unsigned int v6; // [rsp+14h] [rbp-CCh]

  v6 = 0;
  if ( (a3 & 0x40) != 0 )
    v6 = a4;
  v4 = openat(a1, a2, a3, v6);
  return sub_40AD3D(v4);
}
