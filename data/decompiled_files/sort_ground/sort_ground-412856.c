#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_412856(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_61DBC0;
  v4[1] = qword_61DBC8;
  v4[2] = qword_61DBD0;
  v4[3] = qword_61DBD8;
  v4[4] = qword_61DBE0;
  v4[5] = qword_61DBE8;
  v4[6] = qword_61DBF0;
  sub_4113A5(v4, a3, 1);
  return sub_412463(0, a1, a2, (__int64)v4);
}
