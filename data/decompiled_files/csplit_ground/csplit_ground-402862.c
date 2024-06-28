#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_402862(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbx
  char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  char v8[24]; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-18h]

  v9 = __readfsqword(0x28u);
  v2 = sub_4046E3(*(_QWORD *)(a1 + 8), v8);
  v3 = sub_404873(v2);
  v4 = qword_60B468;
  v5 = gettext("%s: %s: line number out of range");
  fprintf(stderr, v5, v4, v3);
  if ( a2 )
  {
    v6 = sub_4046E3(a2, v8);
    v7 = gettext(" on repetition %s\n");
    fprintf(stderr, v7, v6);
  }
  else
  {
    fputc(10, stderr);
  }
  sub_401C9C();
}
