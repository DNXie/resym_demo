#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_401838(int a1, unsigned int a2, int a3, const char *a4)
{
  const char *v4; // rax
  char *v8; // [rsp+28h] [rbp-8h]

  v8 = strsignal(a2);
  if ( v8 )
    v4 = v8;
  else
    v4 = "?";
  return printf("%*d %-*s %s\n", a1, a2, a3, a4, v4);
}
