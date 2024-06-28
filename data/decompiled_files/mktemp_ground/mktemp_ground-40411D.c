#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40411D(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_60A320;
  v4[1] = qword_60A328;
  v4[2] = qword_60A330;
  v4[3] = qword_60A338;
  v4[4] = qword_60A340;
  v4[5] = qword_60A348;
  v4[6] = qword_60A350;
  sub_402C6C(v4, a3, 1);
  return sub_403D2A(0, a1, a2, (__int64)v4);
}
