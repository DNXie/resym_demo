#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4081BE(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_610B20;
  v8[1] = qword_610B28;
  v8[2] = qword_610B30;
  v8[3] = qword_610B38;
  v8[4] = qword_610B40;
  v8[5] = qword_610B48;
  v8[6] = qword_610B50;
  sub_406C8B(v8, a2, a3);
  return sub_407C8E(a1, a4, a5, (__int64)v8);
}
