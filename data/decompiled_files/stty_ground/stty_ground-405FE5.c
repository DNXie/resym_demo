#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405FE5(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_613300;
  v8[1] = qword_613308;
  v8[2] = qword_613310;
  v8[3] = qword_613318;
  v8[4] = qword_613320;
  v8[5] = qword_613328;
  v8[6] = qword_613330;
  sub_404AB2(v8, a2, a3);
  return sub_405AB5(a1, a4, a5, (__int64)v8);
}
