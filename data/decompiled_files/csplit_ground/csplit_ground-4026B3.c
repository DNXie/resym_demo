#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_4026B3(const char *a1)
{
  __int64 v1; // r12
  char *v2; // rbx
  int *v3; // rax

  if ( strcmp(a1, "-") )
  {
    if ( (int)sub_407F74(0LL, a1, 0LL, 0LL) < 0 )
    {
      v1 = sub_404873(a1);
      v2 = gettext("cannot open %s for reading");
      v3 = __errno_location();
      error(1, *v3, v2, v1);
    }
  }
}
