#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40425A(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_60A320;
  v8[1] = qword_60A328;
  v8[2] = qword_60A330;
  v8[3] = qword_60A338;
  v8[4] = qword_60A340;
  v8[5] = qword_60A348;
  v8[6] = qword_60A350;
  sub_402D27(v8, a2, a3);
  return sub_403D2A(a1, a4, a5, (__int64)v8);
}
