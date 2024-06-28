#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_401B27(unsigned __int64 a1)
{
  return (((int)*(unsigned __int8 *)(qword_60B2C0 + (a1 >> 3)) >> (a1 & 7)) & 1) != 0;
}
