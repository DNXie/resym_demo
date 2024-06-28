#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  int *v6; // rax
  __int64 v7; // r12
  char *v8; // rbx
  int *v9; // rax
  char *const *argv; // [rsp+0h] [rbp-50h]
  int argc; // [rsp+Ch] [rbp-44h]
  char v12; // [rsp+1Bh] [rbp-35h]
  int v13; // [rsp+1Ch] [rbp-34h]
  unsigned __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  char *v15; // [rsp+28h] [rbp-28h]
  char *s1; // [rsp+30h] [rbp-20h]
  FILE *v17; // [rsp+38h] [rbp-18h]

  argc = a1;
  argv = a2;
  v12 = 1;
  v15 = 0LL;
  sub_402F8C(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_405B90(sub_402D80);
  byte_608263 = 0;
  byte_608262 = 0;
  byte_608261 = 0;
  byte_608260 = 0;
  dword_608270 = 75;
  qword_608268 = (char *)locale;
  dword_608274 = 0;
  dword_608278 = 0;
  dword_60827C = 0;
  if ( a1 > 1 && *a2[1] == 45 && (unsigned int)(a2[1][1] - 48) <= 9 )
  {
    v15 = a2[1] + 1;
    a2[1] = *a2;
    argv = a2 + 1;
    argc = a1 - 1;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = getopt_long(argc, argv, "0123456789cstuw:p:", &longopts, 0LL);
        if ( v13 == -1 )
        {
          if ( v15 )
          {
            if ( (unsigned int)sub_405420(v15, 0LL, 10LL, &v14, locale) || v14 > 0x9C4 )
            {
              v4 = sub_403097(v15);
              v5 = gettext("invalid width: %s");
              error(1, 0, v5, v4);
            }
            dword_608270 = v14;
          }
          dword_608280 = 187 * dword_608270 / 200;
          if ( optind == argc )
          {
            sub_401D03(stdin);
          }
          else
          {
            while ( optind < argc )
            {
              s1 = argv[optind];
              if ( !strcmp(s1, "-") )
              {
                sub_401D03(stdin);
              }
              else
              {
                v17 = fopen(s1, "r");
                if ( v17 )
                {
                  sub_401D03(v17);
                  if ( (unsigned int)sub_40588C(v17) == -1 )
                  {
                    v6 = __errno_location();
                    error(0, *v6, "%s", s1);
                    v12 = 0;
                  }
                }
                else
                {
                  v7 = sub_403097(s1);
                  v8 = gettext("cannot open %s for reading");
                  v9 = __errno_location();
                  error(0, *v9, v8, v7);
                  v12 = 0;
                }
              }
              ++optind;
            }
          }
          exit(v12 == 0);
        }
        if ( v13 != 112 )
          break;
        sub_401C5E(optarg);
      }
      if ( v13 <= 112 )
        break;
      if ( v13 == 116 )
      {
        byte_608261 = 1;
      }
      else if ( v13 > 116 )
      {
        if ( v13 == 117 )
        {
          byte_608263 = 1;
        }
        else
        {
          if ( v13 != 119 )
            goto LABEL_18;
          v15 = (char *)optarg;
        }
      }
      else
      {
        if ( v13 != 115 )
          goto LABEL_18;
        byte_608262 = 1;
      }
    }
    if ( v13 == -130 )
      sub_4016D7(0);
    if ( v13 != 99 )
    {
      if ( v13 == -131 )
      {
        sub_404F61(
          (_DWORD)stdout,
          (unsigned int)"fmt",
          (unsigned int)"GNU coreutils",
          (_DWORD)off_6081C0,
          (unsigned int)"Ross Paterson",
          0,
          (char)argv);
        exit(0);
      }
LABEL_18:
      if ( (unsigned int)(v13 - 48) <= 9 )
      {
        v3 = gettext("invalid option -- %c; -WIDTH is recognized only when it is the first\noption; use -w N instead");
        error(0, 0, v3, (unsigned int)v13);
      }
      sub_4016D7(1);
    }
    byte_608260 = 1;
  }
}
