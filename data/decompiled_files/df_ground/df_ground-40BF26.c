#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_40BF26(unsigned __int8 a1)
{
  return (((unsigned int)dword_415660[a1 >> 5] >> (a1 & 0x1F)) & 1) != 0;
}
