#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  char *v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  __int64 v9; // rbx
  char *v10; // rax
  int v11; // [rsp+2Ch] [rbp-14h]

  sub_402C7B(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  byte_608260 = sub_402A04(3LL);
  sub_405A10(sub_402712);
  byte_608261 = 1;
  byte_608262 = 1;
  byte_608263 = 1;
  byte_608264 = 0;
  word_608265[1] = 0;
  word_608265[0] = 0;
  dword_608268 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = getopt_long(a1, a2, "123", &longopts, 0LL);
        if ( v11 == -1 )
        {
          if ( a1 - optind <= 1 )
          {
            if ( a1 > optind )
            {
              v7 = sub_402D86(a2[a1 - 1]);
              v8 = gettext("missing operand after %s");
              error(0, 0, v8, v7);
            }
            else
            {
              v6 = gettext("missing operand");
              error(0, 0, v6);
            }
            sub_4016C7(1);
          }
          if ( a1 - optind > 2 )
          {
            v9 = sub_402D86(a2[optind + 2]);
            v10 = gettext("extra operand %s");
            error(0, 0, v10, v9);
            sub_4016C7(1);
          }
          if ( !s1 )
            s1 = "\t";
          sub_401A4A((__int64)&a2[optind]);
          if ( !*(_WORD *)word_608265 )
            exit(0);
          exit(1);
        }
        if ( v11 != 50 )
          break;
        byte_608262 = 0;
      }
      if ( v11 <= 50 )
        break;
      if ( v11 == 128 )
      {
        dword_608268 = 1;
      }
      else if ( v11 > 128 )
      {
        if ( v11 == 129 )
        {
          dword_608268 = 2;
        }
        else
        {
          if ( v11 != 130 )
            goto LABEL_28;
          if ( s1 && strcmp(s1, optarg) )
          {
            v3 = gettext("multiple delimiters specified");
            error(1, 0, v3);
          }
          s1 = optarg;
          if ( !*optarg )
          {
            v4 = sub_402D86("--output-delimiter");
            v5 = gettext("empty %s not allowed");
            error(1, 0, v5, v4);
          }
        }
      }
      else
      {
        if ( v11 != 51 )
          goto LABEL_28;
        byte_608263 = 0;
      }
    }
    if ( v11 == -130 )
      sub_4016C7(0);
    if ( v11 != 49 )
    {
      if ( v11 == -131 )
      {
        sub_404C76(
          (_DWORD)stdout,
          (unsigned int)"comm",
          (unsigned int)"GNU coreutils",
          (_DWORD)off_6081C0,
          (unsigned int)"Richard M. Stallman",
          (unsigned int)"David MacKenzie",
          0);
        exit(0);
      }
LABEL_28:
      sub_4016C7(1);
    }
    byte_608261 = 0;
  }
}
