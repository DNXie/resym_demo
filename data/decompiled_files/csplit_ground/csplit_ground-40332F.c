#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40332F(__int64 a1)
{
  __int64 result; // rax

  fwrite_unlocked(*(const void **)(a1 + 8), 1uLL, *(_QWORD *)a1, stream);
  result = *(_QWORD *)a1 + qword_60B370;
  qword_60B370 = result;
  return result;
}
