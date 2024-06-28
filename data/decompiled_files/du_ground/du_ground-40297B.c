#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40297B(__int64 a1)
{
  FILE *v1; // rbx
  const char *v2; // rax
  char v4[664]; // [rsp+10h] [rbp-2B0h] BYREF
  unsigned __int64 v5; // [rsp+2A8h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  v1 = stdout;
  v2 = (const char *)sub_40A30D(a1, v4, (unsigned int)dword_61B3F8, 1LL, qword_61B418);
  fputs_unlocked(v2, v1);
  return __readfsqword(0x28u) ^ v5;
}
