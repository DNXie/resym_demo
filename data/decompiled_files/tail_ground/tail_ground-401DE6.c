#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_401DE6(const char **a1)
{
  char *result; // rax

  if ( !strcmp(*a1, "-") )
    result = gettext("standard input");
  else
    result = (char *)*a1;
  return result;
}
