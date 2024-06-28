#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4040CD(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60D2E0;
  v8[1] = qword_60D2E8;
  v8[2] = qword_60D2F0;
  v8[3] = qword_60D2F8;
  v8[4] = qword_60D300;
  v8[5] = qword_60D308;
  v8[6] = qword_60D310;
  sub_402B9A(v8, a2, a3);
  return sub_403B9D(a1, a4, a5, (__int64)v8);
}
