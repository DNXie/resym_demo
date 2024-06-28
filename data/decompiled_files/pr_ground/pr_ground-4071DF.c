#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4071DF(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_610460;
  v8[1] = qword_610468;
  v8[2] = qword_610470;
  v8[3] = qword_610478;
  v8[4] = qword_610480;
  v8[5] = qword_610488;
  v8[6] = qword_610490;
  sub_405CAC(v8, a2, a3);
  return sub_406CAF(a1, a4, a5, (__int64)v8);
}
