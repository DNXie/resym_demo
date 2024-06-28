#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_404F74(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_6123A0;
  v4[1] = qword_6123A8;
  v4[2] = qword_6123B0;
  v4[3] = qword_6123B8;
  v4[4] = qword_6123C0;
  v4[5] = qword_6123C8;
  v4[6] = qword_6123D0;
  sub_403AC3(v4, a3, 1);
  return sub_404B81(0, a1, a2, (__int64)v4);
}
