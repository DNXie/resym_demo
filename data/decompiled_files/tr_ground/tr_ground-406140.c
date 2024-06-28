#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_406140(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60D5A0;
  v4[1] = qword_60D5A8;
  v4[2] = qword_60D5B0;
  v4[3] = qword_60D5B8;
  v4[4] = qword_60D5C0;
  v4[5] = qword_60D5C8;
  v4[6] = qword_60D5D0;
  sub_404C8F(v4, a3, 1);
  return sub_405D4D(0, a1, a2, (__int64)v4);
}
