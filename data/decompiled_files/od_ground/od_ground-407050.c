#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_407050(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_612420;
  v4[1] = qword_612428;
  v4[2] = qword_612430;
  v4[3] = qword_612438;
  v4[4] = qword_612440;
  v4[5] = qword_612448;
  v4[6] = qword_612450;
  sub_405B9F(v4, a3, 1);
  return sub_406C5D(0, a1, a2, (__int64)v4);
}
