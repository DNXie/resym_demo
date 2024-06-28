#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4051AD(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_609340;
  v4[1] = qword_609348;
  v4[2] = qword_609350;
  v4[3] = qword_609358;
  v4[4] = qword_609360;
  v4[5] = qword_609368;
  v4[6] = qword_609370;
  sub_403CFC(v4, a3, 1);
  return sub_404DBA(0, a1, a2, (__int64)v4);
}
