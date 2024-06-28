#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // eax
  char *v4; // rbx
  char *v5; // rax
  char *v6; // rax
  char *v7; // rbx
  char *v8; // rax
  char *v9; // rbx
  char *v10; // rax
  char *v11; // rax
  char *v12; // rbx
  char *v13; // rax
  char *v14; // rax
  char *v15; // rbx
  char *v16; // rax
  char *v17; // rax
  const unsigned __int16 *v18; // rbx
  char *v19; // rbx
  char *v20; // rax
  char *v21; // rax
  char v22; // al
  __int64 v23; // rbx
  char *v24; // rax
  char *v25; // rbx
  char *v26; // rax
  int v27; // eax
  char *v28; // rax
  char *v29; // rax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rbx
  char *v33; // rax
  __int64 v34; // r12
  char *v35; // rbx
  int *v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  const char *v39; // rbx
  int *v40; // rax
  __int64 v41; // rbx
  char *v42; // rax
  __int64 v43; // rbx
  char *v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  const char *v47; // rbx
  int *v48; // rax
  __int64 v49[18]; // [rsp+0h] [rbp-250h] BYREF
  char **argv; // [rsp+90h] [rbp-1C0h] BYREF
  int argc; // [rsp+9Ch] [rbp-1B4h]
  unsigned int v52; // [rsp+A0h] [rbp-1B0h]
  int v53; // [rsp+A4h] [rbp-1ACh]
  int v54; // [rsp+A8h] [rbp-1A8h]
  int v55; // [rsp+ACh] [rbp-1A4h]
  unsigned __int64 v56; // [rsp+B0h] [rbp-1A0h] BYREF
  unsigned __int64 v57; // [rsp+B8h] [rbp-198h] BYREF
  unsigned __int64 v58; // [rsp+C0h] [rbp-190h]
  unsigned __int64 v59; // [rsp+C8h] [rbp-188h]
  unsigned __int64 v60; // [rsp+D0h] [rbp-180h]
  __off_t v61; // [rsp+D8h] [rbp-178h]
  char *v62; // [rsp+E0h] [rbp-170h]
  char *v63; // [rsp+E8h] [rbp-168h]
  struct stat stat_buf; // [rsp+F0h] [rbp-160h] BYREF
  struct sigaction v65; // [rsp+180h] [rbp-D0h] BYREF
  char v66[24]; // [rsp+220h] [rbp-30h] BYREF
  unsigned __int64 v67; // [rsp+238h] [rbp-18h]

  argc = a1;
  argv = a2;
  v67 = __readfsqword(0x28u);
  v52 = 0;
  v58 = 0LL;
  v60 = getpagesize();
  v56 = 0LL;
  v53 = 0;
  sub_40554A(*a2);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40C850(sub_405111);
  s1 = (char *)sub_402108((__int64)off_40D563);
  src = (char *)sub_402108((__int64)"x");
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              if ( optind )
                v3 = optind;
              else
                v3 = 1;
              v54 = v3;
              v55 = getopt_long(argc, argv, "0123456789C:a:b:del:n:u", &longopts, 0LL);
              if ( v55 == -1 )
              {
                if ( v56 && qword_610540 )
                {
                  v28 = gettext("--filter does not process a chunk extracted to stdout");
                  error(0, 0, v28);
                  sub_40227B(1);
                }
                if ( !v52 )
                {
                  v52 = 3;
                  v57 = 1000LL;
                }
                if ( !v57 )
                {
                  v29 = gettext("%s: invalid number of lines");
                  error(0, 0, v29, "0");
                  sub_40227B(1);
                }
                sub_4021A2(v57, v52);
                if ( optind < argc )
                {
                  v30 = optind++;
                  s1 = argv[v30];
                }
                if ( optind < argc )
                {
                  v31 = optind++;
                  src = argv[v31];
                }
                if ( optind < argc )
                {
                  v32 = sub_4060A6(argv[optind]);
                  v33 = gettext("extra operand %s");
                  error(0, 0, v33, v32);
                  sub_40227B(1);
                }
                if ( strcmp(s1, off_40D563) && (int)sub_409A8A(0LL, s1, 0LL, 0LL) < 0 )
                {
                  v34 = sub_4060A6(s1);
                  v35 = gettext("cannot open %s for reading");
                  v36 = __errno_location();
                  error(1, *v36, v35, v34);
                }
                if ( (unsigned int)sub_40C870(0, &stat_buf) )
                {
                  v39 = s1;
                  v40 = __errno_location();
                  error(1, *v40, "%s", v39);
                }
                if ( !v58 )
                {
                  qmemcpy(v49, &stat_buf, sizeof(v49));
                  v58 = sub_402116(
                          (__int64)&argv,
                          (__int64)&v65,
                          (__int64)v49,
                          0LL,
                          v37,
                          v38,
                          v49[0],
                          v49[1],
                          v49[2],
                          v49[3],
                          v49[4],
                          v49[5],
                          v49[6],
                          v49[7]);
                }
                v59 = stat_buf.st_size;
                if ( v52 == 5 || v52 == 6 )
                {
                  v61 = lseek(0, 0LL, 1);
                  if ( v61 < 0 )
                  {
                    v41 = sub_4060A6(s1);
                    v42 = gettext("%s: cannot determine file size");
                    error(1, 0, v42, v41);
                  }
                  v59 -= v61;
                  if ( (v57 & 0x8000000000000000LL) != 0LL )
                  {
                    v43 = sub_4054C5(v57, v66);
                    v44 = gettext("%s: invalid number of chunks");
                    error(1, 27, v44, v43);
                  }
                  v45 = v57;
                  if ( v59 >= v57 )
                    v45 = v59;
                  v59 = v45;
                }
                v46 = sub_4088C8(v58 + v60);
                v62 = (char *)sub_401F8C(v46, v60);
                if ( qword_610540 )
                {
                  sigemptyset(&stru_610600);
                  sigaction(13, 0LL, &v65);
                  if ( v65.sa_handler != (__sighandler_t)1 )
                    sigaddset(&stru_610600, 13);
                  sigprocmask(0, &stru_610600, &oset);
                }
                if ( v52 > 4 )
                {
                  if ( v52 == 6 )
                  {
                    sub_403233(v56, v57, (__int64)v62, v58, v59);
                  }
                  else if ( v52 < 6 )
                  {
                    if ( v56 )
                      sub_403644(v56, v57, (__int64)v62, v58, v59);
                    else
                      sub_402D9A(v59 / v57, (__int64)v62, v58, v57);
                  }
                  else
                  {
                    if ( v52 != 7 )
LABEL_146:
                      abort();
                    sub_403AF8(v56, v57, v62, v58);
                  }
                }
                else if ( v52 >= 3 )
                {
                  sub_402F3C(v57, v62, v58);
                }
                else if ( v52 == 1 )
                {
                  sub_402D9A(v57, (__int64)v62, v58, 0LL);
                }
                else
                {
                  if ( v52 != 2 )
                    goto LABEL_146;
                  sub_4030B0(v57);
                }
                if ( close(0) )
                {
                  v47 = s1;
                  v48 = __errno_location();
                  error(1, *v48, "%s", v47);
                }
                sub_402980(0LL, dword_6102D8, dword_610548, (const char *)dest);
                exit(0);
              }
              if ( v55 != 100 )
                break;
              s = "0123456789";
            }
            if ( v55 <= 100 )
              break;
            if ( v55 == 117 )
            {
              byte_6106AA = 1;
            }
            else if ( v55 > 117 )
            {
              switch ( v55 )
              {
                case 129:
                  qword_610540 = (__int64)optarg;
                  break;
                case 130:
                  if ( !(unsigned int)sub_409117(optarg, 0LL, 10LL, &v65, "bEGKkMmPTYZ0")
                    && v65.sa_handler
                    && (char *)~v60 >= (char *)v65.sa_handler )
                  {
                    v58 = (unsigned __int64)v65.sa_handler;
                  }
                  else
                  {
                    v25 = optarg;
                    v26 = gettext("%s: invalid IO block size");
                    error(0, 0, v26, v25);
                  }
                  break;
                case 128:
                  byte_6106A8 = 1;
                  break;
                default:
                  goto LABEL_96;
              }
            }
            else
            {
              switch ( v55 )
              {
                case 'l':
                  if ( v52 )
                  {
                    v11 = gettext("cannot split in more than one way");
                    error(0, 0, v11);
                    sub_40227B(1);
                  }
                  v52 = 3;
                  if ( (unsigned int)sub_409117(optarg, 0LL, 10LL, &v57, &locale) || !v57 )
                  {
                    v12 = optarg;
                    v13 = gettext("%s: invalid number of lines");
                    error(0, 0, v13, v12);
                    sub_40227B(1);
                  }
                  break;
                case 'n':
                  if ( v52 )
                  {
                    v17 = gettext("cannot split in more than one way");
                    error(0, 0, v17);
                    sub_40227B(1);
                  }
                  while ( 1 )
                  {
                    v18 = *__ctype_b_loc();
                    if ( (v18[(unsigned __int8)sub_401F7D(*optarg)] & 0x2000) == 0 )
                      break;
                    ++optarg;
                  }
                  if ( !strncmp(optarg, "r/", 2uLL) )
                  {
                    v52 = 7;
                    optarg += 2;
                  }
                  else if ( !strncmp(optarg, "l/", 2uLL) )
                  {
                    v52 = 6;
                    optarg += 2;
                  }
                  else
                  {
                    v52 = 5;
                  }
                  v63 = strchr(optarg, 47);
                  if ( v63 )
                  {
                    sub_4040F0(&v56, &v57, v63);
                  }
                  else if ( (unsigned int)sub_409117(optarg, 0LL, 10LL, &v57, &locale) || !v57 )
                  {
                    v19 = optarg;
                    v20 = gettext("%s: invalid number of chunks");
                    error(1, 0, v20, v19);
                  }
                  break;
                case 'e':
                  byte_6106A9 = 1;
                  break;
                default:
                  goto LABEL_96;
              }
            }
          }
          if ( v55 > 57 )
            break;
          if ( v55 < 48 )
          {
            if ( v55 == -131 )
            {
              v27 = sub_405DB6("Torbjorn Granlund", &unk_40D6B5);
              sub_408660(
                (_DWORD)stdout,
                (unsigned int)"split",
                (unsigned int)"GNU coreutils",
                (_DWORD)off_6102E0,
                v27,
                (unsigned int)"Richard M. Stallman",
                0);
              exit(0);
            }
            if ( v55 == -130 )
              sub_40227B(0);
LABEL_96:
            sub_40227B(1);
          }
          if ( !v52 )
          {
            v52 = 4;
            v57 = 0LL;
          }
          if ( v52 != 4 )
          {
            v21 = gettext("cannot split in more than one way");
            error(0, 0, v21);
            sub_40227B(1);
          }
          if ( v53 && v53 != v54 )
            v57 = 0LL;
          v53 = v54;
          if ( v57 > 0x1999999999999999LL || v55 - 48 + 10 * v57 < v57 )
          {
            v22 = 1;
          }
          else
          {
            v57 = 10 * v57 + v55 - 48;
            v22 = 0;
          }
          if ( v22 )
          {
            v23 = sub_4054C5(v57, v66);
            v24 = gettext("line count option -%s%c... is too large");
            error(1, 0, v24, v23, (unsigned int)v55);
          }
        }
        if ( v55 != 97 )
          break;
        if ( (unsigned int)sub_408C0B(optarg, 0LL, 10LL, &v65, &locale)
          || (char *)v65.sa_handler > (char *)0x1FFFFFFFFFFFFFFFLL )
        {
          v4 = optarg;
          v5 = gettext("%s: invalid suffix length");
          error(0, 0, v5, v4);
          sub_40227B(1);
        }
        n = (size_t)v65.sa_handler;
      }
      if ( v55 != 98 )
        break;
      if ( v52 )
      {
        v6 = gettext("cannot split in more than one way");
        error(0, 0, v6);
        sub_40227B(1);
      }
      v52 = 1;
      if ( (unsigned int)sub_409117(optarg, 0LL, 10LL, &v57, "bEGKkMmPTYZ0") || !v57 )
      {
        v7 = optarg;
        v8 = gettext("%s: invalid number of bytes");
        error(0, 0, v8, v7);
        sub_40227B(1);
      }
      if ( (v57 & 0x8000000000000000LL) != 0LL )
        goto LABEL_39;
    }
    if ( v55 != 67 )
      goto LABEL_96;
    if ( v52 )
    {
      v14 = gettext("cannot split in more than one way");
      error(0, 0, v14);
      sub_40227B(1);
    }
    v52 = 2;
    if ( (unsigned int)sub_409117(optarg, 0LL, 10LL, &v57, "bEGKkMmPTYZ0") || !v57 )
    {
      v15 = optarg;
      v16 = gettext("%s: invalid number of bytes");
      error(0, 0, v16, v15);
      sub_40227B(1);
    }
    if ( (v57 & 0x8000000000000000LL) != 0LL )
    {
LABEL_39:
      v9 = optarg;
      v10 = gettext("%s: invalid number of bytes");
      error(1, 27, v10, v9);
    }
  }
}
