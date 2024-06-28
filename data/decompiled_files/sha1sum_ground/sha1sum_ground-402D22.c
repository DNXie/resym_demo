#include "/share/binary_recovery/clang-parser/defs.hh"
_DWORD *__fastcall sub_402D22(_DWORD *a1)
{
  _DWORD *result; // rax

  *a1 = 1732584193;
  a1[1] = -271733879;
  a1[2] = -1732584194;
  a1[3] = 271733878;
  a1[4] = -1009589776;
  a1[6] = 0;
  a1[5] = a1[6];
  result = a1;
  a1[7] = 0;
  return result;
}
