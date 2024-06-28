#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4034B6(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_607260;
  v8[1] = qword_607268;
  v8[2] = qword_607270;
  v8[3] = qword_607278;
  v8[4] = qword_607280;
  v8[5] = qword_607288;
  v8[6] = qword_607290;
  sub_401F83(v8, a2, a3);
  return sub_402F86(a1, a4, a5, (__int64)v8);
}
