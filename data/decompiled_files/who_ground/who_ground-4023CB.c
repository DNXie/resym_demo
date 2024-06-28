#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4023CB(__int64 a1)
{
  char *v1; // rax
  size_t v2; // rbx
  char *v3; // rax
  size_t v4; // rax
  unsigned int v5; // er13
  char *v6; // r12
  unsigned int v7; // ebx
  char *v8; // rax
  const char *v9; // rbx
  char *v10; // rax
  char *ptr; // [rsp+38h] [rbp-48h]
  char s[24]; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  ptr = sub_40235F(a1);
  sprintf(s, "%ld", *(int *)(a1 + 4));
  if ( !qword_60F338 )
  {
    v1 = gettext("term=");
    v2 = strlen(v1);
    v3 = gettext("exit=");
    v4 = strlen(v3);
    qword_60F338 = (char *)sub_405B39(v2 + v4 + 14);
  }
  v5 = *(__int16 *)(a1 + 334);
  v6 = gettext("exit=");
  v7 = *(__int16 *)(a1 + 332);
  v8 = gettext("term=");
  sprintf(qword_60F338, "%s%d %s%d", v8, v7, v6, v5);
  v9 = qword_60F338;
  v10 = sub_401B3F(a1);
  sub_401BAC(-1, (__int64)&locale, 32, 32, a1 + 8, (__int64)v10, &locale, s, (__int64)ptr, v9);
  free(ptr);
  return __readfsqword(0x28u) ^ v14;
}
