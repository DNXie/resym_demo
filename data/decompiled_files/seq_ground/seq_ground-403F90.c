#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_403F90(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60D2E0;
  v4[1] = qword_60D2E8;
  v4[2] = qword_60D2F0;
  v4[3] = qword_60D2F8;
  v4[4] = qword_60D300;
  v4[5] = qword_60D308;
  v4[6] = qword_60D310;
  sub_402ADF(v4, a3, 1);
  return sub_403B9D(0, a1, a2, (__int64)v4);
}
