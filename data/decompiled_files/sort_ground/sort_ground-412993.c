#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_412993(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_61DBC0;
  v8[1] = qword_61DBC8;
  v8[2] = qword_61DBD0;
  v8[3] = qword_61DBD8;
  v8[4] = qword_61DBE0;
  v8[5] = qword_61DBE8;
  v8[6] = qword_61DBF0;
  sub_411460(v8, a2, a3);
  return sub_412463(a1, a4, a5, (__int64)v8);
}
