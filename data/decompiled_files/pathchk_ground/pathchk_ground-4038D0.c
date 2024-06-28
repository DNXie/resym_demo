#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4038D0(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_607240;
  v8[1] = qword_607248;
  v8[2] = qword_607250;
  v8[3] = qword_607258;
  v8[4] = qword_607260;
  v8[5] = qword_607268;
  v8[6] = qword_607270;
  sub_40239D(v8, a2, a3);
  return sub_4033A0(a1, a4, a5, (__int64)v8);
}
