#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403A37(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = 0xFFFFFFFFFFFFFFFFLL % a2;
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_403D02(a1, a2, v2);
  return sub_403B80(a2 * a1, a2, v2);
}
