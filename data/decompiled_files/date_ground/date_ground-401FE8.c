#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  unsigned int v3; // eax
  char *v4; // rdi
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  __int64 v8; // rbx
  char *v9; // rax
  char *v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  char *v13; // rax
  int *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  char *v17; // rax
  char *v18; // rbx
  int *v19; // rax
  char v21; // [rsp+1Dh] [rbp-F3h]
  bool v22; // [rsp+1Eh] [rbp-F2h]
  char v23; // [rsp+1Eh] [rbp-F2h]
  char v24; // [rsp+1Fh] [rbp-F1h]
  int v25; // [rsp+20h] [rbp-F0h]
  int v26; // [rsp+2Ch] [rbp-E4h]
  char *v27; // [rsp+30h] [rbp-E0h]
  __int64 v28; // [rsp+38h] [rbp-D8h]
  char *v29; // [rsp+40h] [rbp-D0h]
  const char *v30; // [rsp+48h] [rbp-C8h]
  char *filename; // [rsp+50h] [rbp-C0h]
  const char *v32; // [rsp+58h] [rbp-B8h]
  __int64 v33; // [rsp+60h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-A8h]
  struct stat stat_buf; // [rsp+70h] [rbp-A0h] BYREF

  v27 = 0LL;
  v28 = 0LL;
  v21 = 0;
  v29 = 0LL;
  v30 = 0LL;
  filename = 0LL;
  sub_40A1EC(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40CBE0(sub_402D12);
  while ( 1 )
  {
    v25 = getopt_long(a1, a2, "d:f:I::r:Rs:u", &longopts, 0LL);
    if ( v25 == -1 )
    {
      v26 = (v30 != 0LL) + (v27 != 0LL) + (filename != 0LL);
      if ( v26 > 1 )
      {
        v6 = gettext("the options to specify dates for printing are mutually exclusive");
        error(0, 0, v6);
        sub_401B80(1);
      }
      if ( v21 && v26 )
      {
        v7 = gettext("the options to print and set the time may not be used together");
        error(0, 0, v7);
        sub_401B80(1);
      }
      if ( optind < a1 )
      {
        if ( optind + 1 < a1 )
        {
          v8 = sub_40A2F7(a2[optind + 1]);
          v9 = gettext("extra operand %s");
          error(0, 0, v9, v8);
          sub_401B80(1);
        }
        if ( *a2[optind] == 43 )
        {
          if ( v29 )
          {
            v10 = gettext("multiple output formats specified");
            error(1, 0, v10);
          }
          v11 = optind++;
          v29 = a2[v11] + 1;
        }
        else if ( v21 || v26 )
        {
          v12 = sub_40A2F7(a2[optind]);
          v13 = gettext(
                  "the argument %s lacks a leading `+';\n"
                  "when using an option to specify date(s), any non-option\n"
                  "argument must be a format string beginning with `+'");
          error(0, 0, v13, v12);
          sub_401B80(1);
        }
      }
      if ( !v29 )
      {
        v29 = nl_langinfo(131180);
        if ( !*v29 )
          v29 = "%a %b %e %H:%M:%S %Z %Y";
      }
      if ( v30 )
      {
        v22 = sub_401E15(v30, (__int64)v29);
      }
      else
      {
        v24 = 1;
        v23 = 1;
        if ( v26 || v21 == 1 )
        {
          if ( filename )
          {
            if ( (unsigned int)sub_40CC00(filename, &stat_buf) )
            {
              v14 = __errno_location();
              error(1, *v14, "%s", filename);
            }
            v33 = sub_401B6A((__int64)&stat_buf);
            v34 = v15;
          }
          else
          {
            if ( v28 )
              v27 = (char *)v28;
            v24 = sub_408BFC(&v33, v27, 0LL);
          }
        }
        else if ( optind >= a1 )
        {
          sub_405AC6(&v33);
        }
        else
        {
          v21 = 1;
          v27 = a2[optind];
          v24 = sub_409FCC(&v33, v27, 14LL);
          v34 = 0LL;
        }
        if ( v24 != 1 )
        {
          v16 = sub_40A2F7(v27);
          v17 = gettext("invalid date %s");
          error(1, 0, v17, v16);
        }
        if ( v21 )
        {
          if ( (unsigned int)sub_40BA8F(&v33) )
          {
            v18 = gettext("cannot set date");
            v19 = __errno_location();
            error(0, *v19, v18);
            v23 = 0;
          }
        }
        v22 = (unsigned __int8)(v23 & sub_4027CC(v29, v33, v34)) != 0;
      }
      exit(!v22);
    }
    v32 = 0LL;
    if ( v25 == 100 )
    {
      v27 = (char *)optarg;
    }
    else if ( v25 > 100 )
    {
      if ( v25 == 115 )
      {
        v28 = optarg;
        v21 = 1;
      }
      else if ( v25 > 115 )
      {
        if ( v25 == 117 )
        {
          v4 = (char *)sub_401B5C((__int64)"TZ=UTC0");
          if ( putenv(v4) )
            sub_40C62D();
        }
        else
        {
          if ( v25 != 128 )
            goto LABEL_34;
          v32 = (const char *)(32LL
                             * (unsigned int)dword_40CDF0[sub_402BD6(
                                                            "--rfc-3339",
                                                            optarg,
                                                            off_40CDD0,
                                                            &unk_40CDF8,
                                                            4LL,
                                                            off_611248)
                                                        + 2]
                             + 4252256);
        }
      }
      else if ( v25 == 102 )
      {
        v30 = (const char *)optarg;
      }
      else
      {
        if ( v25 != 114 )
          goto LABEL_34;
        filename = (char *)optarg;
      }
    }
    else
    {
      if ( v25 == -130 )
        sub_401B80(0);
      if ( v25 <= -130 )
      {
        if ( v25 == -131 )
        {
          sub_40C243(
            (_DWORD)stdout,
            (unsigned int)"date",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_611240,
            (unsigned int)"David MacKenzie",
            0,
            (char)a2);
          exit(0);
        }
LABEL_34:
        sub_401B80(1);
      }
      if ( v25 == 73 )
      {
        if ( optarg )
          v3 = dword_40CDF0[sub_402BD6("--iso-8601", optarg, off_40CDC0, dword_40CDF0, 4LL, off_611248)];
        else
          v3 = 0;
        v32 = (const char *)(32LL * v3 + 4252352);
      }
      else
      {
        if ( v25 != 82 )
          goto LABEL_34;
        v32 = "%a, %d %b %Y %H:%M:%S %z";
      }
    }
    if ( v32 )
    {
      if ( v29 )
      {
        v5 = gettext("multiple output formats specified");
        error(1, 0, v5);
      }
      v29 = (char *)v32;
    }
  }
}
