#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40C12B(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_6102C0;
  v4[1] = qword_6102C8;
  v4[2] = qword_6102D0;
  v4[3] = qword_6102D8;
  v4[4] = qword_6102E0;
  v4[5] = qword_6102E8;
  v4[6] = qword_6102F0;
  sub_40AC7A(v4, a3, 1);
  return sub_40BD38(0, a1, a2, (__int64)v4);
}
