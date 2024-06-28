#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405185(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60C360;
  v8[1] = qword_60C368;
  v8[2] = qword_60C370;
  v8[3] = qword_60C378;
  v8[4] = qword_60C380;
  v8[5] = qword_60C388;
  v8[6] = qword_60C390;
  sub_403C52(v8, a2, a3);
  return sub_404C55(a1, a4, a5, (__int64)v8);
}
