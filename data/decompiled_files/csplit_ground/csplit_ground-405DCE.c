#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405DCE(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60B480;
  v4[1] = qword_60B488;
  v4[2] = qword_60B490;
  v4[3] = qword_60B498;
  v4[4] = qword_60B4A0;
  v4[5] = qword_60B4A8;
  v4[6] = qword_60B4B0;
  sub_40491D(v4, a3, 1);
  return sub_4059DB(0, a1, a2, (__int64)v4);
}
