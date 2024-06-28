#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_404870(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_6083E0;
  v8[1] = qword_6083E8;
  v8[2] = qword_6083F0;
  v8[3] = qword_6083F8;
  v8[4] = qword_608400;
  v8[5] = qword_608408;
  v8[6] = qword_608410;
  sub_40333D(v8, a2, a3);
  return sub_404340(a1, a4, a5, (__int64)v8);
}
