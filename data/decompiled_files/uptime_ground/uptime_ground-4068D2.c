#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4068D2(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60A2E0;
  v8[1] = qword_60A2E8;
  v8[2] = qword_60A2F0;
  v8[3] = qword_60A2F8;
  v8[4] = qword_60A300;
  v8[5] = qword_60A308;
  v8[6] = qword_60A310;
  sub_40539F(v8, a2, a3);
  return sub_4063A2(a1, a4, a5, (__int64)v8);
}
