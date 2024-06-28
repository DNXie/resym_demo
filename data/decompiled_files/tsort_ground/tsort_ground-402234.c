#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  const char *v5; // rax
  int v6; // eax

  sub_4028D4(*a2, a2, a3);
  setlocale(6, shortopts);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_4053E0(sub_4023D3);
  sub_402785(
    a1,
    (_DWORD)a2,
    (unsigned int)"tsort",
    (unsigned int)"coreutils",
    (_DWORD)off_6071C0,
    (unsigned int)sub_401667,
    "Mark Kettenis",
    0LL);
  if ( getopt_long(a1, a2, shortopts, 0LL, 0LL) != -1 )
    sub_401667(1);
  if ( a1 - optind > 1 )
  {
    v3 = sub_4029DF(a2[optind + 1]);
    v4 = gettext("extra operand %s");
    error(0, 0, v4, v3);
    sub_401667(1);
  }
  if ( optind == a1 )
    v5 = "-";
  else
    v5 = a2[optind];
  v6 = (unsigned __int8)sub_401F0B(v5) == 0;
  exit(v6);
}
