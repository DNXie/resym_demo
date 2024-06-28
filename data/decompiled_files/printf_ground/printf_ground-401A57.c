#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_401A57(const char *a1, const char *a2)
{
  int *v2; // rax
  char *v3; // rax

  if ( *__errno_location() )
  {
    v2 = __errno_location();
    error(0, *v2, "%s", a1);
    status = 1;
  }
  else if ( *a2 )
  {
    if ( a1 == a2 )
      v3 = gettext("%s: expected a numeric value");
    else
      v3 = gettext("%s: value not completely converted");
    error(0, 0, v3, a1);
    status = 1;
  }
}
