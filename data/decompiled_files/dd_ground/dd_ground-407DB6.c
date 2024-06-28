#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_407DB6(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60E8A0;
  v4[1] = qword_60E8A8;
  v4[2] = qword_60E8B0;
  v4[3] = qword_60E8B8;
  v4[4] = qword_60E8C0;
  v4[5] = qword_60E8C8;
  v4[6] = qword_60E8D0;
  sub_406905(v4, a3, 1);
  return sub_4079C3(0, a1, a2, (__int64)v4);
}
