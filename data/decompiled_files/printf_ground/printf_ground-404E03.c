#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404E03(unsigned int a1, const char *a2)
{
  char *v2; // rax
  char *v3; // rbx
  char *v4; // rax

  if ( a2 )
  {
    v3 = gettext(a2);
    v4 = gettext("cannot convert U+%04X to local character set: %s");
    error(1, 0, v4, a1, v3);
  }
  else
  {
    v2 = gettext("cannot convert U+%04X to local character set");
    error(1, 0, v2, a1);
  }
  return -1LL;
}
