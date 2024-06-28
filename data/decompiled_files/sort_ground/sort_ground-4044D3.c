#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4044D3(unsigned int a1, char a2, __int64 a3)
{
  char *v4; // rax
  unsigned int v6; // [rsp+14h] [rbp-Ch]
  __int64 v7; // [rsp+18h] [rbp-8h] BYREF

  v6 = sub_415405(a3, 0LL, 10LL, &v7, locale);
  if ( v6 == 1 )
    return -1LL;
  if ( v6 )
    sub_41594B(v6, a1, (unsigned int)a2, &longopts, a3);
  if ( !v7 )
  {
    v4 = gettext("number in parallel must be nonzero");
    error(2, 0, v4);
  }
  return v7;
}
