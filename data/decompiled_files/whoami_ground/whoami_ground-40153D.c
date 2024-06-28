#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  __int64 v5; // rbx
  char *v6; // rax
  __uid_t uid; // [rsp+24h] [rbp-1Ch]
  struct passwd *v8; // [rsp+28h] [rbp-18h]

  sub_4019E6(*a2, a2, a3);
  setlocale(6, shortopts);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_4040D0(sub_4016F5);
  sub_401897(
    a1,
    (_DWORD)a2,
    (unsigned int)"whoami",
    (unsigned int)"GNU coreutils",
    (_DWORD)off_606190,
    (unsigned int)sub_401477,
    "Richard Mlynarik",
    0LL);
  if ( getopt_long(a1, a2, shortopts, 0LL, 0LL) != -1 )
    sub_401477(1);
  if ( optind != a1 )
  {
    v3 = sub_401AF1(a2[optind]);
    v4 = gettext("extra operand %s");
    error(0, 0, v4, v3);
    sub_401477(1);
  }
  uid = geteuid();
  v8 = getpwuid(uid);
  if ( v8 )
  {
    puts(v8->pw_name);
    exit(0);
  }
  v5 = qword_606238;
  v6 = gettext("%s: cannot find name for user ID %lu\n");
  fprintf(stderr, v6, v5, uid);
  exit(1);
}
