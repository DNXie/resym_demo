#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_407EF3(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60E8A0;
  v8[1] = qword_60E8A8;
  v8[2] = qword_60E8B0;
  v8[3] = qword_60E8B8;
  v8[4] = qword_60E8C0;
  v8[5] = qword_60E8C8;
  v8[6] = qword_60E8D0;
  sub_4069C0(v8, a2, a3);
  return sub_4079C3(a1, a4, a5, (__int64)v8);
}
