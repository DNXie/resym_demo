#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40773E(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_6106E0;
  v8[1] = qword_6106E8;
  v8[2] = qword_6106F0;
  v8[3] = qword_6106F8;
  v8[4] = qword_610700;
  v8[5] = qword_610708;
  v8[6] = qword_610710;
  sub_40620B(v8, a2, a3);
  return sub_40720E(a1, a4, a5, (__int64)v8);
}
