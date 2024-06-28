#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_402EF3(unsigned int a1)
{
  const char *v1; // rbx
  char *v2; // r12
  size_t v3; // rax
  int v4; // ebx
  char *v5; // r12
  size_t v6; // rax

  strcpy(dest, s);
  if ( qword_60B360 )
  {
    v1 = qword_60B360;
    v2 = dest;
    v3 = strlen(s);
    sprintf(&v2[v3], v1, a1);
  }
  else
  {
    v4 = dword_60B260;
    v5 = dest;
    v6 = strlen(s);
    sprintf(&v5[v6], "%0*u", v4, a1);
  }
  return dest;
}
