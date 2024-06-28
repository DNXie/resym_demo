#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4047E0(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_6082A0;
  v4[1] = qword_6082A8;
  v4[2] = qword_6082B0;
  v4[3] = qword_6082B8;
  v4[4] = qword_6082C0;
  v4[5] = qword_6082C8;
  v4[6] = qword_6082D0;
  sub_40332F(v4, a3, 1);
  return sub_4043ED(0, a1, a2, (__int64)v4);
}
