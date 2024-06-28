#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_411301(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_61E1E0;
  v4[1] = qword_61E1E8;
  v4[2] = qword_61E1F0;
  v4[3] = qword_61E1F8;
  v4[4] = qword_61E200;
  v4[5] = qword_61E208;
  v4[6] = qword_61E210;
  sub_40FE50(v4, a3, 1);
  return sub_410F0E(0, a1, a2, (__int64)v4);
}
