#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40521B(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60C680;
  v8[1] = qword_60C688;
  v8[2] = qword_60C690;
  v8[3] = qword_60C698;
  v8[4] = qword_60C6A0;
  v8[5] = qword_60C6A8;
  v8[6] = qword_60C6B0;
  sub_403CE8(v8, a2, a3);
  return sub_404CEB(a1, a4, a5, (__int64)v8);
}
