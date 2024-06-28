#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4035C9(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_607240;
  v4[1] = qword_607248;
  v4[2] = qword_607250;
  v4[3] = qword_607258;
  v4[4] = qword_607260;
  v4[5] = qword_607268;
  v4[6] = qword_607270;
  sub_402118(v4, a3, 1);
  return sub_4031D6(0, a1, a2, (__int64)v4);
}
