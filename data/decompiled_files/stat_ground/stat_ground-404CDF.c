#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  char *v4; // rax
  bool v5; // al
  char v6; // [rsp+1Dh] [rbp-33h]
  unsigned __int8 v7; // [rsp+1Eh] [rbp-32h]
  bool v8; // [rsp+1Fh] [rbp-31h]
  int i; // [rsp+20h] [rbp-30h]
  int v10; // [rsp+24h] [rbp-2Ch]
  const char *v11; // [rsp+28h] [rbp-28h]
  const char *v12; // [rsp+30h] [rbp-20h]
  struct lconv *v13; // [rsp+38h] [rbp-18h]

  v6 = 0;
  v7 = 0;
  v11 = 0LL;
  v8 = 1;
  sub_405CC8(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  v13 = localeconv();
  if ( *v13->decimal_point )
    v3 = v13->decimal_point;
  else
    v3 = ".";
  qword_6163A8 = v3;
  qword_6163B0 = strlen(v3);
  sub_411E70(sub_4054FA);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = getopt_long(a1, a2, "c:fLt", &longopts, 0LL);
        if ( v10 == -1 )
        {
          if ( a1 == optind )
          {
            v4 = gettext("missing operand");
            error(0, 0, v4);
            sub_404B36(1);
          }
          if ( v11 )
          {
            v12 = v11;
          }
          else
          {
            v11 = (const char *)sub_4049D1(v6, v7, 0);
            v12 = (const char *)sub_4049D1(v6, v7, 1);
          }
          for ( i = optind; i < a1; ++i )
          {
            if ( v6 )
              v5 = sub_404708(a2[i], v7, v11);
            else
              v5 = sub_404831(a2[i], v7, v11, v12);
            v8 = v8 && v5;
          }
          exit(!v8);
        }
        if ( v10 != 99 )
          break;
        v11 = (const char *)optarg;
        byte_6163A1 = 0;
        off_6162F0 = "\n";
      }
      if ( v10 <= 99 )
        break;
      switch ( v10 )
      {
        case 116:
          v7 = 1;
          break;
        case 128:
          v11 = (const char *)optarg;
          byte_6163A1 = 1;
          off_6162F0 = (char *)&locale;
          break;
        case 102:
          v6 = 1;
          break;
        default:
          goto LABEL_22;
      }
    }
    if ( v10 == -130 )
      sub_404B36(0);
    if ( v10 != 76 )
    {
      if ( v10 == -131 )
      {
        sub_40A841(
          (_DWORD)stdout,
          (unsigned int)"stat",
          (unsigned int)"GNU coreutils",
          (_DWORD)off_6162F8,
          (unsigned int)"Michael Meskes",
          0,
          (char)a2);
        exit(0);
      }
LABEL_22:
      sub_404B36(1);
    }
    byte_6163A0 = 1;
  }
}
