#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40A639(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_610360;
  v8[1] = qword_610368;
  v8[2] = qword_610370;
  v8[3] = qword_610378;
  v8[4] = qword_610380;
  v8[5] = qword_610388;
  v8[6] = qword_610390;
  sub_409106(v8, a2, a3);
  return sub_40A109(a1, a4, a5, (__int64)v8);
}
