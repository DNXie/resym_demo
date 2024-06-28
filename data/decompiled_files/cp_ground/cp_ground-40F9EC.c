#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40F9EC(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_61D920;
  v4[1] = qword_61D928;
  v4[2] = qword_61D930;
  v4[3] = qword_61D938;
  v4[4] = qword_61D940;
  v4[5] = qword_61D948;
  v4[6] = qword_61D950;
  sub_40E53B(v4, a3, 1);
  return sub_40F5F9(0, a1, a2, (__int64)v4);
}
