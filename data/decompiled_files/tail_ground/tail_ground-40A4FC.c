#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40A4FC(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_610360;
  v4[1] = qword_610368;
  v4[2] = qword_610370;
  v4[3] = qword_610378;
  v4[4] = qword_610380;
  v4[5] = qword_610388;
  v4[6] = qword_610390;
  sub_40904B(v4, a3, 1);
  return sub_40A109(0, a1, a2, (__int64)v4);
}
