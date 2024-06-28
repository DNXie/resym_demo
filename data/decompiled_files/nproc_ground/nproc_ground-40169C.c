#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  unsigned int v5; // [rsp+18h] [rbp-28h]
  int v6; // [rsp+1Ch] [rbp-24h]
  unsigned __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-18h]

  v7 = 0LL;
  sub_401BF5(*a2, a2, a3);
  setlocale(6, shortopts);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404A30(sub_401892);
  v5 = 2;
  while ( 1 )
  {
    v6 = getopt_long(a1, a2, shortopts, &longopts, 0LL);
    if ( v6 == -1 )
    {
      v8 = sub_401A8D(v5);
      if ( v7 >= v8 )
        v8 = 1LL;
      else
        v8 -= v7;
      printf("%lu\n", v8);
      exit(0);
    }
    if ( v6 == -130 )
      sub_4015B7(0);
    if ( v6 <= -130 )
      break;
    if ( v6 == 128 )
    {
      v5 = 0;
    }
    else
    {
      if ( v6 != 129 )
        goto LABEL_18;
      if ( (unsigned int)sub_404046(optarg, 0LL, 10LL, &v7, shortopts) )
      {
        v3 = optarg;
        v4 = gettext("%s: invalid number to ignore");
        error(0, 0, v4, v3);
        sub_4015B7(1);
      }
    }
  }
  if ( v6 == -131 )
  {
    sub_403B87(
      (_DWORD)stdout,
      (unsigned int)"nproc",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_6071B0,
      (unsigned int)"Giuseppe Scrivano",
      0,
      (char)a2);
    exit(0);
  }
LABEL_18:
  sub_4015B7(1);
}
