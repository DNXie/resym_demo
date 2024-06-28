#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  unsigned int v3; // eax
  char *v4; // rax
  int v5; // eax
  bool v6; // al
  char *v7; // rbx
  int *v8; // rax
  char *v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  char *v13; // rax
  __int64 v14; // rbx
  char *v15; // rax
  __int64 v16; // rbx
  const char *v17; // rax
  char *v18; // rax
  char *v19; // rbx
  int *v20; // rax
  const char *v21; // rax
  char *v22; // rax
  char *v23; // rbx
  int *v24; // rax
  int v25; // eax
  __int64 v26; // rbx
  char *v27; // rax
  bool v28; // [rsp+24h] [rbp-5Ch]
  bool v29; // [rsp+25h] [rbp-5Bh]
  bool v30; // [rsp+26h] [rbp-5Ah]
  bool v31; // [rsp+27h] [rbp-59h]
  int fd; // [rsp+28h] [rbp-58h]
  int v33; // [rsp+2Ch] [rbp-54h]
  int status; // [rsp+30h] [rbp-50h]
  __mode_t mask; // [rsp+3Ch] [rbp-44h]
  int errnum; // [rsp+40h] [rbp-40h]
  int v37; // [rsp+44h] [rbp-3Ch]
  int v38; // [rsp+48h] [rbp-38h]
  int v39; // [rsp+4Ch] [rbp-34h]
  char *v40; // [rsp+50h] [rbp-30h]
  char *file; // [rsp+58h] [rbp-28h]
  char *v42; // [rsp+60h] [rbp-20h]
  char **v43; // [rsp+68h] [rbp-18h]

  fd = 1;
  v33 = 2;
  sub_4022B6(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  if ( getenv("POSIXLY_CORRECT") )
    v3 = 127;
  else
    v3 = 125;
  status = v3;
  sub_40155D(v3);
  sub_404D00(sub_401E17);
  sub_402167(
    a1,
    (_DWORD)a2,
    (unsigned int)"nohup",
    (unsigned int)"GNU coreutils",
    (_DWORD)off_6071C0,
    (unsigned int)sub_40167F,
    "Jim Meyering",
    0LL);
  if ( getopt_long(a1, a2, "+", 0LL, 0LL) != -1 )
    sub_40167F(status);
  if ( a1 <= optind )
  {
    v4 = gettext("missing operand");
    error(0, 0, v4);
    sub_40167F(status);
  }
  v28 = isatty(0) != 0;
  v5 = isatty(1);
  v29 = v5 != 0;
  v6 = !v5 && *__errno_location() == 9;
  v30 = v6;
  v31 = isatty(2) != 0;
  if ( v28 )
  {
    if ( (int)sub_40498A(0LL, "/dev/null", 1LL, 0LL) < 0 )
    {
      v7 = gettext("failed to render standard input unusable");
      v8 = __errno_location();
      error(0, *v8, v7);
      exit(status);
    }
    if ( !v29 && !v31 )
    {
      v9 = gettext("ignoring input");
      error(0, 0, v9);
    }
  }
  if ( v29 || v31 && v30 )
  {
    v40 = 0LL;
    file = "nohup.out";
    mask = umask(0xFFFFFE7F);
    if ( v29 )
      v10 = sub_40498A(1LL, "nohup.out", 1089LL, 384LL);
    else
      v10 = open("nohup.out", 1089, 384LL);
    fd = v10;
    if ( v10 < 0 )
    {
      errnum = *__errno_location();
      v42 = getenv("HOME");
      if ( v42 )
      {
        v40 = (char *)sub_401FB9(v42, "nohup.out", 0LL);
        if ( v29 )
          v11 = sub_40498A(1LL, v40, 1089LL, 384LL);
        else
          v11 = open(v40, 1089, 384LL);
        fd = v11;
      }
      if ( fd < 0 )
      {
        v37 = *__errno_location();
        v12 = sub_4023C1("nohup.out");
        v13 = gettext("failed to open %s");
        error(0, errnum, v13, v12);
        if ( v40 )
        {
          v14 = sub_4023C1(v40);
          v15 = gettext("failed to open %s");
          error(0, v37, v15, v14);
        }
        exit(status);
      }
      file = v40;
    }
    umask(mask);
    v16 = sub_4023C1(file);
    if ( v28 )
      v17 = "ignoring input and appending output to %s";
    else
      v17 = "appending output to %s";
    v18 = gettext(v17);
    error(0, 0, v18, v16);
    free(v40);
  }
  if ( v31 )
  {
    v33 = sub_403B59(2LL);
    if ( v33 >= 0 && (unsigned int)sub_401D4C((unsigned int)v33, 1LL) )
    {
      v19 = gettext("failed to set the copy of stderr to close on exec");
      v20 = __errno_location();
      error(status, *v20, v19);
    }
    if ( !v29 )
    {
      if ( v28 )
        v21 = "ignoring input and redirecting stderr to stdout";
      else
        v21 = "redirecting stderr to stdout";
      v22 = gettext(v21);
      error(0, 0, v22);
    }
    if ( dup2(fd, 2) < 0 )
    {
      v23 = gettext("failed to redirect standard error");
      v24 = __errno_location();
      error(status, *v24, v23);
    }
    if ( v30 )
      close(fd);
  }
  if ( ferror_unlocked(stderr) )
    exit(status);
  signal(1, (__sighandler_t)1);
  v43 = &a2[optind];
  execvp(*v43, v43);
  if ( *__errno_location() == 2 )
    v25 = 127;
  else
    v25 = 126;
  v38 = v25;
  v39 = *__errno_location();
  if ( dup2(v33, 2) == 2 )
  {
    v26 = sub_4023C1(*v43);
    v27 = gettext("failed to run command %s");
    error(0, v39, v27, v26);
  }
  exit(v38);
}
