#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_408081(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_610B20;
  v4[1] = qword_610B28;
  v4[2] = qword_610B30;
  v4[3] = qword_610B38;
  v4[4] = qword_610B40;
  v4[5] = qword_610B48;
  v4[6] = qword_610B50;
  sub_406BD0(v4, a3, 1);
  return sub_407C8E(0, a1, a2, (__int64)v4);
}
