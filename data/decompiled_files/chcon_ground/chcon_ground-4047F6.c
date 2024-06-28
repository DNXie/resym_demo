#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4047F6(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_610380;
  v8[1] = qword_610388;
  v8[2] = qword_610390;
  v8[3] = qword_610398;
  v8[4] = qword_6103A0;
  v8[5] = qword_6103A8;
  v8[6] = qword_6103B0;
  sub_4032C3(v8, a2, a3);
  return sub_4042C6(a1, a4, a5, (__int64)v8);
}
