#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_406795(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60A2E0;
  v4[1] = qword_60A2E8;
  v4[2] = qword_60A2F0;
  v4[3] = qword_60A2F8;
  v4[4] = qword_60A300;
  v4[5] = qword_60A308;
  v4[6] = qword_60A310;
  sub_4052E4(v4, a3, 1);
  return sub_4063A2(0, a1, a2, (__int64)v4);
}
