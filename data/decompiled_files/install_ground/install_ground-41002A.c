#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_41002A(int a1)
{
  DIR *v1; // rax

  v1 = fdopendir(a1);
  return sub_40FFA8(v1);
}
