#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4037AC(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60C260;
  v8[1] = qword_60C268;
  v8[2] = qword_60C270;
  v8[3] = qword_60C278;
  v8[4] = qword_60C280;
  v8[5] = qword_60C288;
  v8[6] = qword_60C290;
  sub_402279(v8, a2, a3);
  return sub_40327C(a1, a4, a5, (__int64)v8);
}