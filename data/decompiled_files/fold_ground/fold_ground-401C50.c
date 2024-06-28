#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  int *v5; // rax
  char v6; // [rsp+1Fh] [rbp-31h]
  char v7[8]; // [rsp+20h] [rbp-30h] BYREF
  int i; // [rsp+28h] [rbp-28h]
  int v9; // [rsp+2Ch] [rbp-24h]
  unsigned __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-18h]

  v11 = 80LL;
  sub_40214F(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404D50(sub_401F43);
  byte_607262 = 0;
  byte_607261 = 0;
  byte_607260 = 0;
  while ( 1 )
  {
    v9 = getopt_long(a1, a2, "bsw:0::1::2::3::4::5::6::7::8::9::", &longopts, 0LL);
    if ( v9 == -1 )
    {
      if ( a1 == optind )
      {
        v6 = sub_401850("-", v11);
      }
      else
      {
        v6 = 1;
        for ( i = optind; i < a1; ++i )
          v6 = (unsigned __int8)(v6 & sub_401850(a2[i], v11)) != 0;
      }
      if ( byte_607262 )
      {
        if ( (unsigned int)sub_404A4F(stdin) == -1 )
        {
          v5 = __errno_location();
          error(1, *v5, "-");
        }
      }
      exit(v6 == 0);
    }
    if ( v9 > 57 )
    {
      switch ( v9 )
      {
        case 's':
          byte_607260 = 1;
          break;
        case 'w':
          goto LABEL_15;
        case 'b':
          byte_607261 = 1;
          break;
        default:
          goto LABEL_22;
      }
    }
    else
    {
      if ( v9 < 48 )
      {
        if ( v9 == -131 )
        {
          sub_404124(
            (_DWORD)stdout,
            (unsigned int)"fold",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_6071C0,
            (unsigned int)"David MacKenzie",
            0,
            (char)a2);
          exit(0);
        }
        if ( v9 == -130 )
          sub_4016E6(0);
LABEL_22:
        sub_4016E6(1);
      }
      if ( optarg )
      {
        --optarg;
      }
      else
      {
        v7[0] = v9;
        v7[1] = 0;
        optarg = (__int64)v7;
      }
LABEL_15:
      if ( (unsigned int)sub_4045E3(optarg, 0LL, 10LL, &v10, locale) || !v10 || v10 > 0xFFFFFFFFFFFFFFF6LL )
      {
        v3 = sub_40225A(optarg);
        v4 = gettext("invalid number of columns: %s");
        error(1, 0, v4, v3);
      }
      v11 = v10;
    }
  }
}
