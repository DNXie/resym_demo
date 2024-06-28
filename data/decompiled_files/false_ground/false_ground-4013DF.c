#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  if ( a1 == 2 )
  {
    sub_401685(*a2, a2, a3);
    setlocale(6, locale);
    bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
    textdomain("coreutils");
    sub_403D30(sub_4014E3);
    if ( !strcmp(a2[1], "--help") )
      sub_401327(1);
    if ( !strcmp(a2[1], "--version") )
      sub_403617(
        (_DWORD)stdout,
        (unsigned int)"false",
        (unsigned int)"GNU coreutils",
        (_DWORD)off_606170,
        (unsigned int)"Jim Meyering",
        0,
        (char)a2);
  }
  exit(1);
}
