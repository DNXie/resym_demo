#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  char *v6; // rbx
  int *v7; // rax
  char v8; // [rsp+33h] [rbp-2Dh]
  int i; // [rsp+34h] [rbp-2Ch]
  double v10; // [rsp+38h] [rbp-28h] BYREF
  char *v11; // [rsp+40h] [rbp-20h] BYREF
  double v12; // [rsp+48h] [rbp-18h]

  v12 = 0.0;
  v8 = 1;
  sub_401BD1(*a2, a2, a3);
  setlocale(6, shortopts);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404630(sub_4018E0);
  sub_401A82(
    a1,
    (_DWORD)a2,
    (unsigned int)"sleep",
    (unsigned int)"GNU coreutils",
    (_DWORD)off_606190,
    (unsigned int)sub_401487,
    "Jim Meyering",
    "Paul Eggert",
    0LL);
  if ( getopt_long(a1, a2, shortopts, 0LL, 0LL) != -1 )
    sub_401487(1);
  if ( a1 == 1 )
  {
    v3 = gettext("missing operand");
    error(0, 0, v3);
    sub_401487(1);
  }
  for ( i = optind; i < a1; ++i )
  {
    if ( (unsigned __int8)sub_404036(a2[i], &v11, &v10, sub_40184A) != 1
      || v10 < 0.0
      || *v11 && v11[1]
      || (unsigned __int8)sub_40153D(&v10, *v11) != 1 )
    {
      v4 = sub_401CDC(a2[i]);
      v5 = gettext("invalid time interval %s");
      error(0, 0, v5, v4);
      v8 = 0;
    }
    v12 = v10 + v12;
  }
  if ( v8 != 1 )
    sub_401487(1);
  if ( (unsigned int)sub_403FC5(v12) )
  {
    v6 = gettext("cannot read realtime clock");
    v7 = __errno_location();
    error(1, *v7, v6);
  }
  exit(0);
}
