#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40DAF1(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_61B4A0;
  v8[1] = qword_61B4A8;
  v8[2] = qword_61B4B0;
  v8[3] = qword_61B4B8;
  v8[4] = qword_61B4C0;
  v8[5] = qword_61B4C8;
  v8[6] = qword_61B4D0;
  sub_40C5BE(v8, a2, a3);
  return sub_40D5C1(a1, a4, a5, (__int64)v8);
}
