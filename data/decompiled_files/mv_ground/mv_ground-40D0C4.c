#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_40D0C4(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8)
      && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16)
      && !strcmp(*(const char **)a1, *(const char **)a2);
}
