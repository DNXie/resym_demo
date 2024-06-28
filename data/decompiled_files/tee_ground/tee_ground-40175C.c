#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rbx
  int *v4; // rax
  char v5; // [rsp+2Bh] [rbp-15h]
  int v6; // [rsp+2Ch] [rbp-14h]

  sub_40213D(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404AD0(sub_401E4B);
  byte_607239 = 0;
  byte_60723A = 0;
  while ( 1 )
  {
    v6 = getopt_long(a1, a2, "ai", &longopts, 0LL);
    if ( v6 == -1 )
    {
      if ( byte_60723A )
        signal(2, (__sighandler_t)1);
      v5 = sub_401920((unsigned int)(a1 - optind), &a2[optind]);
      if ( close(0) )
      {
        v3 = gettext("standard input");
        v4 = __errno_location();
        error(1, *v4, v3);
      }
      exit(v5 == 0);
    }
    if ( v6 == -130 )
      sub_401677(0);
    if ( v6 <= -130 )
      break;
    if ( v6 == 97 )
    {
      byte_607239 = 1;
    }
    else
    {
      if ( v6 != 105 )
        goto LABEL_13;
      byte_60723A = 1;
    }
  }
  if ( v6 == -131 )
  {
    sub_4040F5(
      (_DWORD)stdout,
      (unsigned int)"tee",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_6071C0,
      (unsigned int)"Mike Parker",
      (unsigned int)"Richard M. Stallman",
      "David MacKenzie",
      0LL);
    exit(0);
  }
LABEL_13:
  sub_401677(1);
}
