#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_409B9C(_BYTE *a1)
{
  _BYTE *result; // rax

  memset(a1, 0, 0x48uLL);
  a1[26] = geteuid() == 0;
  result = a1;
  a1[25] = a1[26];
  return result;
}
