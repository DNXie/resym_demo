#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_408FA2(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_6113E0;
  v4[1] = qword_6113E8;
  v4[2] = qword_6113F0;
  v4[3] = qword_6113F8;
  v4[4] = qword_611400;
  v4[5] = qword_611408;
  v4[6] = qword_611410;
  sub_407AF1(v4, a3, 1);
  return sub_408BAF(0, a1, a2, (__int64)v4);
}
