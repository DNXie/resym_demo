#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  const char *ptr; // [rsp+30h] [rbp-20h]
  __int64 n; // [rsp+38h] [rbp-18h]

  sub_401B5A(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404250(sub_401749);
  sub_401A0B(
    a1,
    (_DWORD)a2,
    (unsigned int)"dirname",
    (unsigned int)"GNU coreutils",
    (_DWORD)off_606180,
    (unsigned int)sub_401447,
    "David MacKenzie",
    "Jim Meyering",
    0LL);
  if ( getopt_long(a1, a2, "+", 0LL, 0LL) != -1 )
    sub_401447(1);
  if ( optind + 1 > a1 )
  {
    v3 = gettext("missing operand");
    error(0, 0, v3);
    sub_401447(1);
  }
  if ( optind + 1 < a1 )
  {
    v4 = sub_401C65(a2[optind + 1]);
    v5 = gettext("extra operand %s");
    error(0, 0, v5, v4);
    sub_401447(1);
  }
  ptr = a2[optind];
  n = sub_401834(ptr);
  if ( !n )
  {
    ptr = ".8.13";
    n = 1LL;
  }
  fwrite_unlocked(ptr, 1uLL, n, stdout);
  putchar_unlocked(10);
  exit(0);
}
