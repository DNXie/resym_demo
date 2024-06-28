#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_404D6F(__int64 a1)
{
  void *v1; // r12
  const char *v2; // rax
  char *v3; // rbx
  int *v4; // rax

  if ( a1 )
  {
    v1 = sub_404428(a1);
    if ( *__errno_location() )
      v2 = "%s: read error";
    else
      v2 = "%s: end of file";
    v3 = gettext(v2);
    v4 = __errno_location();
    error(status, *v4, v3, v1);
  }
  abort();
}
