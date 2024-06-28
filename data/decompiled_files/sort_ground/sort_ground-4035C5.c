#include "/share/binary_recovery/clang-parser/defs.hh"
FILE *__fastcall sub_4035C5(char *a1, _BYTE *a2)
{
  char *v2; // rax
  FILE *v4; // [rsp+18h] [rbp-8h]

  v4 = sub_40352E(a1, a2);
  if ( !v4 )
  {
    v2 = gettext("open failed");
    sub_402C5C(v2, a1);
  }
  return v4;
}
