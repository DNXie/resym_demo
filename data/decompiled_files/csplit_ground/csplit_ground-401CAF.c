#include "/share/binary_recovery/clang-parser/defs.hh"
void __noreturn sub_401CAF()
{
  char *v0; // rax

  v0 = gettext("memory exhausted");
  error(0, 0, "%s", v0);
  sub_401C9C();
}
