#include "/share/binary_recovery/clang-parser/defs.hh"
_DWORD *__fastcall sub_40D372(int *a1, _DWORD *a2)
{
  sub_40D35C(a2, *a1);
  sub_40D35C(a2 + 1, a1[1]);
  sub_40D35C(a2 + 2, a1[2]);
  sub_40D35C(a2 + 3, a1[3]);
  return a2;
}
