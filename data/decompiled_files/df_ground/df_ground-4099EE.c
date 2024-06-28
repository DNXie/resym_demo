#include "/share/binary_recovery/clang-parser/defs.hh"
void __noreturn sub_4099EE()
{
  char *v0; // rax

  v0 = gettext("memory exhausted");
  error(dword_618480, 0, "%s", v0);
  abort();
}
