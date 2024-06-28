#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // r12
  char *v4; // rbx
  int *v5; // rax
  __int64 v6; // r12
  char *v7; // rbx
  int *v8; // rax
  unsigned int v9; // eax
  const char **v10; // rdx
  char *v11; // rbx
  int *v12; // rax
  int v13; // eax
  const char *v14; // rbx
  int *v15; // rax
  char v16; // [rsp+26h] [rbp-2Ah]
  char v17; // [rsp+27h] [rbp-29h]
  int v18; // [rsp+28h] [rbp-28h]
  int v19; // [rsp+28h] [rbp-28h]
  int status; // [rsp+2Ch] [rbp-24h]
  char **i; // [rsp+30h] [rbp-20h]
  char *v22; // [rsp+38h] [rbp-18h]

  v16 = 0;
  v17 = 0;
  sub_401C9B(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40147D(0x7Du);
  sub_404390(sub_401AF9);
  while ( 1 )
  {
    while ( 1 )
    {
      v18 = getopt_long(a1, a2, "+iu:0", &longopts, 0LL);
      if ( v18 == -1 )
      {
        if ( optind < a1 && !strcmp(a2[optind], "-") )
          v16 = 1;
        if ( v16 )
          environ = (char **)&unk_606260;
        optind = 0;
        while ( 1 )
        {
          v19 = getopt_long(a1, a2, "+iu:0", &longopts, 0LL);
          if ( v19 == -1 )
            break;
          if ( v19 == 117 && unsetenv(optarg) )
          {
            v3 = sub_401DA6(optarg);
            v4 = gettext("cannot unset %s");
            v5 = __errno_location();
            error(125, *v5, v4, v3);
          }
        }
        if ( optind < a1 && !strcmp(a2[optind], "-") )
          ++optind;
        while ( optind < a1 )
        {
          v22 = strchr(a2[optind], 61);
          if ( !v22 )
            break;
          if ( putenv(a2[optind]) )
          {
            *v22 = 0;
            v6 = sub_401DA6(a2[optind]);
            v7 = gettext("cannot set %s");
            v8 = __errno_location();
            error(125, *v8, v7, v6);
          }
          ++optind;
        }
        if ( a1 <= optind )
        {
          for ( i = environ; *i; ++i )
          {
            if ( v17 )
              v9 = 0;
            else
              v9 = 10;
            v10 = (const char **)i;
            printf("%s%c", *v10, v9);
          }
          exit(0);
        }
        if ( v17 )
        {
          v11 = gettext("cannot specify --null (-0) with command");
          v12 = __errno_location();
          error(0, *v12, v11);
          sub_40159F(125);
        }
        execvp(a2[optind], &a2[optind]);
        if ( *__errno_location() == 2 )
          v13 = 127;
        else
          v13 = 126;
        status = v13;
        v14 = a2[optind];
        v15 = __errno_location();
        error(0, *v15, "%s", v14);
        exit(status);
      }
      if ( v18 != 48 )
        break;
      v17 = 1;
    }
    if ( v18 <= 48 )
      break;
    if ( v18 == 105 )
    {
      v16 = 1;
    }
    else if ( v18 != 117 )
    {
      goto LABEL_14;
    }
  }
  if ( v18 == -131 )
  {
    sub_403C70(
      (_DWORD)stdout,
      (unsigned int)"env",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_6061A0,
      (unsigned int)"Richard Mlynarik",
      (unsigned int)"David MacKenzie",
      0);
    exit(0);
  }
  if ( v18 == -130 )
    sub_40159F(0);
LABEL_14:
  sub_40159F(125);
}
