#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_40A67B(int a1)
{
  char *v1; // rax

  v1 = gettext("unable to record current working directory");
  error(status, a1, v1);
  abort();
}
