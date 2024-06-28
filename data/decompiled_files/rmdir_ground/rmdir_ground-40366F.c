#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40366F(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60C260;
  v4[1] = qword_60C268;
  v4[2] = qword_60C270;
  v4[3] = qword_60C278;
  v4[4] = qword_60C280;
  v4[5] = qword_60C288;
  v4[6] = qword_60C290;
  sub_4021BE(v4, a3, 1);
  return sub_40327C(0, a1, a2, (__int64)v4);
}
