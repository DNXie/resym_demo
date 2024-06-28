#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_403DB7(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_607280;
  v8[1] = qword_607288;
  v8[2] = qword_607290;
  v8[3] = qword_607298;
  v8[4] = qword_6072A0;
  v8[5] = qword_6072A8;
  v8[6] = qword_6072B0;
  sub_402884(v8, a2, a3);
  return sub_403887(a1, a4, a5, (__int64)v8);
}
