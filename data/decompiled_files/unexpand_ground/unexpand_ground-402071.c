#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char v3; // al
  char *v4; // rax
  char **v5; // rax
  int *v6; // rax
  char v7; // [rsp+12h] [rbp-Eh]
  char v8; // [rsp+13h] [rbp-Dh]
  int v9; // [rsp+14h] [rbp-Ch]
  unsigned __int64 v10; // [rsp+18h] [rbp-8h]

  v7 = 0;
  v8 = 0;
  sub_4025E5(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404D10(sub_4023D9);
  byte_6072B8 = 0;
  status = 0;
  byte_607280 = 0;
  qword_607298 = 0LL;
  qword_6072A8 = 0LL;
  while ( 1 )
  {
    v9 = getopt_long(a1, a2, ",0123456789at:", &longopts, 0LL);
    if ( v9 == -1 )
    {
      if ( v8 )
        byte_607280 = 0;
      if ( v7 )
        sub_4017A7(v10);
      sub_401AA3(qword_607298, qword_6072A8);
      if ( qword_6072A8 )
      {
        if ( qword_6072A8 == 1 )
          qword_607288 = *(_QWORD *)qword_607298;
        else
          qword_607288 = 0LL;
      }
      else
      {
        qword_607290 = 8LL;
        qword_607288 = 8LL;
      }
      if ( optind >= a1 )
        v5 = &off_6071C0;
      else
        v5 = &a2[optind];
      qword_6072B0 = (__int64)v5;
      sub_401CFF();
      if ( byte_6072B8 )
      {
        if ( (unsigned int)sub_404A12(stdin) )
        {
          v6 = __errno_location();
          error(1, *v6, "-");
        }
      }
      exit(status);
    }
    if ( v9 == 63 )
      sub_4016A6(1);
    if ( v9 > 63 )
    {
      switch ( v9 )
      {
        case 116:
          byte_607280 = 1;
          sub_40187E((unsigned __int8 *)optarg);
          break;
        case 128:
          v8 = 1;
          break;
        case 97:
          byte_607280 = 1;
          break;
        default:
          goto LABEL_21;
      }
    }
    else
    {
      switch ( v9 )
      {
        case -130:
          sub_4016A6(0);
        case 44:
          if ( v7 )
            sub_4017A7(v10);
          v7 = 0;
          break;
        case -131:
          sub_4045BA(
            (_DWORD)stdout,
            (unsigned int)"unexpand",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_6071D0,
            (unsigned int)"David MacKenzie",
            0,
            (char)a2);
          exit(0);
        default:
LABEL_21:
          if ( v7 != 1 )
          {
            v10 = 0LL;
            v7 = 1;
          }
          if ( v10 > 0x1999999999999999LL || v9 - 48 + 10 * v10 < v10 )
          {
            v3 = 1;
          }
          else
          {
            v10 = 10 * v10 + v9 - 48;
            v3 = 0;
          }
          if ( v3 )
          {
            v4 = gettext("tab stop value is too large");
            error(1, 0, v4);
          }
          break;
      }
    }
  }
}
