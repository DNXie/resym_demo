#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_407601(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_6106E0;
  v4[1] = qword_6106E8;
  v4[2] = qword_6106F0;
  v4[3] = qword_6106F8;
  v4[4] = qword_610700;
  v4[5] = qword_610708;
  v4[6] = qword_610710;
  sub_406150(v4, a3, 1);
  return sub_40720E(0, a1, a2, (__int64)v4);
}
