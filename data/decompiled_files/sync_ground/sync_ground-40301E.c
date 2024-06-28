#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40301E(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_606220;
  v8[1] = qword_606228;
  v8[2] = qword_606230;
  v8[3] = qword_606238;
  v8[4] = qword_606240;
  v8[5] = qword_606248;
  v8[6] = qword_606250;
  sub_401AEB(v8, a2, a3);
  return sub_402AEE(a1, a4, a5, (__int64)v8);
}
