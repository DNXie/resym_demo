#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_405429(_QWORD *a1, unsigned __int64 a2)
{
  return ((unsigned __int64)sub_408C90(*a1, a2) ^ a1[1]) % a2;
}
