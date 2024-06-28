#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  char *v5; // rax
  int v6; // eax
  __int64 v7; // r12
  char *v8; // rbx
  int *v9; // rax
  double v10; // xmm0_8
  __int64 v11; // rbx
  char *v12; // rax
  char **v13; // rax
  int v14; // eax
  __int64 v15; // r12
  char *v16; // rbx
  int *v17; // rax
  __int64 v18; // rbx
  char *v19; // rax
  char *v20; // rax
  char *v21; // rbx
  const char *v22; // rax
  __int64 v23; // rax
  char *v24; // rax
  int *v25; // rax
  double v26; // [rsp+8h] [rbp-228h]
  bool v27; // [rsp+29h] [rbp-207h]
  char v28; // [rsp+2Ah] [rbp-206h]
  char v29; // [rsp+2Bh] [rbp-205h]
  int v30; // [rsp+2Ch] [rbp-204h]
  int i; // [rsp+30h] [rbp-200h]
  int v32; // [rsp+34h] [rbp-1FCh]
  __int64 v33; // [rsp+38h] [rbp-1F8h]
  char *s1; // [rsp+40h] [rbp-1F0h]
  __int64 v35; // [rsp+48h] [rbp-1E8h]
  FILE *stream; // [rsp+50h] [rbp-1E0h]
  int *ptr; // [rsp+58h] [rbp-1D8h]
  char *v38; // [rsp+60h] [rbp-1D0h]
  __int64 v39; // [rsp+68h] [rbp-1C8h]
  struct stat stat_buf; // [rsp+70h] [rbp-1C0h] BYREF
  __int64 v41; // [rsp+100h] [rbp-130h] BYREF
  __int64 v42; // [rsp+108h] [rbp-128h]

  s1 = 0LL;
  sub_403B47(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_406990(sub_4037BF);
  setvbuf(stdout, 0LL, 1, 0LL);
  byte_60930B = 0;
  byte_60930A = 0;
  byte_609309 = 0;
  byte_609308 = 0;
  byte_60930C = 0;
  qword_609300 = 0LL;
  qword_6092F8 = 0LL;
  qword_6092F0 = 0LL;
  qword_6092E8 = 0LL;
  qword_6092E0 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v32 = getopt_long(a1, a2, "clLmw", &longopts, 0LL);
        if ( v32 == -1 )
        {
          if ( byte_609308 != 1 && byte_609309 != 1 && byte_60930A != 1 && byte_60930B != 1 && byte_60930C != 1 )
          {
            byte_60930B = 1;
            byte_609309 = 1;
            byte_609308 = 1;
          }
          v28 = 0;
          if ( s1 )
          {
            if ( optind < a1 )
            {
              v3 = sub_403C52(a2[optind]);
              v4 = gettext("extra operand %s");
              error(0, 0, v4, v3);
              v5 = gettext("file operands cannot be combined with --files0-from");
              fprintf(stderr, "%s\n", v5);
              sub_401ACC(1);
            }
            if ( !strcmp(s1, "-") )
            {
              stream = (FILE *)stdin;
              v6 = fileno((FILE *)stdin);
            }
            else
            {
              stream = fopen(s1, "r");
              if ( !stream )
              {
                v7 = sub_403C52(s1);
                v8 = gettext("cannot open %s for reading");
                v9 = __errno_location();
                error(1, *v9, v8, v7);
              }
              v6 = fileno(stream);
            }
            if ( (unsigned int)sub_4069C0(v6, &stat_buf)
              || (stat_buf.st_mode & 0xF000) != 0x8000
              || ((v26 = (double)SLODWORD(stat_buf.st_size), sub_403AC8() / 2.0 <= 10485760.0) ? (v10 = sub_403AC8() / 2.0) : (v10 = 10485760.0),
                  v10 < v26) )
            {
              v33 = 0LL;
              v30 = 0;
              v35 = sub_4035D2(stream);
            }
            else
            {
              v28 = 1;
              sub_4053EA(&v41);
              if ( (unsigned __int8)sub_4057A9(stream, &v41) != 1 || (unsigned int)sub_406692(stream) )
              {
                v11 = sub_403C52(s1);
                v12 = gettext("cannot read file names from %s");
                error(1, 0, v12, v11);
              }
              v33 = v42;
              v30 = v41;
              v35 = sub_403581(v42);
            }
          }
          else
          {
            if ( optind >= a1 )
              v13 = (char **)&unk_609318;
            else
              v13 = &a2[optind];
            v33 = (__int64)v13;
            if ( optind >= a1 )
              v14 = 1;
            else
              v14 = a1 - optind;
            v30 = v14;
            v35 = sub_403581(v33);
          }
          if ( !v35 )
            sub_40665D();
          ptr = sub_402941(v30, v33);
          dword_609310 = sub_402AE1(v30, ptr);
          v27 = 1;
          for ( i = 0; ; ++i )
          {
            v29 = 0;
            v38 = (char *)sub_40363B(v35, &stat_buf);
            if ( !v38 )
              break;
            if ( s1 && !strcmp(s1, "-") && !strcmp(v38, "-") )
            {
              v18 = sub_403C52(v38);
              v19 = gettext("when reading file names from stdin, no file name of %s allowed");
              error(0, 0, v19, v18);
              v29 = 1;
            }
            if ( !*v38 )
            {
              if ( s1 )
              {
                v39 = sub_403722(v35);
                v21 = gettext("invalid zero-length file name");
                v22 = (const char *)sub_40526B(s1);
                error(0, 0, "%s:%lu: %s", v22, v39, v21);
              }
              else
              {
                v20 = gettext("invalid zero-length file name");
                error(0, 0, "%s", v20);
              }
              v29 = 1;
            }
            if ( v29 )
            {
              v27 = 0;
            }
            else
            {
              if ( v30 )
                v23 = 38LL * i;
              else
                v23 = 0LL;
              v27 = (v27 & (unsigned __int8)sub_402853(v38, (__int64)&ptr[v23])) != 0;
            }
          }
          if ( LODWORD(stat_buf.st_dev) != 3 )
          {
            if ( LODWORD(stat_buf.st_dev) == 4 )
            {
              v15 = sub_40526B(s1);
              v16 = gettext("%s: read error");
              v17 = __errno_location();
              error(0, *v17, v16, v15);
              v27 = 0;
            }
            else if ( LODWORD(stat_buf.st_dev) != 2 )
            {
              __assert_fail("!\"unexpected error code from argv_iter\"", "../../src/src/wc.c", 0x2E5u, "main");
            }
            if ( v27 && !s1 && !sub_403722(v35) )
              v27 = (v27 & (unsigned __int8)sub_402853(0LL, (__int64)ptr)) != 0;
            if ( v28 )
              sub_40548C(&v41);
            if ( (unsigned __int64)sub_403722(v35) > 1 )
            {
              v24 = gettext("total");
              sub_401BBD(qword_6092E0, qword_6092E8, qword_6092F0, qword_6092F8, qword_609300, v24);
            }
            sub_40375F(v35);
            free(ptr);
            if ( byte_609314 )
            {
              if ( close(0) )
              {
                v25 = __errno_location();
                error(1, *v25, "-");
              }
            }
            exit(!v27);
          }
          sub_40665D();
        }
        if ( v32 != 99 )
          break;
        byte_60930B = 1;
      }
      if ( v32 <= 99 )
        break;
      if ( v32 == 109 )
      {
        byte_60930A = 1;
      }
      else if ( v32 > 109 )
      {
        if ( v32 == 119 )
        {
          byte_609309 = 1;
        }
        else
        {
          if ( v32 != 128 )
            goto LABEL_23;
          s1 = (char *)optarg;
        }
      }
      else
      {
        if ( v32 != 108 )
          goto LABEL_23;
        byte_609308 = 1;
      }
    }
    if ( v32 == -130 )
      sub_401ACC(0);
    if ( v32 != 76 )
    {
      if ( v32 == -131 )
      {
        sub_406273(
          (_DWORD)stdout,
          (unsigned int)"wc",
          (unsigned int)"GNU coreutils",
          (_DWORD)off_609230,
          (unsigned int)"Paul Rubin",
          (unsigned int)"David MacKenzie",
          0);
        exit(0);
      }
LABEL_23:
      sub_401ACC(1);
    }
    byte_60930C = 1;
  }
}
