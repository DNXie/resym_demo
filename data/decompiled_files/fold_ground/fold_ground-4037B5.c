#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4037B5(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_6072A0;
  v4[1] = qword_6072A8;
  v4[2] = qword_6072B0;
  v4[3] = qword_6072B8;
  v4[4] = qword_6072C0;
  v4[5] = qword_6072C8;
  v4[6] = qword_6072D0;
  sub_402304(v4, a3, 1);
  return sub_4033C2(0, a1, a2, (__int64)v4);
}
