#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_404F62(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60F3E0;
  v4[1] = qword_60F3E8;
  v4[2] = qword_60F3F0;
  v4[3] = qword_60F3F8;
  v4[4] = qword_60F400;
  v4[5] = qword_60F408;
  v4[6] = qword_60F410;
  sub_403AB1(v4, a3, 1);
  return sub_404B6F(0, a1, a2, (__int64)v4);
}
