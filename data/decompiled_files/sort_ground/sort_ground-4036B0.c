#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_4036B0(int a1, int a2)
{
  char *v2; // rbx
  int *v3; // rax

  if ( dup2(a1, a2) < 0 )
  {
    v2 = gettext("dup2 failed");
    v3 = __errno_location();
    error(2, *v3, v2);
  }
}
