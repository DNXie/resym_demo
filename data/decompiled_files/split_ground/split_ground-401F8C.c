#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_401F8C(__int64 a1, unsigned __int64 a2)
{
  return a2 - 1 + a1 - (a2 - 1 + a1) % a2;
}
