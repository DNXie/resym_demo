#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_404A10(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_609320;
  v4[1] = qword_609328;
  v4[2] = qword_609330;
  v4[3] = qword_609338;
  v4[4] = qword_609340;
  v4[5] = qword_609348;
  v4[6] = qword_609350;
  sub_40355F(v4, a3, 1);
  return sub_40461D(0, a1, a2, (__int64)v4);
}
