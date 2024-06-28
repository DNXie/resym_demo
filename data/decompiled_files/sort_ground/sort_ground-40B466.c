#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  unsigned __int8 v3; // al
  unsigned __int8 v4; // al
  unsigned __int64 v5; // rax
  _QWORD *v6; // rcx
  bool v7; // al
  _BOOL4 v8; // edx
  _BOOL4 v9; // eax
  int v10; // eax
  unsigned __int64 v11; // rax
  int v12; // eax
  char *v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  char *v17; // rax
  char *v18; // rax
  char *v19; // rax
  __int64 v20; // rbx
  char *v21; // rax
  char *v22; // rax
  __int64 v23; // rbx
  char *v24; // rax
  char *v25; // rax
  __int64 v26; // r12
  char *v27; // rbx
  int *v28; // rax
  __int64 v29; // rbx
  char *v30; // rax
  __int64 v31; // rbx
  char *v32; // rax
  __int64 v33; // rbx
  char *v34; // rax
  __int64 v35; // rbx
  char *v36; // rax
  char v37; // al
  char *v38; // rax
  __int64 v39; // rbx
  char *v40; // rax
  char *v41; // rax
  const char *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbx
  char *v45; // rax
  int v46; // eax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  char *v49; // rax
  char v50; // [rsp+28h] [rbp-288h]
  char v51; // [rsp+29h] [rbp-287h]
  char v52; // [rsp+2Ah] [rbp-286h]
  bool v53; // [rsp+2Bh] [rbp-285h]
  bool v54; // [rsp+2Ch] [rbp-284h]
  char v55; // [rsp+2Dh] [rbp-283h]
  bool v56; // [rsp+2Eh] [rbp-282h]
  bool v57; // [rsp+2Fh] [rbp-281h]
  char v58[12]; // [rsp+30h] [rbp-280h] BYREF
  int v59; // [rsp+3Ch] [rbp-274h]
  _QWORD *k; // [rsp+40h] [rbp-270h]
  _BYTE *v61; // [rsp+48h] [rbp-268h]
  char *v62; // [rsp+50h] [rbp-260h]
  unsigned __int64 v63; // [rsp+58h] [rbp-258h]
  unsigned __int64 v64; // [rsp+60h] [rbp-250h]
  void *ptr; // [rsp+68h] [rbp-248h]
  char *v66; // [rsp+70h] [rbp-240h]
  char *s1; // [rsp+78h] [rbp-238h]
  unsigned __int64 i; // [rsp+80h] [rbp-230h]
  char *m; // [rsp+88h] [rbp-228h]
  __int64 v70; // [rsp+90h] [rbp-220h]
  unsigned __int64 j; // [rsp+98h] [rbp-218h]
  unsigned __int64 l; // [rsp+A0h] [rbp-210h]
  struct lconv *v73; // [rsp+A8h] [rbp-208h]
  char *v74; // [rsp+B0h] [rbp-200h]
  unsigned __int64 v75; // [rsp+B8h] [rbp-1F8h]
  char *v76; // [rsp+C0h] [rbp-1F0h]
  _QWORD *v77; // [rsp+C8h] [rbp-1E8h]
  unsigned __int64 v78; // [rsp+D0h] [rbp-1E0h]
  unsigned __int64 v79; // [rsp+D8h] [rbp-1D8h]
  _QWORD v80[10]; // [rsp+E0h] [rbp-1D0h] BYREF
  __int64 v81[6]; // [rsp+130h] [rbp-180h] BYREF
  char v82; // [rsp+160h] [rbp-150h]
  char v83; // [rsp+161h] [rbp-14Fh]
  char v84; // [rsp+162h] [rbp-14Eh]
  unsigned __int8 v85; // [rsp+163h] [rbp-14Dh]
  char v86; // [rsp+164h] [rbp-14Ch]
  char v87; // [rsp+165h] [rbp-14Bh]
  char v88; // [rsp+166h] [rbp-14Ah]
  char v89; // [rsp+167h] [rbp-149h]
  char v90; // [rsp+168h] [rbp-148h]
  struct sigaction longind[2]; // [rsp+180h] [rbp-130h] BYREF

  v50 = 0;
  v59 = 0;
  v51 = 0;
  v52 = 0;
  v62 = 0LL;
  v53 = 0;
  v63 = 0LL;
  v64 = 0LL;
  v56 = getenv("POSIXLY_CORRECT") != 0LL;
  v54 = (int)sub_41116C() <= 200111;
  v66 = 0LL;
  s1 = 0LL;
  sub_4111F0(*a2);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_402B1D(2u);
  byte_61D5C8 = sub_40EE1C(3LL);
  byte_61D5C9 = sub_40EE1C(2LL);
  v73 = localeconv();
  v3 = sub_402B35(*v73->decimal_point);
  dword_61D5C0 = v3;
  if ( !v3 || v73->decimal_point[1] )
    dword_61D5C0 = 46;
  v4 = sub_402B35(*v73->thousands_sep);
  dword_61D5C4 = v4;
  if ( !v4 || v73->thousands_sep[1] )
    dword_61D5C4 = -1;
  byte_61DA03 = 0;
  sub_403E4B();
  sigemptyset(&set);
  for ( i = 0LL; i <= 0xA; ++i )
  {
    sigaction(sig[i], 0LL, longind);
    if ( longind[0].sa_handler != (__sighandler_t)1 )
      sigaddset(&set, sig[i]);
  }
  longind[0].sa_handler = (__sighandler_t)sub_40B2A2;
  longind[0].sa_mask = set;
  longind[0].sa_flags = 0;
  for ( i = 0LL; i <= 0xA; ++i )
  {
    if ( sigismember(&set, sig[i]) )
      sigaction(sig[i], longind, 0LL);
  }
  signal(17, 0LL);
  sub_417140(sub_4032BF);
  sub_40B432(v81);
  v81[0] = -1LL;
  ptr = (void *)sub_414E49(a1, 8LL);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          LODWORD(longind[0].sa_handler) = -1;
          if ( v59 != -1
            && (!v56
             || !v64
             || v54
             && !v51
             && optind != a1
             && *a2[optind] == 45
             && a2[optind][1] == 111
             && (a2[optind][2] || optind + 1 != a1)) )
          {
            v59 = getopt_long(a1, a2, "-bcCdfghik:mMno:rRsS:t:T:uVy:z", &longopts, (int *)longind);
            if ( v59 != -1 )
              break;
          }
          if ( a1 <= optind )
          {
            if ( v66 )
            {
              if ( v64 )
              {
                v23 = sub_4112FB(*(_QWORD *)ptr);
                v24 = gettext("extra operand %s");
                error(0, 0, v24, v23);
                v25 = gettext("file operands cannot be combined with --files0-from");
                fprintf(stderr, "%s\n", v25);
                sub_402CB8(2);
              }
              if ( !strcmp(v66, "-") )
              {
                v70 = stdin;
              }
              else
              {
                v70 = sub_40ED36(v66, "r");
                if ( !v70 )
                {
                  v26 = sub_4112FB(v66);
                  v27 = gettext("cannot open %s for reading");
                  v28 = __errno_location();
                  error(2, *v28, v27, v26);
                }
              }
              sub_413E7E(longind);
              if ( (unsigned __int8)sub_41423D(v70, longind) != 1 || (unsigned int)sub_415E9D(v70) )
              {
                v29 = sub_4112FB(v66);
                v30 = gettext("cannot read file names from %s");
                error(2, 0, v30, v29);
              }
              if ( longind[0].sa_handler )
              {
                free(ptr);
                ptr = (void *)longind[0].sa_mask.__val[0];
                v64 = (unsigned __int64)longind[0].sa_handler;
                for ( j = 0LL; j < v64; ++j )
                {
                  if ( !strcmp(*((const char **)ptr + j), "-") )
                  {
                    v31 = sub_4112FB(*((_QWORD *)ptr + j));
                    v32 = gettext("when reading file names from stdin, no file name of %s allowed");
                    error(2, 0, v32, v31);
                  }
                  else if ( !**((_BYTE **)ptr + j) )
                  {
                    v75 = j + 1;
                    v33 = sub_412914(v66);
                    v34 = gettext("%s:%lu: invalid zero-length file name");
                    error(2, 0, v34, v33, v75);
                  }
                }
              }
              else
              {
                v35 = sub_4112FB(v66);
                v36 = gettext("no input from %s");
                error(2, 0, v36, v35);
              }
            }
            for ( k = (_QWORD *)qword_61DA08; k; k = (_QWORD *)k[8] )
            {
              if ( sub_406393((__int64)k) && *((_BYTE *)k + 55) != 1 )
              {
                k[4] = v81[4];
                k[5] = v81[5];
                *((_BYTE *)k + 48) = v82;
                *((_BYTE *)k + 49) = v83;
                *((_BYTE *)k + 54) = v88;
                *((_BYTE *)k + 50) = v84;
                *((_BYTE *)k + 52) = v86;
                *((_BYTE *)k + 53) = v87;
                *((_BYTE *)k + 56) = v90;
                *((_BYTE *)k + 51) = v85;
                *((_BYTE *)k + 55) = v89;
              }
              v53 = (v53 | *((unsigned __int8 *)k + 51)) != 0;
            }
            if ( !qword_61DA08 && !sub_406393((__int64)v81) )
            {
              v50 = 1;
              sub_40AFC8((__int64)v81);
              v53 = (v53 | v85) != 0;
            }
            sub_40B0BD();
            if ( byte_61DA18 )
            {
              if ( v51 || s1 )
              {
                if ( v51 )
                  v37 = v51;
                else
                  v37 = 111;
                byte_61D4F8 = v37;
                sub_40B084((__int64)&byte_61D4F8);
              }
              if ( byte_61D5C8 )
              {
                v38 = setlocale(3, 0LL);
                v39 = sub_4112FB(v38);
                v40 = gettext("using %s sorting rules");
                error(0, 0, v40, v39);
              }
              else
              {
                v41 = gettext("using simple byte comparison");
                error(0, 0, v41);
              }
              sub_40657B(v81, v50);
            }
            byte_61DA00 = v89;
            if ( v53 )
              sub_40571F(v62);
            if ( !qword_61D9F0 )
            {
              v76 = getenv("TMPDIR");
              if ( v76 )
                v42 = v76;
              else
                v42 = "/tmp";
              sub_403C5E((__int64)v42);
            }
            if ( !v64 )
            {
              v64 = 1LL;
              free(ptr);
              ptr = &off_61D508;
            }
            if ( qword_61D9E0 )
            {
              v43 = qword_61D9E0;
              if ( 34 * (unsigned __int64)(unsigned int)dword_61D4EC >= qword_61D9E0 )
                v43 = 34LL * (unsigned int)dword_61D4EC;
              qword_61D9E0 = v43;
            }
            if ( v51 )
            {
              if ( v64 > 1 )
              {
                v44 = sub_4112FB(*((_QWORD *)ptr + 1));
                v45 = gettext("extra operand %s not allowed with -%c");
                error(2, 0, v45, v44, (unsigned int)v51);
              }
              if ( s1 )
              {
                byte_61D510 = v51;
                sub_40B084((__int64)&byte_61D510);
              }
              v46 = (unsigned __int8)sub_407D33(*(char **)ptr, v51) == 0;
              exit(v46);
            }
            if ( v52 )
            {
              v77 = (_QWORD *)sub_41507D(v64, 16LL);
              for ( l = 0LL; l < v64; ++l )
                v77[2 * l] = *((_QWORD *)ptr + l);
              sub_40A5DE(v77, 0LL, v64, s1);
            }
            else
            {
              if ( !v63 )
              {
                v78 = sub_410F0D(2LL);
                v47 = 8LL;
                if ( v78 <= 8 )
                  v47 = v78;
                v63 = v47;
              }
              v79 = 0xFFFFFFFFFFFFFFLL;
              v48 = v63;
              if ( v63 >= 0xFFFFFFFFFFFFFFLL )
                v48 = v79;
              v63 = v48;
              sub_40AAF3((char **)ptr, v64, s1, v48);
            }
            if ( byte_61DA03 && (unsigned int)sub_415E9D(stdin) == -1 )
            {
              v49 = gettext("close failed");
              sub_402C5C(v49, "-");
            }
            exit(0);
          }
          v5 = v64++;
          v6 = (char *)ptr + 8 * v5;
          LODWORD(v5) = optind++;
          *v6 = a2[(int)v5];
        }
        if ( v59 != 109 )
          break;
        v52 = 1;
      }
      if ( v59 <= 109 )
        break;
      if ( v59 == 122 )
      {
        byte_61D400 = 0;
      }
      else if ( v59 > 122 )
      {
        if ( v59 == 131 )
        {
          v66 = optarg;
        }
        else if ( v59 > 131 )
        {
          if ( v59 == 133 )
          {
            if ( v62 && strcmp(v62, optarg) )
            {
              v18 = gettext("multiple random sources specified");
              error(2, 0, v18);
            }
            v62 = optarg;
          }
          else if ( v59 < 133 )
          {
            sub_40409E((unsigned int)longind[0].sa_handler, v59, (__int64)optarg);
          }
          else
          {
            if ( v59 == 134 )
            {
              v59 = byte_4188B8[sub_40D0DC("--sort", optarg, &off_418880, byte_4188B8, 1LL, off_61D520)];
              goto LABEL_113;
            }
            if ( v59 != 135 )
              goto LABEL_180;
            v63 = sub_4044D3((unsigned int)longind[0].sa_handler, 135, (__int64)optarg);
          }
        }
        else if ( v59 == 129 )
        {
          if ( ::s1 && strcmp(::s1, optarg) )
          {
            v13 = gettext("multiple compress programs specified");
            error(2, 0, v13);
          }
          ::s1 = optarg;
        }
        else
        {
          if ( v59 <= 129 )
          {
            if ( v59 != 128 )
              goto LABEL_180;
            if ( optarg )
              v12 = aCccgeneralNume[sub_40D0DC("--check", optarg, off_418820, "CCcgeneral-numeric", 1LL, off_61D520)];
            else
              v12 = 99;
            v59 = v12;
            goto LABEL_118;
          }
          byte_61DA18 = 1;
        }
      }
      else if ( v59 == 115 )
      {
        byte_61DA01 = 1;
      }
      else if ( v59 > 115 )
      {
        if ( v59 == 117 )
        {
          byte_61DA02 = 1;
        }
        else if ( v59 < 117 )
        {
          v55 = *optarg;
          if ( !*optarg )
          {
            v19 = gettext("empty tab");
            error(2, 0, v19);
          }
          if ( optarg[1] )
          {
            if ( !strcmp(optarg, "\\0") )
            {
              v55 = 0;
            }
            else
            {
              v20 = sub_4112FB(optarg);
              v21 = gettext("multi-character tab %s");
              error(2, 0, v21, v20);
            }
          }
          if ( dword_61D4E8 != 128 && v55 != dword_61D4E8 )
          {
            v22 = gettext("incompatible tabs");
            error(2, 0, v22);
          }
          dword_61D4E8 = v55;
        }
        else
        {
          if ( v59 != 121 )
            goto LABEL_180;
          if ( a2[optind - 1] == optarg )
          {
            for ( m = optarg; (unsigned int)(*m - 48) <= 9; ++m )
              ;
            optind -= *m != 0;
          }
        }
      }
      else if ( v59 == 111 )
      {
        if ( s1 && strcmp(s1, optarg) )
        {
          v17 = gettext("multiple output files specified");
          error(2, 0, v17);
        }
        s1 = optarg;
      }
      else
      {
        if ( v59 >= 111 && v59 != 114 )
          goto LABEL_180;
LABEL_113:
        v58[0] = v59;
        v58[1] = 0;
        sub_40B2CD(v58, (__int64)v81, 2);
      }
    }
    if ( v59 == 84 )
    {
      sub_403C5E((__int64)optarg);
    }
    else if ( v59 > 84 )
    {
      if ( v59 == 100 )
        goto LABEL_113;
      if ( v59 > 100 )
      {
        if ( v59 < 102 )
          goto LABEL_180;
        if ( v59 <= 105 )
          goto LABEL_113;
        if ( v59 != 107 )
          goto LABEL_180;
        k = sub_40B432(v80);
        v61 = (_BYTE *)sub_40B1BB((__int64)optarg, k, "invalid number at field start");
        if ( !(*k)-- )
          sub_40B027((__int64)optarg, "field number is zero");
        if ( *v61 == 46 )
        {
          v61 = (_BYTE *)sub_40B1BB((__int64)(v61 + 1), k + 1, "invalid number after `.'");
          v15 = k[1];
          k[1] = v15 - 1;
          if ( !v15 )
            sub_40B027((__int64)optarg, "character offset is zero");
        }
        if ( !*k && !k[1] )
          *k = -1LL;
        v61 = sub_40B2CD(v61, (__int64)k, 0);
        if ( *v61 == 44 )
        {
          v61 = (_BYTE *)sub_40B1BB((__int64)(v61 + 1), k + 2, "invalid number after `,'");
          v16 = k[2];
          k[2] = v16 - 1;
          if ( !v16 )
            sub_40B027((__int64)optarg, "field number is zero");
          if ( *v61 == 46 )
            v61 = (_BYTE *)sub_40B1BB((__int64)(v61 + 1), k + 3, "invalid number after `.'");
          v61 = sub_40B2CD(v61, (__int64)k, 1);
        }
        else
        {
          k[2] = -1LL;
          k[3] = 0LL;
        }
        if ( *v61 )
          sub_40B027((__int64)optarg, "stray character in field spec");
        sub_40AFC8((__int64)k);
      }
      else
      {
        if ( v59 == 98 )
          goto LABEL_113;
        if ( v59 <= 98 )
        {
          if ( v59 != 86 )
            goto LABEL_180;
          goto LABEL_113;
        }
LABEL_118:
        if ( v51 && v51 != v59 )
          sub_40B084((__int64)"cC");
        v51 = v59;
      }
    }
    else
    {
      if ( v59 == 67 )
        goto LABEL_118;
      if ( v59 > 67 )
      {
        if ( v59 == 82 )
          goto LABEL_113;
        if ( v59 <= 82 )
        {
          if ( v59 != 77 )
            goto LABEL_180;
          goto LABEL_113;
        }
        sub_4042D1((unsigned int)longind[0].sa_handler, v59, (__int64)optarg);
      }
      else
      {
        if ( v59 == -130 )
          sub_402CB8(0);
        if ( v59 != 1 )
        {
          if ( v59 == -131 )
          {
            sub_414D2A(
              (_DWORD)stdout,
              (unsigned int)"sort",
              (unsigned int)"GNU coreutils",
              (_DWORD)off_61D518,
              (unsigned int)"Mike Haertel",
              (unsigned int)"Paul Eggert",
              0);
            exit(0);
          }
LABEL_180:
          sub_402CB8(2);
        }
        k = 0LL;
        if ( *optarg == 43 )
        {
          v7 = optind != a1 && *a2[optind] == 45 && (unsigned int)(a2[optind][1] - 48) <= 9;
          v57 = v7;
          v8 = v54;
          v9 = v7 && !v56;
          v54 = v54 || v9;
          if ( v8 || v9 )
          {
            k = sub_40B432(v80);
            v61 = (_BYTE *)sub_40B1BB((__int64)(optarg + 1), k, 0LL);
            if ( v61 && *v61 == 46 )
              v61 = (_BYTE *)sub_40B1BB((__int64)(v61 + 1), k + 1, 0LL);
            if ( !*k && !k[1] )
              *k = -1LL;
            if ( v61 && !*sub_40B2CD(v61, (__int64)k, 0) )
            {
              if ( v57 )
              {
                v10 = optind++;
                v74 = a2[v10];
                v61 = (_BYTE *)sub_40B1BB((__int64)(v74 + 1), k + 2, "invalid number after `-'");
                if ( *v61 == 46 )
                  v61 = (_BYTE *)sub_40B1BB((__int64)(v61 + 1), k + 3, "invalid number after `.'");
                if ( !k[3] && k[2] )
                  --k[2];
                if ( *sub_40B2CD(v61, (__int64)k, 1) )
                  sub_40B027((__int64)v74, "stray character in field spec");
              }
              *((_BYTE *)k + 57) = 1;
              sub_40AFC8((__int64)k);
            }
            else
            {
              k = 0LL;
            }
          }
        }
        if ( !k )
        {
          v11 = v64++;
          *((_QWORD *)ptr + v11) = optarg;
        }
      }
    }
  }
}
