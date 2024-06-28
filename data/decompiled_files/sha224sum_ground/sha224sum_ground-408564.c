#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_408564(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60C2C0;
  v8[1] = qword_60C2C8;
  v8[2] = qword_60C2D0;
  v8[3] = qword_60C2D8;
  v8[4] = qword_60C2E0;
  v8[5] = qword_60C2E8;
  v8[6] = qword_60C2F0;
  sub_407031(v8, a2, a3);
  return sub_408034(a1, a4, a5, (__int64)v8);
}
