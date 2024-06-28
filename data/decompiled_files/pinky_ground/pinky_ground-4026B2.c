#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_4026B2()
{
  char *v0; // rax
  char *v1; // rax
  char *v2; // rax
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax

  v0 = gettext("Login");
  printf("%-8s", v0);
  if ( byte_608242 )
  {
    v1 = gettext("Name");
    printf(" %-19s", v1);
  }
  v2 = gettext(" TTY");
  printf(" %-9s", v2);
  if ( byte_608240 )
  {
    v3 = gettext("Idle");
    printf(" %-6s", v3);
  }
  v4 = gettext("When");
  printf(" %-*s", dword_6082E8, v4);
  if ( byte_608247 )
  {
    v5 = gettext("Where");
    printf(" %s", v5);
  }
  return putchar_unlocked(10);
}
