#include "/share/binary_recovery/clang-parser/defs.hh"
void __noreturn sub_4017A7()
{
  char *v0; // rbx
  int *v1; // rax

  v0 = gettext("write error");
  v1 = __errno_location();
  error(1, *v1, v0);
  abort();
}
