#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  char *v5; // rax
  const char *s; // [rsp+28h] [rbp-18h]

  sub_401983(*a2, a2, a3);
  setlocale(6, shortopts);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404070(sub_401692);
  sub_401834(
    a1,
    (_DWORD)a2,
    (unsigned int)"logname",
    (unsigned int)"GNU coreutils",
    (_DWORD)off_606180,
    (unsigned int)sub_401437,
    "FIXME: unknown",
    0LL);
  if ( getopt_long(a1, a2, shortopts, 0LL, 0LL) != -1 )
    sub_401437(1);
  if ( optind < a1 )
  {
    v3 = sub_401A8E(a2[optind]);
    v4 = gettext("extra operand %s");
    error(0, 0, v4, v3);
    sub_401437(1);
  }
  s = getlogin();
  if ( s )
  {
    puts(s);
    exit(0);
  }
  v5 = gettext("no login name");
  error(0, 0, v5);
  exit(1);
}
