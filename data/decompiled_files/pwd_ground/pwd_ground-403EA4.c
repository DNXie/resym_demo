#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_403EA4(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_6082C0;
  v8[1] = qword_6082C8;
  v8[2] = qword_6082D0;
  v8[3] = qword_6082D8;
  v8[4] = qword_6082E0;
  v8[5] = qword_6082E8;
  v8[6] = qword_6082F0;
  sub_402971(v8, a2, a3);
  return sub_403974(a1, a4, a5, (__int64)v8);
}
