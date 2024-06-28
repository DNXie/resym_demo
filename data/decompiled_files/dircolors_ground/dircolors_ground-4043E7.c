#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4043E7(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_6092E0;
  v8[1] = qword_6092E8;
  v8[2] = qword_6092F0;
  v8[3] = qword_6092F8;
  v8[4] = qword_609300;
  v8[5] = qword_609308;
  v8[6] = qword_609310;
  sub_402EB4(v8, a2, a3);
  return sub_403EB7(a1, a4, a5, (__int64)v8);
}
