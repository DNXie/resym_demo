#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_402FA4(unsigned __int8 a1)
{
  return (((unsigned int)dword_40FFE0[a1 >> 5] >> (a1 & 0x1F)) & 1) != 0;
}
