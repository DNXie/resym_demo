#include "/share/binary_recovery/clang-parser/defs.hh"
void __noreturn sub_414B0B()
{
  char *v0; // rax

  v0 = gettext("memory exhausted");
  error(dword_61D580, 0, "%s", v0);
  abort();
}
