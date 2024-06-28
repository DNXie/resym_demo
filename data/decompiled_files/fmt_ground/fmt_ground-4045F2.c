#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4045F2(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_6132C0;
  v4[1] = qword_6132C8;
  v4[2] = qword_6132D0;
  v4[3] = qword_6132D8;
  v4[4] = qword_6132E0;
  v4[5] = qword_6132E8;
  v4[6] = qword_6132F0;
  sub_403141(v4, a3, 1);
  return sub_4041FF(0, a1, a2, (__int64)v4);
}
