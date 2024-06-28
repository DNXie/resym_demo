#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  const char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  int *v6; // rax
  int argc; // [rsp+1Ch] [rbp-24h]
  char v8; // [rsp+23h] [rbp-1Dh]
  int v9; // [rsp+24h] [rbp-1Ch]
  char *v10; // [rsp+28h] [rbp-18h]

  argc = a1;
  v10 = "\t";
  sub_402574(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404C20(sub_402368);
  byte_607260 = 0;
  byte_607261 = 0;
  while ( 1 )
  {
    v9 = getopt_long(a1, a2, "d:s", &longopts, 0LL);
    if ( v9 == -1 )
    {
      if ( optind == a1 )
      {
        argc = a1 + 1;
        a2[a1] = (char *)sub_401607((__int64)"-");
      }
      if ( (unsigned int)sub_401615(v10) )
      {
        sub_4026C2(0LL, 5LL);
        v4 = sub_403C55(v10);
        v5 = gettext("delimiter list ends with an unescaped backslash: %s");
        error(1, 0, v5, v4);
      }
      if ( byte_607261 != 1 )
        v8 = sub_401800(argc - optind, (__int64)&a2[optind]);
      else
        v8 = sub_401D80(argc - optind, (const char **)&a2[optind]);
      free(ptr);
      if ( byte_607260 )
      {
        if ( (unsigned int)sub_404925(stdin) == -1 )
        {
          v6 = __errno_location();
          error(1, *v6, "-");
        }
      }
      exit(v8 == 0);
    }
    if ( v9 == -130 )
      sub_401F97(0);
    if ( v9 <= -130 )
      break;
    if ( v9 == 100 )
    {
      if ( *(_BYTE *)optarg )
        v3 = (const char *)optarg;
      else
        v3 = "\\0";
      v10 = (char *)v3;
    }
    else
    {
      if ( v9 != 115 )
        goto LABEL_16;
      byte_607261 = 1;
    }
  }
  if ( v9 == -131 )
  {
    sub_404506(
      (_DWORD)stdout,
      (unsigned int)"paste",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_6071B0,
      (unsigned int)"David M. Ihnat",
      (unsigned int)"David MacKenzie",
      0);
    exit(0);
  }
LABEL_16:
  sub_401F97(1);
}
