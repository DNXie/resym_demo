#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int *v3; // rax
  char v4; // [rsp+2Fh] [rbp-21h]
  int v5; // [rsp+30h] [rbp-20h]
  int v6; // [rsp+34h] [rbp-1Ch]
  __int64 (__fastcall *v7)(const char *, int); // [rsp+38h] [rbp-18h]

  v7 = sub_40197C;
  sub_4031BD(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_406230(sub_402108);
  setvbuf(stdout, 0LL, 1, 0LL);
  byte_608279 = 0;
  while ( 1 )
  {
    v5 = getopt_long(a1, a2, "rs", &longopts, 0LL);
    if ( v5 == -1 )
    {
      v6 = a1 - optind;
      if ( a1 - optind > 0 )
      {
        v4 = 1;
        while ( optind < a1 )
        {
          v4 = (unsigned __int8)(v4 & v7(a2[optind], v6)) != 0;
          ++optind;
        }
      }
      else
      {
        v4 = v7("-", v6);
      }
      if ( byte_608279 )
      {
        if ( (unsigned int)sub_405AEB(stdin) == -1 )
        {
          v3 = __errno_location();
          error(1, *v3, "-");
        }
      }
      exit(v4 == 0);
    }
    if ( v5 == -130 )
      sub_401897(0);
    if ( v5 <= -130 )
      break;
    if ( v5 == 114 )
    {
      v7 = sub_40197C;
    }
    else
    {
      if ( v5 != 115 )
        goto LABEL_13;
      v7 = sub_401BFD;
    }
  }
  if ( v5 == -131 )
  {
    sub_4051C0(
      (_DWORD)stdout,
      (unsigned int)"sum",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_608200,
      (unsigned int)"Kayvan Aghaiepour",
      (unsigned int)"David MacKenzie",
      0);
    exit(0);
  }
LABEL_13:
  sub_401897(1);
}
