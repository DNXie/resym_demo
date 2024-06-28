#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_406CE1(unsigned __int8 a1)
{
  return (((unsigned int)dword_40A260[a1 >> 5] >> (a1 & 0x1F)) & 1) != 0;
}
