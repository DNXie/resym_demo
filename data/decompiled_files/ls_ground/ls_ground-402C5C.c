#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_402C5C(unsigned int a1)
{
  __int64 v3; // [rsp+10h] [rbp-10h]
  char *s1; // [rsp+18h] [rbp-8h]

  v3 = qword_61D3A0[2 * a1];
  s1 = (char *)*(&::s1 + 2 * a1);
  return v3 && (v3 != 1 || *s1 != unk_41606D) && (v3 != 2 || strncmp(s1, "00", 2uLL));
}
