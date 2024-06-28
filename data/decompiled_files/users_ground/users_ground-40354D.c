#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40354D(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_606260;
  v8[1] = qword_606268;
  v8[2] = qword_606270;
  v8[3] = qword_606278;
  v8[4] = qword_606280;
  v8[5] = qword_606288;
  v8[6] = qword_606290;
  sub_40201A(v8, a2, a3);
  return sub_40301D(a1, a4, a5, (__int64)v8);
}
