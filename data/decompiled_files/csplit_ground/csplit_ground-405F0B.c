#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405F0B(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60B480;
  v8[1] = qword_60B488;
  v8[2] = qword_60B490;
  v8[3] = qword_60B498;
  v8[4] = qword_60B4A0;
  v8[5] = qword_60B4A8;
  v8[6] = qword_60B4B0;
  sub_4049D8(v8, a2, a3);
  return sub_4059DB(a1, a4, a5, (__int64)v8);
}
