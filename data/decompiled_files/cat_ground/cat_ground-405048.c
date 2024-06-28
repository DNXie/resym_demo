#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405048(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60C360;
  v4[1] = qword_60C368;
  v4[2] = qword_60C370;
  v4[3] = qword_60C378;
  v4[4] = qword_60C380;
  v4[5] = qword_60C388;
  v4[6] = qword_60C390;
  sub_403B97(v4, a3, 1);
  return sub_404C55(0, a1, a2, (__int64)v4);
}
