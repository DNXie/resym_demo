#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40871E(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_6185E0;
  v8[1] = qword_6185E8;
  v8[2] = qword_6185F0;
  v8[3] = qword_6185F8;
  v8[4] = qword_618600;
  v8[5] = qword_618608;
  v8[6] = qword_618610;
  sub_4071EB(v8, a2, a3);
  return sub_4081EE(a1, a4, a5, (__int64)v8);
}
