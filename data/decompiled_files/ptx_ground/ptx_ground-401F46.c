#include "/share/binary_recovery/clang-parser/defs.hh"
void __noreturn sub_401F46()
{
  char *v0; // rbx
  int *v1; // rax

  v0 = gettext("error in regular expression matcher");
  v1 = __errno_location();
  error(0, *v1, v0);
  exit(1);
}
