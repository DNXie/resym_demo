#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4042EA(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60E2E0;
  v4[1] = qword_60E2E8;
  v4[2] = qword_60E2F0;
  v4[3] = qword_60E2F8;
  v4[4] = qword_60E300;
  v4[5] = qword_60E308;
  v4[6] = qword_60E310;
  sub_402E39(v4, a3, 1);
  return sub_403EF7(0, a1, a2, (__int64)v4);
}
