#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  const char *v6; // rbx
  int *v7; // rax
  int v8; // eax
  int v9; // eax
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  int v13; // eax
  __int64 v14; // rbx
  char *v15; // rax
  char *v16; // rax
  __int64 v17; // r12
  char *v18; // rbx
  int *v19; // rax
  __int64 *v20; // rax
  bool v21; // al
  __int64 v22; // r12
  char *v23; // rbx
  int *v24; // rax
  __int64 v25; // rbx
  char *v26; // rax
  char *v27; // rax
  char *v28; // rbx
  const char *v29; // rax
  __int64 v30; // rbx
  char *v31; // rax
  char *v32; // rax
  char v33; // [rsp+38h] [rbp-78h]
  char v34; // [rsp+39h] [rbp-77h]
  char v35; // [rsp+3Ah] [rbp-76h]
  char v36; // [rsp+3Bh] [rbp-75h]
  int longind; // [rsp+3Ch] [rbp-74h] BYREF
  __int64 v38; // [rsp+40h] [rbp-70h]
  int v39; // [rsp+48h] [rbp-68h]
  unsigned int v40; // [rsp+4Ch] [rbp-64h]
  __int64 v41; // [rsp+50h] [rbp-60h] BYREF
  char *s1; // [rsp+58h] [rbp-58h]
  __int64 v43; // [rsp+60h] [rbp-50h]
  __int64 v44; // [rsp+68h] [rbp-48h]
  char *v45; // [rsp+70h] [rbp-40h]
  __int64 *v46; // [rsp+78h] [rbp-38h]
  char *v47; // [rsp+80h] [rbp-30h]
  __int64 v48; // [rsp+88h] [rbp-28h]
  __int64 v49[4]; // [rsp+90h] [rbp-20h] BYREF

  v33 = 0;
  v34 = 1;
  s1 = 0LL;
  v38 = 0x1000000008LL;
  v35 = 0;
  v49[0] = sub_40257F((__int64)".");
  v49[1] = 0LL;
  sub_40B8FD(*a2);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_415AA0(sub_404521);
  qword_61B420 = sub_404E10();
  v3 = getenv("DU_BLOCK_SIZE");
  sub_40AF36(v3, &dword_61B3F8, &qword_61B418);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          longind = -1;
          v39 = getopt_long(a1, a2, "0abd:chHklmsxB:DLPSX:", &longopts, &longind);
          if ( v39 == -1 )
          {
            if ( v34 == 1 )
            {
              if ( byte_61B3F0 && v35 )
              {
                v10 = gettext("cannot both summarize and show all entries");
                error(0, 0, v10);
                sub_4026A0(1);
              }
              if ( v35 && v33 && !qword_61B330 )
              {
                v11 = gettext("warning: summarizing is the same as using --max-depth=0");
                error(0, 0, v11);
              }
              if ( v35 && v33 && qword_61B330 )
              {
                v44 = qword_61B330;
                v12 = gettext("warning: summarizing conflicts with --max-depth=%lu");
                error(0, 0, v12, v44);
                sub_4026A0(1);
              }
              if ( v35 )
                qword_61B330 = 0LL;
              if ( byte_61B3FC )
              {
                if ( !::s1 )
                {
                  ::s1 = getenv("TIME_STYLE");
                  if ( ::s1 && strcmp(::s1, "locale") )
                  {
                    if ( *::s1 == 43 )
                    {
                      v45 = strchr(::s1, 10);
                      if ( v45 )
                        *v45 = 0;
                    }
                    else
                    {
                      while ( !strncmp(::s1, "posix-", 6uLL) )
                        ::s1 += 6;
                    }
                  }
                  else
                  {
                    ::s1 = "long-iso";
                  }
                }
                if ( *::s1 == 43 )
                {
                  qword_61B410 = (__int64)(::s1 + 1);
                }
                else
                {
                  v13 = dword_4162A0[sub_4041D1("time style", ::s1, off_416280, dword_4162A0, 4LL, off_61B340)];
                  if ( v13 == 1 )
                  {
                    qword_61B410 = (__int64)"%Y-%m-%d %H:%M";
                  }
                  else if ( v13 )
                  {
                    if ( v13 == 2 )
                      qword_61B410 = (__int64)"%Y-%m-%d";
                  }
                  else
                  {
                    qword_61B410 = (__int64)"%Y-%m-%d %H:%M:%S.%N %z";
                  }
                }
              }
              if ( s1 )
              {
                if ( optind < a1 )
                {
                  v14 = sub_40C459(a2[optind]);
                  v15 = gettext("extra operand %s");
                  error(0, 0, v15, v14);
                  v16 = gettext("file operands cannot be combined with --files0-from");
                  fprintf(stderr, "%s\n", v16);
                  sub_4026A0(1);
                }
                if ( strcmp(s1, "-") && !sub_4086EC(s1, "r", stdin) )
                {
                  v17 = sub_40C459(s1);
                  v18 = gettext("cannot open %s for reading");
                  v19 = __errno_location();
                  error(1, *v19, v18, v17);
                }
                v43 = sub_404334(stdin);
                byte_61B3F3 = 1;
              }
              else
              {
                if ( optind >= a1 )
                  v20 = v49;
                else
                  v20 = (__int64 *)&a2[optind];
                v46 = v20;
                v43 = sub_4042E3(v20);
                v21 = optind + 1 < a1 || HIDWORD(v38) == 2;
                byte_61B3F3 = v21;
              }
              if ( !v43 )
                sub_40ECCE();
              qword_61B3E0 = sub_4046DB();
              if ( !qword_61B3E0 )
                sub_40ECCE();
              if ( byte_61B3F2 || byte_61B3F3 != 1 )
                LODWORD(v38) = v38 | 0x100;
              LODWORD(v38) = HIDWORD(v38) | v38;
              while ( 1 )
              {
                v36 = 0;
                v47 = (char *)sub_40439D(v43, &v41);
                if ( !v47 )
                  break;
                if ( s1 && !strcmp(s1, "-") && !strcmp(v47, "-") )
                {
                  v25 = sub_40C459(v47);
                  v26 = gettext("when reading file names from stdin, no file name of %s allowed");
                  error(0, 0, v26, v25);
                  v36 = 1;
                }
                if ( !*v47 )
                {
                  if ( s1 )
                  {
                    v48 = sub_404484(v43);
                    v28 = gettext("invalid zero-length file name");
                    v29 = (const char *)sub_40DA72(s1);
                    error(0, 0, "%s:%lu: %s", v29, v48, v28);
                  }
                  else
                  {
                    v27 = gettext("invalid zero-length file name");
                    error(0, 0, "%s", v27);
                  }
                  v36 = 1;
                }
                if ( v36 )
                {
                  v34 = 0;
                }
                else
                {
                  qword_61B460 = (__int64)v47;
                  v34 &= sub_40316B(&qword_61B460, v38);
                }
              }
              if ( (_DWORD)v41 != 3 )
              {
                if ( (_DWORD)v41 == 4 )
                {
                  v22 = sub_40DA72(s1);
                  v23 = gettext("%s: read error");
                  v24 = __errno_location();
                  error(0, *v24, v23, v22);
                  v34 = 0;
                }
                else if ( (_DWORD)v41 != 2 )
                {
                  __assert_fail("!\"unexpected error code from argv_iter\"", "../../src/src/du.c", 0x3AFu, "main");
                }
                sub_4044C1(v43);
                sub_40475B(qword_61B3E0);
                if ( s1 && (ferror_unlocked(stdin) || (unsigned int)sub_40F927(stdin)) && v34 )
                {
                  v30 = sub_40C459(s1);
                  v31 = gettext("error reading %s");
                  error(1, 0, v31, v30);
                }
                if ( byte_61B3F5 )
                {
                  v32 = gettext("total");
                  sub_4029F8(qword_61B430, v32);
                }
                exit(v34 == 0);
              }
              sub_40ECCE();
            }
            sub_4026A0(1);
          }
          if ( v39 != 99 )
            break;
          byte_61B3F5 = 1;
        }
        if ( v39 <= 99 )
          break;
        if ( v39 == 120 )
        {
          LODWORD(v38) = v38 | 0x40;
        }
        else if ( v39 > 120 )
        {
          if ( v39 == 130 )
          {
            s1 = (char *)optarg;
          }
          else if ( v39 > 130 )
          {
            switch ( v39 )
            {
              case 133:
                byte_61B3FC = 1;
                if ( optarg )
                  v8 = dword_416250[sub_4041D1("--time", optarg, off_416220, dword_416250, 4LL, off_61B340)];
                else
                  v8 = 0;
                dword_61B400 = v8;
                break;
              case 134:
                ::s1 = (char *)optarg;
                break;
              case 131:
                dword_61B3F8 = 144;
                qword_61B418 = 1LL;
                break;
              default:
                goto LABEL_80;
            }
          }
          else if ( v39 == 128 )
          {
            byte_61B3F1 = 1;
          }
          else
          {
            if ( v39 != 129 )
              goto LABEL_80;
            sub_405631(qword_61B420, optarg, 0x10000000LL);
          }
        }
        else if ( v39 == 107 )
        {
          dword_61B3F8 = 0;
          qword_61B418 = 1024LL;
        }
        else if ( v39 > 107 )
        {
          if ( v39 == 109 )
          {
            dword_61B3F8 = 0;
            qword_61B418 = 0x100000LL;
          }
          else if ( v39 < 109 )
          {
            byte_61B3F2 = 1;
          }
          else
          {
            if ( v39 != 115 )
              goto LABEL_80;
            v35 = 1;
          }
        }
        else if ( v39 == 100 )
        {
          if ( (unsigned int)sub_40EE8F(optarg, 0LL, 0LL, &v41, 0LL) )
          {
            v4 = sub_40C459(optarg);
            v5 = gettext("invalid maximum depth %s");
            error(0, 0, v5, v4);
            v34 = 0;
          }
          else
          {
            v33 = 1;
            qword_61B330 = v41;
          }
        }
        else
        {
          if ( v39 != 104 )
            goto LABEL_80;
          dword_61B3F8 = 176;
          qword_61B418 = 1LL;
        }
      }
      if ( v39 != 72 )
        break;
LABEL_64:
      HIDWORD(v38) = 17;
    }
    if ( v39 > 72 )
    {
      if ( v39 == 83 )
      {
        byte_61B3F6 = 1;
      }
      else if ( v39 > 83 )
      {
        if ( v39 == 97 )
        {
          byte_61B3F0 = 1;
        }
        else if ( v39 > 97 )
        {
          byte_61B3F1 = 1;
          dword_61B3F8 = 0;
          qword_61B418 = 1LL;
        }
        else
        {
          if ( v39 != 88 )
            goto LABEL_80;
          if ( (unsigned int)sub_405802(sub_405631, qword_61B420, optarg, 0x10000000LL, 10LL) )
          {
            v6 = (const char *)sub_40DA72(optarg);
            v7 = __errno_location();
            error(0, *v7, "%s", v6);
            v34 = 0;
          }
        }
      }
      else if ( v39 == 76 )
      {
        HIDWORD(v38) = 2;
      }
      else
      {
        if ( v39 != 80 )
          goto LABEL_80;
        HIDWORD(v38) = 16;
      }
    }
    else if ( v39 == 48 )
    {
      byte_61B3F4 = 1;
    }
    else if ( v39 > 48 )
    {
      if ( v39 != 66 )
      {
        if ( v39 != 68 )
          goto LABEL_80;
        goto LABEL_64;
      }
      v40 = sub_40AF36(optarg, &dword_61B3F8, &qword_61B418);
      if ( v40 )
        sub_40F3D5(v40, (unsigned int)longind, (unsigned int)(char)v39, &longopts, optarg);
    }
    else
    {
      if ( v39 == -131 )
      {
        v9 = sub_40C169("Torbjorn Granlund", &unk_41704F);
        sub_40E8E4(
          (_DWORD)stdout,
          (unsigned int)"du",
          (unsigned int)"GNU coreutils",
          (_DWORD)off_61B338,
          v9,
          (unsigned int)"David MacKenzie",
          "Paul Eggert",
          "Jim Meyering",
          0LL);
        exit(0);
      }
      if ( v39 == -130 )
        sub_4026A0(0);
LABEL_80:
      v34 = 0;
    }
  }
}
