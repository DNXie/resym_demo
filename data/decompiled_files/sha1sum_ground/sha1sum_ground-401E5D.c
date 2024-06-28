#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401E5D(const char *a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  int *v4; // rax
  int *v6; // rax
  bool v8; // [rsp+23h] [rbp-Dh]
  __int64 v9; // [rsp+28h] [rbp-8h]

  v3 = strcmp(a1, "-");
  v8 = v3 == 0;
  if ( v3 )
  {
    v9 = sub_404E7F(a1, "r");
    if ( !v9 )
      goto LABEL_4;
    sub_404E45(v9, 2LL);
  }
  else
  {
    byte_60A280 = 1;
    v9 = stdin;
    sub_404E45(stdin, 2LL);
  }
  if ( !(unsigned int)sub_4030E9(v9, a3) )
  {
    if ( v8 || !(unsigned int)sub_40733C(v9) )
      return 1LL;
LABEL_4:
    v4 = __errno_location();
    error(0, *v4, "%s", a1);
    return 0LL;
  }
  v6 = __errno_location();
  error(0, *v6, "%s", a1);
  if ( v9 != stdin )
    sub_40733C(v9);
  return 0LL;
}
