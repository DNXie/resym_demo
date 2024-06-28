#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_402618(__int64 a1)
{
  char *v1; // rax
  char *ptr; // [rsp+38h] [rbp-28h]
  char s[24]; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v5; // [rsp+58h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  ptr = sub_40235F(a1);
  sprintf(s, "%ld", *(int *)(a1 + 4));
  v1 = sub_401B3F(a1);
  sub_401BAC(-1, (__int64)&locale, 32, 32, a1 + 8, (__int64)v1, &locale, s, (__int64)ptr, &locale);
  free(ptr);
  return __readfsqword(0x28u) ^ v5;
}
