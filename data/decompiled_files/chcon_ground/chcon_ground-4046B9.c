#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4046B9(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_610380;
  v4[1] = qword_610388;
  v4[2] = qword_610390;
  v4[3] = qword_610398;
  v4[4] = qword_6103A0;
  v4[5] = qword_6103A8;
  v4[6] = qword_6103B0;
  sub_403208(v4, a3, 1);
  return sub_4042C6(0, a1, a2, (__int64)v4);
}
