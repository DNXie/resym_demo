#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4050B1(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_6123A0;
  v8[1] = qword_6123A8;
  v8[2] = qword_6123B0;
  v8[3] = qword_6123B8;
  v8[4] = qword_6123C0;
  v8[5] = qword_6123C8;
  v8[6] = qword_6123D0;
  sub_403B7E(v8, a2, a3);
  return sub_404B81(a1, a4, a5, (__int64)v8);
}
