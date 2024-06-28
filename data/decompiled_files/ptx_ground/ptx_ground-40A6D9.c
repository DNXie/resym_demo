#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_40A6D9(unsigned __int8 a1)
{
  return (((unsigned int)dword_40E040[a1 >> 5] >> (a1 & 0x1F)) & 1) != 0;
}
