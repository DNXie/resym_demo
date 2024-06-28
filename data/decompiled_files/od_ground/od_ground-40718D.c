#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40718D(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_612420;
  v8[1] = qword_612428;
  v8[2] = qword_612430;
  v8[3] = qword_612438;
  v8[4] = qword_612440;
  v8[5] = qword_612448;
  v8[6] = qword_612450;
  sub_405C5A(v8, a2, a3);
  return sub_406C5D(a1, a4, a5, (__int64)v8);
}
