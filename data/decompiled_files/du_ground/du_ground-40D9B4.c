#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40D9B4(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_61B4A0;
  v4[1] = qword_61B4A8;
  v4[2] = qword_61B4B0;
  v4[3] = qword_61B4B8;
  v4[4] = qword_61B4C0;
  v4[5] = qword_61B4C8;
  v4[6] = qword_61B4D0;
  sub_40C503(v4, a3, 1);
  return sub_40D5C1(0, a1, a2, (__int64)v4);
}
