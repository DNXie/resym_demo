#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_406588(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60A2C0;
  v4[1] = qword_60A2C8;
  v4[2] = qword_60A2D0;
  v4[3] = qword_60A2D8;
  v4[4] = qword_60A2E0;
  v4[5] = qword_60A2E8;
  v4[6] = qword_60A2F0;
  sub_4050D7(v4, a3, 1);
  return sub_406195(0, a1, a2, (__int64)v4);
}
