#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_404B4D(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_609320;
  v8[1] = qword_609328;
  v8[2] = qword_609330;
  v8[3] = qword_609338;
  v8[4] = qword_609340;
  v8[5] = qword_609348;
  v8[6] = qword_609350;
  sub_40361A(v8, a2, a3);
  return sub_40461D(a1, a4, a5, (__int64)v8);
}