#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405846(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60A3C0;
  v8[1] = qword_60A3C8;
  v8[2] = qword_60A3D0;
  v8[3] = qword_60A3D8;
  v8[4] = qword_60A3E0;
  v8[5] = qword_60A3E8;
  v8[6] = qword_60A3F0;
  sub_404313(v8, a2, a3);
  return sub_405316(a1, a4, a5, (__int64)v8);
}
