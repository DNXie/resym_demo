#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_403410(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_606260;
  v4[1] = qword_606268;
  v4[2] = qword_606270;
  v4[3] = qword_606278;
  v4[4] = qword_606280;
  v4[5] = qword_606288;
  v4[6] = qword_606290;
  sub_401F5F(v4, a3, 1);
  return sub_40301D(0, a1, a2, (__int64)v4);
}
