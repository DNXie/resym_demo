#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_4100B8(int a1)
{
  DIR *v1; // rax

  v1 = fdopendir(a1);
  return sub_410036(v1);
}
