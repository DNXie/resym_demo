#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_40190E(const char *a1)
{
  return !strcmp(a1, "=")
      || !strcmp(a1, "!=")
      || !strcmp(a1, "==")
      || !strcmp(a1, "-nt")
      || !strcmp(a1, "-ot")
      || !strcmp(a1, "-ef")
      || !strcmp(a1, "-eq")
      || !strcmp(a1, "-ne")
      || !strcmp(a1, "-lt")
      || !strcmp(a1, "-le")
      || !strcmp(a1, "-gt")
      || !strcmp(a1, "-ge");
}
