#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax

  sub_40512F(*a2, a2, a3);
  setlocale(6, shortopts);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_407AA0(sub_40222C);
  sub_404FE0(
    a1,
    (_DWORD)a2,
    (unsigned int)"uptime",
    (unsigned int)"GNU coreutils",
    (_DWORD)off_60A210,
    (unsigned int)sub_401EE2,
    "Joseph Arceneaux",
    "David MacKenzie",
    "Kaveh Ghazi",
    0LL);
  if ( getopt_long(a1, a2, shortopts, 0LL, 0LL) != -1 )
    sub_401EE2(1);
  if ( a1 == optind )
  {
    sub_401E7F("/var/run/utmp", 1u);
  }
  else
  {
    if ( a1 - optind != 1 )
    {
      v3 = sub_40523A(a2[optind + 1]);
      v4 = gettext("extra operand %s");
      error(0, 0, v4, v3);
      sub_401EE2(1);
    }
    sub_401E7F(a2[optind], 0);
  }
  exit(0);
}
