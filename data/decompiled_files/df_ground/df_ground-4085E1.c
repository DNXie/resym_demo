#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4085E1(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_6185E0;
  v4[1] = qword_6185E8;
  v4[2] = qword_6185F0;
  v4[3] = qword_6185F8;
  v4[4] = qword_618600;
  v4[5] = qword_618608;
  v4[6] = qword_618610;
  sub_407130(v4, a3, 1);
  return sub_4081EE(0, a1, a2, (__int64)v4);
}
