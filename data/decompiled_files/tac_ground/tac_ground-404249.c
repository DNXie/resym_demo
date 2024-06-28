#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_404249(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60A480;
  v4[1] = qword_60A488;
  v4[2] = qword_60A490;
  v4[3] = qword_60A498;
  v4[4] = qword_60A4A0;
  v4[5] = qword_60A4A8;
  v4[6] = qword_60A4B0;
  sub_402D98(v4, a3, 1);
  return sub_403E56(0, a1, a2, (__int64)v4);
}
