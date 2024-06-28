#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rbx
  char *v4; // rax
  int v5; // eax
  char v6; // [rsp+27h] [rbp-29h]
  int v7; // [rsp+28h] [rbp-28h]
  __uid_t v8; // [rsp+2Ch] [rbp-24h]
  __uid_t v9; // [rsp+2Ch] [rbp-24h]
  __gid_t v10; // [rsp+30h] [rbp-20h]
  __gid_t v11; // [rsp+30h] [rbp-20h]
  __gid_t v12; // [rsp+34h] [rbp-1Ch]
  struct passwd *v13; // [rsp+38h] [rbp-18h]

  v6 = 1;
  sub_401E95(*a2, a2, a3);
  setlocale(6, shortopts);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404A80(sub_401CF3);
  v7 = getopt_long(a1, a2, shortopts, &longopts, 0LL);
  if ( v7 != -1 )
  {
    if ( v7 != -131 )
    {
      if ( v7 == -130 )
        sub_401737(0);
      sub_401737(1);
    }
    sub_403E6A(
      (_DWORD)stdout,
      (unsigned int)"groups",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_6071E0,
      (unsigned int)"David MacKenzie",
      (unsigned int)"James Youngman",
      0);
    exit(0);
  }
  if ( optind == a1 )
  {
    v8 = getuid();
    v10 = getegid();
    v12 = getgid();
    if ( (unsigned __int8)sub_401A69(0LL, v8, v12, v10, 1LL) != 1 )
      v6 = 0;
    putchar_unlocked(10);
  }
  else
  {
    while ( optind < a1 )
    {
      v13 = getpwnam(a2[optind]);
      if ( !v13 )
      {
        v3 = a2[optind];
        v4 = gettext("%s: No such user");
        error(1, 0, v4, v3);
      }
      v9 = v13->pw_uid;
      v11 = v13->pw_gid;
      printf("%s : ", a2[optind]);
      v5 = optind++;
      if ( (unsigned __int8)sub_401A69(a2[v5], v9, v11, v11, 1LL) != 1 )
        v6 = 0;
      putchar_unlocked(10);
    }
  }
  exit(v6 == 0);
}
