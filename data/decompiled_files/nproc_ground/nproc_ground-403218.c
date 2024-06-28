#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_403218(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_607260;
  v4[1] = qword_607268;
  v4[2] = qword_607270;
  v4[3] = qword_607278;
  v4[4] = qword_607280;
  v4[5] = qword_607288;
  v4[6] = qword_607290;
  sub_401D67(v4, a3, 1);
  return sub_402E25(0, a1, a2, (__int64)v4);
}
