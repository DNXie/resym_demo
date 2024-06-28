#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_404B8C(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60E340;
  v4[1] = qword_60E348;
  v4[2] = qword_60E350;
  v4[3] = qword_60E358;
  v4[4] = qword_60E360;
  v4[5] = qword_60E368;
  v4[6] = qword_60E370;
  sub_4036DB(v4, a3, 1);
  return sub_404799(0, a1, a2, (__int64)v4);
}
