#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall main(int a1, char **a2, char **a3)
{
  const unsigned __int16 *v3; // rbx
  int v4; // eax
  const unsigned __int16 *v5; // rbx
  char *v6; // rax
  __int64 v7; // r12
  char *v8; // rbx
  int *v9; // rax
  char *v10; // rax
  int v11; // eax
  __int64 v12; // r12
  __int64 v13; // rbx
  char *v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbx
  char *v17; // rax
  __int64 v18; // r12
  __int64 v19; // rbx
  char *v20; // rax
  char *v21; // rax
  __int64 v22; // r12
  char *v23; // rbx
  int *v24; // rax
  __int64 v25; // rbx
  char *v26; // rax
  int v27; // eax
  __int64 v28; // r12
  char *v29; // rbx
  int *v30; // rax
  __int64 v31; // r12
  char *v32; // rbx
  int *v33; // rax
  char **v34; // rax
  char **argv; // [rsp+0h] [rbp-E0h]
  char v37; // [rsp+12h] [rbp-CEh]
  bool v38; // [rsp+13h] [rbp-CDh]
  int v39; // [rsp+14h] [rbp-CCh]
  int fd; // [rsp+18h] [rbp-C8h]
  int v41; // [rsp+1Ch] [rbp-C4h]
  int oflag; // [rsp+20h] [rbp-C0h]
  unsigned __int64 v43; // [rsp+28h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+30h] [rbp-B0h]
  char *file; // [rsp+38h] [rbp-A8h]
  struct stat stat_buf; // [rsp+40h] [rbp-A0h] BYREF

  v37 = 0;
  v38 = 0;
  v44 = -1LL;
  v39 = 0;
  sub_402B9F(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_4091E0(sub_4029FD);
  while ( 1 )
  {
    v41 = getopt_long(a1, a2, "cor:s:", &longopts, 0LL);
    if ( v41 == -1 )
      break;
    if ( v41 == 99 )
    {
      byte_60C2E0 = 1;
    }
    else
    {
      if ( v41 <= 99 )
      {
        if ( v41 == -131 )
        {
          v11 = sub_40340B("Padraig Brady", &unk_409AB9);
          sub_405B86(
            (_DWORD)stdout,
            (unsigned int)"truncate",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_60C240,
            v11,
            0,
            (char)a2);
          exit(0);
        }
        if ( v41 == -130 )
          sub_401BDE(0);
LABEL_43:
        sub_401BDE(1);
      }
      switch ( v41 )
      {
        case 'r':
          filename = (char *)optarg;
          break;
        case 's':
          while ( 1 )
          {
            v3 = *__ctype_b_loc();
            if ( (v3[(unsigned __int8)sub_401A1D(*(_BYTE *)optarg)] & 0x2000) == 0 )
              break;
            ++optarg;
          }
          v4 = *(char *)optarg;
          if ( v4 == 47 )
          {
            v39 = 4;
            ++optarg;
          }
          else if ( v4 > 47 )
          {
            if ( v4 == 60 )
            {
              v39 = 3;
              ++optarg;
            }
            else if ( v4 == 62 )
            {
              v39 = 2;
              ++optarg;
            }
          }
          else if ( v4 == 37 )
          {
            v39 = 5;
            ++optarg;
          }
          while ( 1 )
          {
            v5 = *__ctype_b_loc();
            if ( (v5[(unsigned __int8)sub_401A1D(*(_BYTE *)optarg)] & 0x2000) == 0 )
              break;
            ++optarg;
          }
          if ( *(_BYTE *)optarg == 43 || *(_BYTE *)optarg == 45 )
          {
            if ( v39 )
            {
              v6 = gettext("multiple relative modifiers specified");
              error(0, 0, v6);
              sub_401BDE(1);
            }
            v39 = 1;
          }
          if ( (unsigned int)sub_401B62(optarg, &v43) == -1 )
          {
            v7 = sub_4036FB(optarg);
            v8 = gettext("invalid number %s");
            v9 = __errno_location();
            error(1, *v9, v8, v7);
          }
          if ( (v39 == 5 || v39 == 4) && !v43 )
          {
            v10 = gettext("division by zero");
            error(1, 0, v10);
          }
          v37 = 1;
          break;
        case 'o':
          byte_60C2E1 = 1;
          break;
        default:
          goto LABEL_43;
      }
    }
  }
  argv = &a2[optind];
  if ( !filename && v37 != 1 )
  {
    v12 = sub_4036D7(1LL, "--reference");
    v13 = sub_4036D7(0LL, "--size");
    v14 = gettext("you must specify either %s or %s");
    error(0, 0, v14, v13, v12);
    sub_401BDE(1);
  }
  if ( filename && v37 && !v39 )
  {
    v15 = sub_4036D7(1LL, "--reference");
    v16 = sub_4036D7(0LL, "--size");
    v17 = gettext("you must specify a relative %s with %s");
    error(0, 0, v17, v16, v15);
    sub_401BDE(1);
  }
  if ( byte_60C2E1 && v37 != 1 )
  {
    v18 = sub_4036D7(1LL, "--size");
    v19 = sub_4036D7(0LL, "--io-blocks");
    v20 = gettext("%s was specified but %s was not");
    error(0, 0, v20, v19, v18);
    sub_401BDE(1);
  }
  if ( a1 - optind <= 0 )
  {
    v21 = gettext("missing file operand");
    error(0, 0, v21);
    sub_401BDE(1);
  }
  if ( filename )
  {
    if ( (unsigned int)sub_409200(filename, &stat_buf) )
    {
      v22 = sub_4036FB(filename);
      v23 = gettext("cannot stat %s");
      v24 = __errno_location();
      error(1, *v24, v23, v22);
    }
    if ( (stat_buf.st_mode & 0xF000) != 0x8000 )
    {
      v25 = sub_4036FB(filename);
      v26 = gettext("cannot get the size of %s");
      error(1, 0, v26, v25);
    }
    if ( v37 != 1 )
      v43 = stat_buf.st_size;
    else
      v44 = stat_buf.st_size;
  }
  if ( byte_60C2E0 )
    v27 = 2049;
  else
    v27 = 2113;
  oflag = v27;
  while ( 1 )
  {
    v34 = argv++;
    file = *v34;
    if ( !file )
      break;
    fd = open(file, oflag, 438LL);
    if ( fd == -1 )
    {
      if ( byte_60C2E0 != 1 || *__errno_location() != 2 )
      {
        v28 = sub_4036FB(file);
        v29 = gettext("cannot open %s for writing");
        v30 = __errno_location();
        error(0, *v30, v29, v28);
        v38 = 1;
      }
    }
    else
    {
      v38 = (v38 | (unsigned __int8)sub_401D38(fd, (__int64)file, v43, v44, v39) ^ 1) != 0;
      if ( close(fd) )
      {
        v31 = sub_4036FB(file);
        v32 = gettext("closing %s");
        v33 = __errno_location();
        error(0, *v33, v32, v31);
        v38 = 1;
      }
    }
  }
  return v38;
}
