#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4058D9(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_6092C0;
  v4[1] = qword_6092C8;
  v4[2] = qword_6092D0;
  v4[3] = qword_6092D8;
  v4[4] = qword_6092E0;
  v4[5] = qword_6092E8;
  v4[6] = qword_6092F0;
  sub_404428(v4, a3, 1);
  return sub_4054E6(0, a1, a2, (__int64)v4);
}
