#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405B07(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60A2A0;
  v8[1] = qword_60A2A8;
  v8[2] = qword_60A2B0;
  v8[3] = qword_60A2B8;
  v8[4] = qword_60A2C0;
  v8[5] = qword_60A2C8;
  v8[6] = qword_60A2D0;
  sub_4045D4(v8, a2, a3);
  return sub_4055D7(a1, a4, a5, (__int64)v8);
}
