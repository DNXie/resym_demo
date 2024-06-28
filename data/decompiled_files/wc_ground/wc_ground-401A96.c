#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_401A96(unsigned __int8 a1)
{
  return (((unsigned int)dword_4072E0[a1 >> 5] >> (a1 & 0x1F)) & 1) != 0;
}
