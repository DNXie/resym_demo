#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  int *v12; // rax
  char v13; // [rsp+22h] [rbp-1Eh]
  char v14; // [rsp+23h] [rbp-1Dh]
  int v15; // [rsp+24h] [rbp-1Ch]
  unsigned __int8 *v16; // [rsp+28h] [rbp-18h]

  v14 = 0;
  sub_404FDF(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_407A50(sub_402F8F);
  dword_60B2C8 = 0;
  byte_60B2CC = 0;
  byte_60B2CE = 0;
  byte_60B2E0 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = getopt_long(a1, a2, "b:c:d:f:ns", &longopts, 0LL);
        if ( v15 == -1 )
        {
          if ( !dword_60B2C8 )
          {
            v7 = gettext("you must specify a list of bytes, characters, or fields");
            error(0, 0, v7);
            sub_4018F6(1);
          }
          if ( byte_60B2CE && dword_60B2C8 != 2 )
          {
            v8 = gettext("an input delimiter may be specified only when operating on fields");
            error(0, 0, v8);
            sub_4018F6(1);
          }
          if ( byte_60B2CC && dword_60B2C8 != 2 )
          {
            v9 = gettext("suppressing non-delimited lines makes sense\n\tonly when operating on fields");
            error(0, 0, v9);
            sub_4018F6(1);
          }
          if ( byte_60B2CF )
          {
            qword_60B2E8 = sub_403E9B(31LL, 0LL, sub_401B66, sub_401B8C, 0LL);
            if ( !qword_60B2E8 )
              sub_40739E();
          }
          if ( (unsigned __int8)sub_401CA2(v16) != 1 )
          {
            if ( dword_60B2C8 == 2 )
            {
              v10 = gettext("missing list of fields");
              error(0, 0, v10);
              sub_4018F6(1);
            }
            v11 = gettext("missing list of positions");
            error(0, 0, v11);
            sub_4018F6(1);
          }
          if ( v14 != 1 )
            byte_60B2CE = 9;
          if ( !ptr )
          {
            byte_60B2F8 = byte_60B2CE;
            byte_60B2F9 = 0;
            ptr = &byte_60B2F8;
            n = 1LL;
          }
          if ( optind == a1 )
          {
            v13 = sub_4028B2("-");
          }
          else
          {
            v13 = 1;
            while ( optind < a1 )
            {
              v13 = (unsigned __int8)(v13 & sub_4028B2(a2[optind])) != 0;
              ++optind;
            }
          }
          if ( qword_60B2E8 )
            sub_404106(qword_60B2E8);
          if ( byte_60B2E0 && (unsigned int)sub_40740C(stdin) == -1 )
          {
            v12 = __errno_location();
            error(0, *v12, "-");
            v13 = 0;
          }
          exit(v13 == 0);
        }
        if ( v15 != 100 )
          break;
        if ( *optarg && optarg[1] )
        {
          v5 = gettext("the delimiter must be a single character");
          error(0, 0, v5);
          sub_4018F6(1);
        }
        byte_60B2CE = *optarg;
        v14 = 1;
      }
      if ( v15 <= 100 )
        break;
      if ( v15 == 115 )
      {
        byte_60B2CC = 1;
      }
      else if ( v15 > 115 )
      {
        if ( v15 == 128 )
        {
          byte_60B2CF = 1;
          if ( *optarg )
            v6 = strlen(optarg);
          else
            v6 = 1LL;
          n = v6;
          ptr = (void *)sub_407371(optarg);
        }
        else
        {
          if ( v15 != 129 )
            goto LABEL_36;
          byte_60B2CD = 1;
        }
      }
      else if ( v15 == 102 )
      {
        if ( dword_60B2C8 )
        {
          v4 = gettext("only one type of list may be specified");
          error(0, 0, v4);
          sub_4018F6(1);
        }
        dword_60B2C8 = 2;
        v16 = (unsigned __int8 *)optarg;
      }
      else if ( v15 != 110 )
      {
        goto LABEL_36;
      }
    }
    if ( v15 == -130 )
      sub_4018F6(0);
    if ( v15 <= -130 )
    {
      if ( v15 == -131 )
      {
        sub_406FB4(
          (_DWORD)stdout,
          (unsigned int)"cut",
          (unsigned int)"GNU coreutils",
          (_DWORD)off_60B200,
          (unsigned int)"David M. Ihnat",
          (unsigned int)"David MacKenzie",
          "Jim Meyering",
          0LL);
        exit(0);
      }
LABEL_36:
      sub_4018F6(1);
    }
    if ( v15 < 98 )
      goto LABEL_36;
    if ( dword_60B2C8 )
    {
      v3 = gettext("only one type of list may be specified");
      error(0, 0, v3);
      sub_4018F6(1);
    }
    dword_60B2C8 = 1;
    v16 = (unsigned __int8 *)optarg;
  }
}
