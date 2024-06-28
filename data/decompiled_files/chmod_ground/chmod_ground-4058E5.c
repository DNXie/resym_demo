#include "/share/binary_recovery/clang-parser/defs.hh"
void __noreturn sub_4058E5()
{
  char *v0; // rax

  v0 = gettext("memory exhausted");
  error(status, 0, "%s", v0);
  abort();
}
