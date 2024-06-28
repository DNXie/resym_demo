#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  char *s; // [rsp+28h] [rbp-18h]

  sub_401BB0(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_4042E0(sub_4017DA);
  sub_401A61(
    a1,
    (_DWORD)a2,
    (unsigned int)"basename",
    (unsigned int)"GNU coreutils",
    (_DWORD)off_606180,
    (unsigned int)sub_401437,
    "David MacKenzie",
    0LL);
  if ( getopt_long(a1, a2, "+", 0LL, 0LL) != -1 )
    sub_401437(1);
  if ( optind + 1 > a1 )
  {
    v3 = gettext("missing operand");
    error(0, 0, v3);
    sub_401437(1);
  }
  if ( optind + 2 < a1 )
  {
    v4 = sub_401CBB(a2[optind + 2]);
    v5 = gettext("extra operand %s");
    error(0, 0, v5, v4);
    sub_401437(1);
  }
  s = (char *)sub_4018C5(a2[optind]);
  sub_4019FF(s);
  if ( optind + 2 == a1 && *s != 47 )
    sub_401537(s, a2[optind + 1]);
  puts(s);
  free(s);
  exit(0);
}
