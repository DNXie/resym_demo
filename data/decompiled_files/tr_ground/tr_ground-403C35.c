#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403C35(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  int *v3; // rax
  __int64 v5; // [rsp+18h] [rbp-18h]

  v5 = sub_40637D(0LL, a1, a2);
  if ( v5 == -1 )
  {
    v2 = gettext("read error");
    v3 = __errno_location();
    error(1, *v3, v2);
  }
  return v5;
}
