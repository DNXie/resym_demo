#include "/share/binary_recovery/clang-parser/defs.hh"
_DWORD *__fastcall sub_40D303(_DWORD *a1)
{
  _DWORD *result; // rax

  *a1 = 1732584193;
  a1[1] = -271733879;
  a1[2] = -1732584194;
  a1[3] = 271733878;
  a1[5] = 0;
  a1[4] = a1[5];
  result = a1;
  a1[6] = 0;
  return result;
}
