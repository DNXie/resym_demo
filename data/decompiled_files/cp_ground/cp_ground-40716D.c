#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40716D()
{
  char *v0; // rbx
  int *v1; // rax

  if ( (unsigned int)sub_40480B(0LL) )
  {
    v0 = gettext("failed to restore the default file creation context");
    v1 = __errno_location();
    error(1, *v1, v0);
  }
}
