#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_4057E6(char *a1, const char *a2, size_t a3)
{
  char *v3; // rbx
  int *v4; // rax
  char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  size_t v10; // [rsp+28h] [rbp-18h]

  *__errno_location() = 0;
  v10 = strxfrm(a1, a2, a3);
  if ( *__errno_location() )
  {
    v3 = gettext("string transformation failed");
    v4 = __errno_location();
    error(0, *v4, v3);
    v5 = gettext("set LC_ALL='C' to work around the problem");
    error(0, 0, v5);
    v6 = sub_412786(0LL, 6LL, a2);
    v7 = gettext("the untransformed string was %s");
    error(2, 0, v7, v6);
  }
  return v10;
}
