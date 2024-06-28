#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  char *v10; // rax
  char *v11; // rax
  int v12; // eax
  char *v13; // rax
  __int64 v14; // rbx
  char *v15; // rax
  FILE *v16; // rax
  const char *v17; // rbx
  int *v18; // rax
  FILE *v19; // rax
  const char *v20; // rbx
  int *v21; // rax
  char *v22; // rbx
  int *v23; // rax
  const char *v24; // rbx
  int *v25; // rax
  const char *v26; // rbx
  int *v27; // rax
  char v28; // [rsp+0h] [rbp-80h]
  unsigned __int8 v29; // [rsp+2Ah] [rbp-56h]
  bool v30; // [rsp+2Bh] [rbp-55h]
  int v31; // [rsp+2Ch] [rbp-54h] BYREF
  int v32; // [rsp+30h] [rbp-50h] BYREF
  int v33; // [rsp+34h] [rbp-4Ch] BYREF
  int i; // [rsp+38h] [rbp-48h]
  int v35; // [rsp+3Ch] [rbp-44h]
  _DWORD v36[4]; // [rsp+40h] [rbp-40h] BYREF
  int v37[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v38; // [rsp+58h] [rbp-28h] BYREF
  FILE *v39; // [rsp+60h] [rbp-20h]
  FILE *v40; // [rsp+68h] [rbp-18h]

  v32 = 0;
  v37[0] = 0;
  v37[1] = 0;
  v33 = 0;
  sub_4040A3(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  byte_60A300 = sub_403DFF(3LL);
  sub_407340(sub_403B0D);
  sub_407340(sub_4021C5);
  byte_60A303 = 1;
  byte_60A304 = 0;
  byte_60A306 = 0;
  byte_60A305[0] = 0;
  dword_60A348 = 0;
  while ( 1 )
  {
    v35 = getopt_long(a1, a2, "-a:e:i1:2:j:o:t:v:", &longopts, 0LL);
    if ( v35 == -1 )
    {
      v32 = 0;
      while ( optind < a1 )
      {
        v12 = optind++;
        sub_4030C1((__int64)a2[v12], &qword_60A2E0, v36, v37, &v33, &v32, &v31);
      }
      if ( v33 != 2 )
      {
        if ( v33 )
        {
          v14 = sub_4041AE(a2[a1 - 1]);
          v15 = gettext("missing operand after %s");
          error(0, 0, v15, v14);
        }
        else
        {
          v13 = gettext("missing operand");
          error(0, 0, v13);
        }
        sub_4018E6(1);
      }
      for ( i = 0; i <= 1; ++i )
      {
        if ( v37[i] )
        {
          sub_403040(&qword_60A200, i);
          sub_403040(&qword_60A208, i);
        }
      }
      if ( qword_60A200 == -1 )
        qword_60A200 = 0LL;
      if ( qword_60A208 == -1 )
        qword_60A208 = 0LL;
      if ( !strcmp(qword_60A2E0, "-") )
        v16 = (FILE *)stdin;
      else
        v16 = (FILE *)sub_403D19(qword_60A2E0, "r");
      v39 = v16;
      if ( !v16 )
      {
        v17 = qword_60A2E0;
        v18 = __errno_location();
        error(1, *v18, "%s", v17);
      }
      if ( !strcmp(qword_60A2E8, "-") )
        v19 = (FILE *)stdin;
      else
        v19 = (FILE *)sub_403D19(qword_60A2E8, "r");
      v40 = v19;
      if ( !v19 )
      {
        v20 = qword_60A2E8;
        v21 = __errno_location();
        error(1, *v21, "%s", v20);
      }
      if ( v39 == v40 )
      {
        v22 = gettext("both files cannot be standard input");
        v23 = __errno_location();
        error(1, *v23, v22);
      }
      sub_4026DC(v39, v40);
      if ( (unsigned int)sub_406B74(v39) )
      {
        v24 = qword_60A2E0;
        v25 = __errno_location();
        error(1, *v25, "%s", v24);
      }
      if ( (unsigned int)sub_406B74(v40) )
      {
        v26 = qword_60A2E8;
        v27 = __errno_location();
        error(1, *v27, "%s", v26);
      }
      if ( byte_60A305[0] || byte_60A306 )
        exit(1);
      exit(0);
    }
    v31 = 0;
    if ( v35 == 105 )
    {
      byte_60A390 = 1;
      goto LABEL_65;
    }
    if ( v35 > 105 )
    {
      if ( v35 == 118 )
      {
        byte_60A303 = 0;
LABEL_25:
        if ( (unsigned int)sub_406708(optarg, 0LL, 10LL, &v38, &locale) || v38 != 1 && v38 != 2 )
        {
          v3 = sub_4041AE(optarg);
          v4 = gettext("invalid field number: %s");
          error(1, 0, v4, v3);
        }
        if ( v38 == 1 )
          byte_60A301 = 1;
        else
          byte_60A302 = 1;
        goto LABEL_65;
      }
      if ( v35 > 118 )
      {
        switch ( v35 )
        {
          case 129:
            dword_60A348 = 2;
            break;
          case 130:
            byte_60A391 = 1;
            break;
          case 128:
            dword_60A348 = 1;
            break;
          default:
            goto LABEL_64;
        }
      }
      else
      {
        switch ( v35 )
        {
          case 'o':
            if ( !strcmp(optarg, "auto") )
            {
              byte_60A310 = 1;
            }
            else
            {
              sub_402FC8(optarg);
              v31 = 3;
            }
            break;
          case 't':
            v29 = *optarg;
            if ( *optarg )
            {
              if ( optarg[1] )
              {
                if ( !strcmp(optarg, "\\0") )
                {
                  v29 = 0;
                }
                else
                {
                  v9 = sub_4041AE(optarg);
                  v10 = gettext("multi-character tab %s");
                  error(1, 0, v10, v9);
                }
              }
            }
            else
            {
              v29 = 10;
            }
            if ( c >= 0 && v29 != c )
            {
              v11 = gettext("incompatible tabs");
              error(1, 0, v11);
            }
            c = v29;
            break;
          case 'j':
            if ( (*optarg == 49 || *optarg == 50) && !optarg[1] && a2[optind - 1] + 2 == optarg )
            {
              v30 = *optarg == 50;
              ++v37[v30];
              v31 = v30 + 1;
            }
            else
            {
              v8 = sub_402DEB((__int64)optarg);
              sub_403040(&qword_60A200, v8);
              sub_403040(&qword_60A208, qword_60A200);
            }
            break;
          default:
            goto LABEL_64;
        }
      }
    }
    else
    {
      if ( v35 == 49 )
      {
        v6 = sub_402DEB((__int64)optarg);
        sub_403040(&qword_60A200, v6);
        goto LABEL_65;
      }
      if ( v35 > 49 )
      {
        switch ( v35 )
        {
          case 'a':
            goto LABEL_25;
          case 'e':
            if ( s1 && strcmp(s1, optarg) )
            {
              v5 = gettext("conflicting empty-field replacement strings");
              error(1, 0, v5);
            }
            s1 = optarg;
            break;
          case '2':
            v7 = sub_402DEB((__int64)optarg);
            sub_403040(&qword_60A208, v7);
            break;
          default:
            goto LABEL_64;
        }
      }
      else
      {
        if ( v35 == -130 )
          sub_4018E6(0);
        if ( v35 != 1 )
        {
          if ( v35 == -131 )
          {
            sub_40609E(
              (_DWORD)stdout,
              (unsigned int)"join",
              (unsigned int)"GNU coreutils",
              (_DWORD)off_60A220,
              (unsigned int)"Mike Haertel",
              0,
              v28);
            exit(0);
          }
LABEL_64:
          sub_4018E6(1);
        }
        sub_4030C1((__int64)optarg, &qword_60A2E0, v36, v37, &v33, &v32, &v31);
      }
    }
LABEL_65:
    v32 = v31;
  }
}
