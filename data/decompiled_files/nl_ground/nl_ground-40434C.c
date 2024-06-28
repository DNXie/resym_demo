#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40434C(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_609780;
  v4[1] = qword_609788;
  v4[2] = qword_609790;
  v4[3] = qword_609798;
  v4[4] = qword_6097A0;
  v4[5] = qword_6097A8;
  v4[6] = qword_6097B0;
  sub_402E9B(v4, a3, 1);
  return sub_403F59(0, a1, a2, (__int64)v4);
}
