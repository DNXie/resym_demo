#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_405EA8(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_613300;
  v4[1] = qword_613308;
  v4[2] = qword_613310;
  v4[3] = qword_613318;
  v4[4] = qword_613320;
  v4[5] = qword_613328;
  v4[6] = qword_613330;
  sub_4049F7(v4, a3, 1);
  return sub_405AB5(0, a1, a2, (__int64)v4);
}
