#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406C1F(const char *a1, const char *a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  char *v4; // rbx
  int *v5; // rax
  unsigned int v7; // [rsp+1Ch] [rbp-24h]

  *__errno_location() = 0;
  v7 = strcoll(a1, a2);
  if ( *__errno_location() )
  {
    v2 = sub_40FD82(1LL, a2);
    v3 = sub_40FD82(0LL, a1);
    v4 = gettext("cannot compare file names %s and %s");
    v5 = __errno_location();
    error(0, *v5, v4, v3, v2);
    sub_405056(0);
    longjmp(env, 1);
  }
  return v7;
}
