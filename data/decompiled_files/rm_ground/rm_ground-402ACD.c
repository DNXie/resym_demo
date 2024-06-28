#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402ACD(__int64 a1, __int64 a2)
{
  fts_set(a1, a2, 4LL);
  return fts_read(a1);
}
