#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_40B084(__int64 a1)
{
  char *v1; // rax

  v1 = gettext("options `-%s' are incompatible");
  error(2, 0, v1, a1);
  abort();
}
