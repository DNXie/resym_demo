#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405709(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60A3C0;
  v4[1] = qword_60A3C8;
  v4[2] = qword_60A3D0;
  v4[3] = qword_60A3D8;
  v4[4] = qword_60A3E0;
  v4[5] = qword_60A3E8;
  v4[6] = qword_60A3F0;
  sub_404258(v4, a3, 1);
  return sub_405316(0, a1, a2, (__int64)v4);
}
