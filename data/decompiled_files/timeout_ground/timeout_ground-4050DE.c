#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4050DE(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60C680;
  v4[1] = qword_60C688;
  v4[2] = qword_60C690;
  v4[3] = qword_60C698;
  v4[4] = qword_60C6A0;
  v4[5] = qword_60C6A8;
  v4[6] = qword_60C6B0;
  sub_403C2D(v4, a3, 1);
  return sub_404CEB(0, a1, a2, (__int64)v4);
}
