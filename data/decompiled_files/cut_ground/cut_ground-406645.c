#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_406645(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60B320;
  v4[1] = qword_60B328;
  v4[2] = qword_60B330;
  v4[3] = qword_60B338;
  v4[4] = qword_60B340;
  v4[5] = qword_60B348;
  v4[6] = qword_60B350;
  sub_405194(v4, a3, 1);
  return sub_406252(0, a1, a2, (__int64)v4);
}
