#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_402C5C(const char *a1, char *a2)
{
  char *v2; // rbx
  int *v3; // rax

  if ( a2 )
    v2 = a2;
  else
    v2 = gettext("standard output");
  v3 = __errno_location();
  error(0, *v3, "%s: %s", a1, v2);
  exit(2);
}
