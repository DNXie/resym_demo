#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4070A2(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_610460;
  v4[1] = qword_610468;
  v4[2] = qword_610470;
  v4[3] = qword_610478;
  v4[4] = qword_610480;
  v4[5] = qword_610488;
  v4[6] = qword_610490;
  sub_405BF1(v4, a3, 1);
  return sub_406CAF(0, a1, a2, (__int64)v4);
}
