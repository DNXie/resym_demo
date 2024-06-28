#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4051BF(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60F360;
  v8[1] = qword_60F368;
  v8[2] = qword_60F370;
  v8[3] = qword_60F378;
  v8[4] = qword_60F380;
  v8[5] = qword_60F388;
  v8[6] = qword_60F390;
  sub_403C8C(v8, a2, a3);
  return sub_404C8F(a1, a4, a5, (__int64)v8);
}
