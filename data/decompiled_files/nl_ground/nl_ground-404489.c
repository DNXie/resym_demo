#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_404489(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_609780;
  v8[1] = qword_609788;
  v8[2] = qword_609790;
  v8[3] = qword_609798;
  v8[4] = qword_6097A0;
  v8[5] = qword_6097A8;
  v8[6] = qword_6097B0;
  sub_402F56(v8, a2, a3);
  return sub_403F59(a1, a4, a5, (__int64)v8);
}
