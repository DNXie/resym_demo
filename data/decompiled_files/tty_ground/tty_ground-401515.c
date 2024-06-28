#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  char *v5; // rax
  int v6; // eax
  int v7; // [rsp+14h] [rbp-1Ch]
  const char *s; // [rsp+18h] [rbp-18h]

  sub_401893(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40132D(3u);
  sub_403F80(sub_4016F1);
  for ( byte_606219 = 0; ; byte_606219 = 1 )
  {
    v7 = getopt_long(a1, a2, "s", &longopts, 0LL);
    if ( v7 == -1 )
      break;
    if ( v7 == -130 )
      sub_40144F(0);
    if ( v7 != 115 )
    {
      if ( v7 != -131 )
        sub_40144F(2);
      sub_403868(
        (_DWORD)stdout,
        (unsigned int)"tty",
        (unsigned int)"GNU coreutils",
        (_DWORD)off_606190,
        (unsigned int)"David MacKenzie",
        0,
        (char)a2);
      exit(0);
    }
  }
  if ( optind < a1 )
  {
    v3 = sub_40199E(a2[optind]);
    v4 = gettext("extra operand %s");
    error(0, 0, v4, v3);
  }
  s = ttyname(0);
  if ( byte_606219 != 1 )
  {
    if ( s )
    {
      puts(s);
    }
    else
    {
      v5 = gettext("not a tty");
      puts(v5);
    }
  }
  v6 = isatty(0);
  exit(v6 == 0);
}
