#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405296(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_609260;
  v4[1] = qword_609268;
  v4[2] = qword_609270;
  v4[3] = qword_609278;
  v4[4] = qword_609280;
  v4[5] = qword_609288;
  v4[6] = qword_609290;
  sub_403DE5(v4, a3, 1);
  return sub_404EA3(0, a1, a2, (__int64)v4);
}
