#include "/share/binary_recovery/clang-parser/defs.hh"
_DWORD *__fastcall sub_402D9C(_DWORD *a1, _DWORD *a2)
{
  sub_402D86(a2, HIBYTE(*a1) | (*a1 >> 8) & 0xFF00 | ((*a1 & 0xFF00) << 8) | (*a1 << 24));
  sub_402D86(a2 + 1, HIBYTE(a1[1]) | (a1[1] >> 8) & 0xFF00 | ((a1[1] & 0xFF00) << 8) | (a1[1] << 24));
  sub_402D86(a2 + 2, HIBYTE(a1[2]) | (a1[2] >> 8) & 0xFF00 | ((a1[2] & 0xFF00) << 8) | (a1[2] << 24));
  sub_402D86(a2 + 3, HIBYTE(a1[3]) | (a1[3] >> 8) & 0xFF00 | ((a1[3] & 0xFF00) << 8) | (a1[3] << 24));
  sub_402D86(a2 + 4, HIBYTE(a1[4]) | (a1[4] >> 8) & 0xFF00 | ((a1[4] & 0xFF00) << 8) | (a1[4] << 24));
  return a2;
}
