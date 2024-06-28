#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405082(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60F360;
  v4[1] = qword_60F368;
  v4[2] = qword_60F370;
  v4[3] = qword_60F378;
  v4[4] = qword_60F380;
  v4[5] = qword_60F388;
  v4[6] = qword_60F390;
  sub_403BD1(v4, a3, 1);
  return sub_404C8F(0, a1, a2, (__int64)v4);
}
