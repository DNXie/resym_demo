#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4052EA(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_609340;
  v8[1] = qword_609348;
  v8[2] = qword_609350;
  v8[3] = qword_609358;
  v8[4] = qword_609360;
  v8[5] = qword_609368;
  v8[6] = qword_609370;
  sub_403DB7(v8, a2, a3);
  return sub_404DBA(a1, a4, a5, (__int64)v8);
}
