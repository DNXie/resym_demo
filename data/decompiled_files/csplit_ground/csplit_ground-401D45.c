#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401D45(__int64 a1, __int64 a2)
{
  char *v3; // rbx
  int *v4; // rax
  __int64 v5; // [rsp+18h] [rbp-18h]

  if ( !a2 )
    return 0LL;
  v5 = sub_40600B(0LL, a1, a2);
  if ( !v5 )
    byte_60B348 = 1;
  if ( v5 == -1 )
  {
    v3 = gettext("read error");
    v4 = __errno_location();
    error(0, *v4, v3);
    sub_401C9C();
  }
  return v5;
}
