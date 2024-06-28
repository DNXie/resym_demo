#include "/share/binary_recovery/clang-parser/defs.hh"
void __noreturn sub_404728()
{
  char *v0; // rax

  v0 = gettext("memory exhausted");
  error(dword_6071C8, 0, "%s", v0);
  abort();
}
