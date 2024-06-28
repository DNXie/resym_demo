#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_402540(__int64 a1)
{
  char *v1; // rbx
  char *v2; // rax
  char *ptr; // [rsp+38h] [rbp-38h]
  char s[24]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v6; // [rsp+58h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  ptr = sub_40235F(a1);
  sprintf(s, "%ld", *(int *)(a1 + 4));
  v1 = sub_401B3F(a1);
  v2 = gettext("LOGIN");
  sub_401BAC(-1, (__int64)v2, 32, 32, a1 + 8, (__int64)v1, &locale, s, (__int64)ptr, &locale);
  free(ptr);
  return __readfsqword(0x28u) ^ v6;
}
