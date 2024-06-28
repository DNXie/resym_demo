#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405087(unsigned __int8 a1, const char *a2, __int64 a3)
{
  __int64 v3; // rbx
  int *v4; // rax

  v3 = sub_4113BF(a3);
  v4 = __errno_location();
  error(0, *v4, a2, v3);
  return sub_405056(a1);
}
