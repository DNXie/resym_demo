#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_40B027(__int64 a1, const char *a2)
{
  __int64 v2; // r12
  char *v3; // rbx
  char *v4; // rax

  v2 = sub_4112FB(a1);
  v3 = gettext(a2);
  v4 = gettext("%s: invalid field specification %s");
  error(2, 0, v4, v3, v2);
  abort();
}
