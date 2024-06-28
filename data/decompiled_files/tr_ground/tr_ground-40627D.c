#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40627D(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60D5A0;
  v8[1] = qword_60D5A8;
  v8[2] = qword_60D5B0;
  v8[3] = qword_60D5B8;
  v8[4] = qword_60D5C0;
  v8[5] = qword_60D5C8;
  v8[6] = qword_60D5D0;
  sub_404D4A(v8, a2, a3);
  return sub_405D4D(a1, a4, a5, (__int64)v8);
}
