#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4031C0(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_606220;
  v4[1] = qword_606228;
  v4[2] = qword_606230;
  v4[3] = qword_606238;
  v4[4] = qword_606240;
  v4[5] = qword_606248;
  v4[6] = qword_606250;
  sub_401D0F(v4, a3, 1);
  return sub_402DCD(0, a1, a2, (__int64)v4);
}
