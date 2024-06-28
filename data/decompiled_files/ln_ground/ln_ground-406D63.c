#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_406D63(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60C320;
  v8[1] = qword_60C328;
  v8[2] = qword_60C330;
  v8[3] = qword_60C338;
  v8[4] = qword_60C340;
  v8[5] = qword_60C348;
  v8[6] = qword_60C350;
  sub_405830(v8, a2, a3);
  return sub_406833(a1, a4, a5, (__int64)v8);
}
