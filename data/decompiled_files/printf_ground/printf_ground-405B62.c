#include "/share/binary_recovery/clang-parser/defs.hh"
void __noreturn sub_405B62()
{
  char *v0; // rax

  v0 = gettext("memory exhausted");
  error(dword_60F218, 0, "%s", v0);
  abort();
}
