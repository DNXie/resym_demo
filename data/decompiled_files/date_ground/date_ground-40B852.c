#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40B852(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_611320;
  v4[1] = qword_611328;
  v4[2] = qword_611330;
  v4[3] = qword_611338;
  v4[4] = qword_611340;
  v4[5] = qword_611348;
  v4[6] = qword_611350;
  sub_40A3A1(v4, a3, 1);
  return sub_40B45F(0, a1, a2, (__int64)v4);
}
