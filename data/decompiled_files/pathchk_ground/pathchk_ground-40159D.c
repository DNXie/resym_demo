#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  bool v4; // [rsp+29h] [rbp-17h]
  unsigned __int8 v5; // [rsp+2Ah] [rbp-16h]
  unsigned __int8 v6; // [rsp+2Bh] [rbp-15h]
  int v7; // [rsp+2Ch] [rbp-14h]

  v4 = 1;
  v5 = 0;
  v6 = 0;
  sub_40212D(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404820(sub_401F8B);
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = getopt_long(a1, a2, "+pP", &longopts, 0LL);
      if ( v7 == -1 )
      {
        if ( optind == a1 )
        {
          v3 = gettext("missing operand");
          error(0, 0, v3);
          sub_4014D7(1);
        }
        while ( optind < a1 )
        {
          v4 = (v4 & (unsigned __int8)sub_40197D(a2[optind], v5, v6)) != 0;
          ++optind;
        }
        exit(!v4);
      }
      if ( v7 != 80 )
        break;
      v6 = 1;
    }
    if ( v7 <= 80 )
      break;
    if ( v7 == 112 )
    {
      v5 = 1;
    }
    else
    {
      if ( v7 != 128 )
        goto LABEL_14;
      v5 = 1;
      v6 = 1;
    }
  }
  if ( v7 == -131 )
  {
    sub_404102(
      (_DWORD)stdout,
      (unsigned int)"pathchk",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_6071A0,
      (unsigned int)"Paul Eggert",
      (unsigned int)"David MacKenzie",
      "Jim Meyering",
      0LL);
    exit(0);
  }
  if ( v7 == -130 )
    sub_4014D7(0);
LABEL_14:
  sub_4014D7(1);
}
