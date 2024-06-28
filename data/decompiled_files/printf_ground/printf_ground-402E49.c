#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  char **v6; // [rsp+0h] [rbp-30h]
  __int64 *v7; // [rsp+0h] [rbp-30h]
  int v8; // [rsp+Ch] [rbp-24h]
  int v9; // [rsp+Ch] [rbp-24h]
  int v10; // [rsp+14h] [rbp-1Ch]
  char *v11; // [rsp+18h] [rbp-18h]

  v8 = a1;
  v6 = a2;
  sub_4032A0(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40C020(sub_4030FE);
  status = 0;
  byte_60F290 = getenv("POSIXLY_CORRECT") != 0LL;
  if ( a1 == 2 )
  {
    if ( !strcmp(a2[1], "--help") )
      sub_4018F6(0);
    if ( !strcmp(a2[1], "--version") )
    {
      sub_405778(
        (_DWORD)stdout,
        (unsigned int)"printf",
        (unsigned int)"GNU coreutils",
        (_DWORD)off_60F210,
        (unsigned int)"David MacKenzie",
        0,
        (char)a2);
      exit(0);
    }
  }
  if ( a1 > 1 && !strcmp(a2[1], "--") )
  {
    v8 = a1 - 1;
    v6 = a2 + 1;
  }
  if ( v8 <= 1 )
  {
    v3 = gettext("missing operand");
    error(0, 0, v3);
    sub_4018F6(1);
  }
  v11 = v6[1];
  v9 = v8 - 2;
  v7 = (__int64 *)(v6 + 2);
  do
  {
    v10 = sub_402760(v11, v9, v7);
    v9 -= v10;
    v7 += v10;
  }
  while ( v10 > 0 && v9 > 0 );
  if ( v9 > 0 )
  {
    v4 = sub_4033AB(*v7);
    v5 = gettext("warning: ignoring excess arguments, starting with %s");
    error(0, 0, v5, v4);
  }
  exit(status);
}
