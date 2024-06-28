#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4029CF(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  char v9[24]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  v3 = sub_404873(*(_QWORD *)(qword_60B388 + 8LL * *(int *)(a1 + 24)));
  v4 = qword_60B468;
  v5 = gettext("%s: %s: match not found");
  fprintf(stderr, v5, v4, v3);
  if ( a2 )
  {
    v6 = sub_4046E3(a2, v9);
    v7 = gettext(" on repetition %s\n");
    fprintf(stderr, v7, v6);
  }
  else
  {
    fputc(10, stderr);
  }
  if ( a3 != 1 )
  {
    sub_40283A();
    sub_403131();
  }
  sub_401C9C();
}
