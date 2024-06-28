#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401E29(__int64 a1, __int64 a2)
{
  const char *v2; // rbx
  int *v3; // rax
  char *v5; // rbx
  int *v6; // rax
  __int64 v7; // [rsp+10h] [rbp-20h]

  while ( 1 )
  {
    v7 = sub_405285((unsigned int)fildes, a1, a2);
    if ( v7 == -1 )
    {
      v2 = s1;
      v3 = __errno_location();
      error(0, *v3, "%s", v2);
      return 0LL;
    }
    if ( !v7 )
      break;
    if ( sub_402F11(1LL, a1, v7) != v7 )
    {
      v5 = gettext("write error");
      v6 = __errno_location();
      error(1, *v6, v5);
    }
  }
  return 1LL;
}
