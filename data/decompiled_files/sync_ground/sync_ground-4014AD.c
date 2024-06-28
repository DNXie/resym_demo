#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax

  sub_4018BE(*a2, a2, a3);
  setlocale(6, shortopts);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_403F70(sub_4015CD);
  sub_40176F(
    a1,
    (_DWORD)a2,
    (unsigned int)"sync",
    (unsigned int)"coreutils",
    (_DWORD)off_606180,
    (unsigned int)sub_4013E7,
    "Jim Meyering",
    0LL);
  if ( getopt_long(a1, a2, shortopts, 0LL, 0LL) != -1 )
    sub_4013E7(1);
  if ( optind < a1 )
  {
    v3 = gettext("ignoring all arguments");
    error(0, 0, v3);
  }
  sync();
  exit(0);
}
