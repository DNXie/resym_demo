#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4068D9(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60D360;
  v8[1] = qword_60D368;
  v8[2] = qword_60D370;
  v8[3] = qword_60D378;
  v8[4] = qword_60D380;
  v8[5] = qword_60D388;
  v8[6] = qword_60D390;
  sub_4053A6(v8, a2, a3);
  return sub_4063A9(a1, a4, a5, (__int64)v8);
}
