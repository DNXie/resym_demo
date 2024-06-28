#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_403956(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_6072C0;
  v8[1] = qword_6072C8;
  v8[2] = qword_6072D0;
  v8[3] = qword_6072D8;
  v8[4] = qword_6072E0;
  v8[5] = qword_6072E8;
  v8[6] = qword_6072F0;
  sub_402423(v8, a2, a3);
  return sub_403426(a1, a4, a5, (__int64)v8);
}
