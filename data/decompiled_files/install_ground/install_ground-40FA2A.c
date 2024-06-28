#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40FA2A(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_622920;
  v8[1] = qword_622928;
  v8[2] = qword_622930;
  v8[3] = qword_622938;
  v8[4] = qword_622940;
  v8[5] = qword_622948;
  v8[6] = qword_622950;
  sub_40E4F7(v8, a2, a3);
  return sub_40F4FA(a1, a4, a5, (__int64)v8);
}
