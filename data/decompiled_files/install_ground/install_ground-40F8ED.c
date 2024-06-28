#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40F8ED(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_622920;
  v4[1] = qword_622928;
  v4[2] = qword_622930;
  v4[3] = qword_622938;
  v4[4] = qword_622940;
  v4[5] = qword_622948;
  v4[6] = qword_622950;
  sub_40E43C(v4, a3, 1);
  return sub_40F4FA(0, a1, a2, (__int64)v4);
}
