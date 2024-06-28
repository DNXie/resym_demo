#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4053D3(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_609260;
  v8[1] = qword_609268;
  v8[2] = qword_609270;
  v8[3] = qword_609278;
  v8[4] = qword_609280;
  v8[5] = qword_609288;
  v8[6] = qword_609290;
  sub_403EA0(v8, a2, a3);
  return sub_404EA3(a1, a4, a5, (__int64)v8);
}
