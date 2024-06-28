#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax

  sub_401DAA(*a2, a2, a3);
  setlocale(6, shortopts);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404720(sub_401AB9);
  sub_401C5B(
    a1,
    (_DWORD)a2,
    (unsigned int)"users",
    (unsigned int)"GNU coreutils",
    (_DWORD)off_6061C0,
    (unsigned int)sub_401849,
    "Joseph Arceneaux",
    "David MacKenzie",
    0LL);
  if ( getopt_long(a1, a2, shortopts, 0LL, 0LL) != -1 )
    sub_401849(1);
  if ( a1 == optind )
  {
    sub_4017DA("/var/run/utmp", 1u);
  }
  else
  {
    if ( a1 - optind != 1 )
    {
      v3 = sub_401EB5(a2[optind + 1]);
      v4 = gettext("extra operand %s");
      error(0, 0, v4, v3);
      sub_401849(1);
    }
    sub_4017DA(a2[optind], 0);
  }
  exit(0);
}
