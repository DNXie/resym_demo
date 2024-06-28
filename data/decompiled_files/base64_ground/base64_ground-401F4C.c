#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  __int64 v5; // rbx
  char *v6; // rax
  int *v7; // rax
  char *v8; // rbx
  int *v9; // rax
  int *v10; // rax
  char v11; // [rsp+12h] [rbp-2Eh]
  char v12; // [rsp+13h] [rbp-2Dh]
  int v13; // [rsp+14h] [rbp-2Ch]
  __int64 v14; // [rsp+18h] [rbp-28h] BYREF
  FILE *v15; // [rsp+20h] [rbp-20h]
  char *s1; // [rsp+28h] [rbp-18h]

  v11 = 0;
  v12 = 0;
  v14 = 76LL;
  sub_402E86(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_405A80(sub_402C7A);
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = getopt_long(a1, a2, "diw:", &longopts, 0LL);
      if ( v13 == -1 )
      {
        if ( a1 - optind > 1 )
        {
          v5 = sub_402F91(a2[optind]);
          v6 = gettext("extra operand %s");
          error(0, 0, v6, v5);
          sub_401727(1);
        }
        if ( optind >= a1 )
          s1 = "-";
        else
          s1 = a2[optind];
        if ( !strcmp(s1, "-") )
        {
          v15 = (FILE *)stdin;
        }
        else
        {
          v15 = fopen(s1, "rb");
          if ( !v15 )
          {
            v7 = __errno_location();
            error(1, *v7, "%s", s1);
          }
        }
        sub_402E4C(v15, 2LL);
        if ( v11 )
          sub_401C02(v15, stdout, v12);
        else
          sub_4019BB(v15, stdout, v14);
        if ( (unsigned int)sub_405786(v15) == -1 )
        {
          if ( !strcmp(s1, "-") )
          {
            v8 = gettext("closing standard input");
            v9 = __errno_location();
            error(1, *v9, v8);
          }
          else
          {
            v10 = __errno_location();
            error(1, *v10, "%s", s1);
          }
        }
        exit(0);
      }
      if ( v13 != 100 )
        break;
      v11 = 1;
    }
    if ( v13 <= 100 )
      break;
    if ( v13 == 105 )
    {
      v12 = 1;
    }
    else
    {
      if ( v13 != 119 )
        goto LABEL_17;
      if ( (unsigned int)sub_40531A(optarg, 0LL, 0LL, &v14, 0LL) )
      {
        v3 = sub_4043D6(optarg);
        v4 = gettext("invalid wrap size: %s");
        error(1, 0, v4, v3);
      }
    }
  }
  if ( v13 == -131 )
  {
    sub_404E5B(
      (_DWORD)stdout,
      (unsigned int)"base64",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_6081D0,
      (unsigned int)"Simon Josefsson",
      0,
      (char)a2);
    exit(0);
  }
  if ( v13 == -130 )
    sub_401727(0);
LABEL_17:
  sub_401727(1);
}
