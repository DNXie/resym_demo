#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  bool v4; // [rsp+1Bh] [rbp-15h]
  int v5; // [rsp+1Ch] [rbp-14h]
  const char *s; // [rsp+20h] [rbp-10h]
  char *sa; // [rsp+20h] [rbp-10h]
  void **v8; // [rsp+28h] [rbp-8h]

  v4 = getenv("POSIXLY_CORRECT") != 0LL;
  sub_402701(*a2);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_405620(sub_40255F);
  while ( 1 )
  {
    v5 = getopt_long(a1, a2, "LP", &longopts, 0LL);
    if ( v5 == -1 )
    {
      if ( optind < a1 )
      {
        v3 = gettext("ignoring non-option arguments");
        error(0, 0, v3);
      }
      if ( v4 )
      {
        s = sub_40220D();
        if ( s )
        {
          puts(s);
          exit(0);
        }
      }
      sa = (char *)sub_404AF5();
      if ( sa )
      {
        puts(sa);
        free(sa);
      }
      else
      {
        v8 = (void **)sub_401AD4();
        sub_4020B1((__int64)v8);
        puts((const char *)v8[2]);
        sub_401AAB(v8);
      }
      exit(0);
    }
    if ( v5 == -130 )
      sub_4019AA(0);
    if ( v5 <= -130 )
      break;
    if ( v5 == 76 )
    {
      v4 = 1;
    }
    else
    {
      if ( v5 != 80 )
        goto LABEL_16;
      v4 = 0;
    }
  }
  if ( v5 == -131 )
  {
    sub_4046D6(
      (_DWORD)stdout,
      (unsigned int)"pwd",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_608210,
      (unsigned int)"Jim Meyering",
      0,
      (char)a2);
    exit(0);
  }
LABEL_16:
  sub_4019AA(1);
}
