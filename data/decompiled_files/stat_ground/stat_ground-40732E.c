#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40732E(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_616460;
  v4[1] = qword_616468;
  v4[2] = qword_616470;
  v4[3] = qword_616478;
  v4[4] = qword_616480;
  v4[5] = qword_616488;
  v4[6] = qword_616490;
  sub_405E7D(v4, a3, 1);
  return sub_406F3B(0, a1, a2, (__int64)v4);
}
