#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40E7D3(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_61B880;
  v4[1] = qword_61B888;
  v4[2] = qword_61B890;
  v4[3] = qword_61B898;
  v4[4] = qword_61B8A0;
  v4[5] = qword_61B8A8;
  v4[6] = qword_61B8B0;
  sub_40D322(v4, a3, 1);
  return sub_40E3E0(0, a1, a2, (__int64)v4);
}
