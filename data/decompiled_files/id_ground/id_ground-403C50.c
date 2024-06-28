#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_403C50(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_6072C0;
  v4[1] = qword_6072C8;
  v4[2] = qword_6072D0;
  v4[3] = qword_6072D8;
  v4[4] = qword_6072E0;
  v4[5] = qword_6072E8;
  v4[6] = qword_6072F0;
  sub_40279F(v4, a3, 1);
  return sub_40385D(0, a1, a2, (__int64)v4);
}
