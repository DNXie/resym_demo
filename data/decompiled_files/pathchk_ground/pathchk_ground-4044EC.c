#include "/share/binary_recovery/clang-parser/defs.hh"
void __noreturn sub_4044EC()
{
  char *v0; // rax

  v0 = gettext("memory exhausted");
  error(status, 0, "%s", v0);
  abort();
}
