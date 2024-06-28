#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_403C4B(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_6072E0;
  v4[1] = qword_6072E8;
  v4[2] = qword_6072F0;
  v4[3] = qword_6072F8;
  v4[4] = qword_607300;
  v4[5] = qword_607308;
  v4[6] = qword_607310;
  sub_40279A(v4, a3, 1);
  return sub_403858(0, a1, a2, (__int64)v4);
}
