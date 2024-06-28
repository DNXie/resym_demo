#include "/share/binary_recovery/clang-parser/defs.hh"
void __noreturn sub_4049A4()
{
  char *v0; // rax

  v0 = gettext("memory exhausted");
  error(dword_6071D8, 0, "%s", v0);
  abort();
}
