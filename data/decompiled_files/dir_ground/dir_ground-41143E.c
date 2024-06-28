#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_41143E(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_61E1E0;
  v8[1] = qword_61E1E8;
  v8[2] = qword_61E1F0;
  v8[3] = qword_61E1F8;
  v8[4] = qword_61E200;
  v8[5] = qword_61E208;
  v8[6] = qword_61E210;
  sub_40FF0B(v8, a2, a3);
  return sub_410F0E(a1, a4, a5, (__int64)v8);
}
