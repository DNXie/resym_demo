#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int *v3; // rax
  char v4; // [rsp+2Bh] [rbp-15h]
  int i; // [rsp+2Ch] [rbp-14h]

  sub_401FA6(*a2, a2, a3);
  setlocale(6, shortopts);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404650(sub_401BC6);
  sub_401E57(
    a1,
    (_DWORD)a2,
    (unsigned int)"cksum",
    (unsigned int)"coreutils",
    (_DWORD)off_6071A0,
    (unsigned int)sub_401940,
    "Q. Frank Xia",
    0LL);
  if ( getopt_long(a1, a2, shortopts, 0LL, 0LL) != -1 )
    sub_401940(1);
  byte_607221 = 0;
  if ( optind == a1 )
  {
    v4 = sub_401557("-", 0);
  }
  else
  {
    v4 = 1;
    for ( i = optind; i < a1; ++i )
      v4 = (unsigned __int8)(v4 & sub_401557(a2[i], 1)) != 0;
  }
  if ( byte_607221 )
  {
    if ( (unsigned int)sub_404357(stdin) == -1 )
    {
      v3 = __errno_location();
      error(1, *v3, "-");
    }
  }
  exit(v4 == 0);
}
