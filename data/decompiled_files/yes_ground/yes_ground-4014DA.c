#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // eax
  char *v4; // rbx
  int *v5; // rax
  int argc; // [rsp+1Ch] [rbp-24h]
  int i; // [rsp+2Ch] [rbp-14h]

  argc = a1;
  sub_401986(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404030(sub_401695);
  sub_401837(
    a1,
    (_DWORD)a2,
    (unsigned int)"yes",
    (unsigned int)"GNU coreutils",
    (_DWORD)off_606180,
    (unsigned int)sub_401405,
    "David MacKenzie",
    0LL);
  if ( getopt_long(a1, a2, "+", 0LL, 0LL) != -1 )
    sub_401405(1);
  if ( a1 <= optind )
  {
    optind = a1;
    argc = a1 + 1;
    a2[a1] = (char *)sub_4013F7((__int64)"y");
  }
  while ( 1 )
  {
    for ( i = optind; i < argc; ++i )
    {
      if ( fputs_unlocked(a2[i], stdout) != -1 )
      {
        v3 = argc - 1 == i ? 10 : 32;
        if ( putchar_unlocked(v3) != -1 )
          continue;
      }
      v4 = gettext("standard output");
      v5 = __errno_location();
      error(1, *v5, v4);
    }
  }
}
