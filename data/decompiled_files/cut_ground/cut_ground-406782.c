#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_406782(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60B320;
  v8[1] = qword_60B328;
  v8[2] = qword_60B330;
  v8[3] = qword_60B338;
  v8[4] = qword_60B340;
  v8[5] = qword_60B348;
  v8[6] = qword_60B350;
  sub_40524F(v8, a2, a3);
  return sub_406252(a1, a4, a5, (__int64)v8);
}
