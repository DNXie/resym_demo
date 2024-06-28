#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40FB29(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_61D920;
  v8[1] = qword_61D928;
  v8[2] = qword_61D930;
  v8[3] = qword_61D938;
  v8[4] = qword_61D940;
  v8[5] = qword_61D948;
  v8[6] = qword_61D950;
  sub_40E5F6(v8, a2, a3);
  return sub_40F5F9(a1, a4, a5, (__int64)v8);
}
