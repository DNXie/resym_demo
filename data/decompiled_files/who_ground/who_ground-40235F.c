#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_40235F(__int64 a1)
{
  char *v1; // rax
  size_t v2; // rax
  char *v3; // rax
  char *dest; // [rsp+18h] [rbp-8h]

  v1 = gettext("id=");
  v2 = strlen(v1);
  dest = (char *)sub_405B39(v2 + 5);
  v3 = gettext("id=");
  strcpy(dest, v3);
  strncat(dest, (const char *)(a1 + 40), 4uLL);
  return dest;
}
