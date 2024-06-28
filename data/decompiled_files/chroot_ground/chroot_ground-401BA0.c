#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  char *v4; // r12
  char *v5; // rbx
  int *v6; // rax
  char *v7; // rbx
  int *v8; // rax
  int *v9; // rax
  char *v10; // rbx
  int *v11; // rax
  char *v12; // rbx
  int *v13; // rax
  int v14; // eax
  __int64 v15; // r12
  char *v16; // rbx
  int *v17; // rax
  char **argv; // [rsp+0h] [rbp-70h]
  char v19; // [rsp+1Fh] [rbp-51h]
  __uid_t uid; // [rsp+20h] [rbp-50h] BYREF
  __gid_t gid; // [rsp+24h] [rbp-4Ch] BYREF
  int v22; // [rsp+28h] [rbp-48h]
  int status; // [rsp+2Ch] [rbp-44h]
  void *ptr; // [rsp+30h] [rbp-40h] BYREF
  void *v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h]
  __int64 v27; // [rsp+48h] [rbp-28h]
  char *v28; // [rsp+50h] [rbp-20h]
  const char *v29; // [rsp+58h] [rbp-18h]

  argv = a2;
  v26 = 0LL;
  v27 = 0LL;
  sub_4021B3(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40173D(0x7Du);
  sub_4052A0(sub_402011);
  while ( 1 )
  {
    v22 = getopt_long(a1, a2, "+", &longopts, 0LL);
    if ( v22 == -1 )
    {
      if ( a1 <= optind )
      {
        v3 = gettext("missing operand");
        error(0, 0, v3);
        sub_401A93(125);
      }
      if ( chroot(a2[optind]) )
      {
        v4 = a2[optind];
        v5 = gettext("cannot change root directory to %s");
        v6 = __errno_location();
        error(125, *v6, v5, v4);
      }
      if ( chdir("/") )
      {
        v7 = gettext("cannot chdir to root directory");
        v8 = __errno_location();
        error(125, *v8, v7);
      }
      if ( optind + 1 == a1 )
      {
        v28 = getenv("SHELL");
        if ( !v28 )
          v28 = (char *)sub_40185F((__int64)"/bin/sh");
        *a2 = v28;
        a2[1] = (char *)sub_40185F((__int64)"-i");
        a2[2] = 0LL;
      }
      else
      {
        argv = &a2[optind + 1];
      }
      v19 = 0;
      if ( v26 )
      {
        uid = -1;
        gid = -1;
        v29 = (const char *)sub_403E00(v26, &uid, &gid, &ptr, &v25);
        if ( v29 )
        {
          v9 = __errno_location();
          error(125, *v9, "%s", v29);
        }
        free(ptr);
        free(v25);
        if ( v27 && (unsigned int)sub_40186D(v27) )
          v19 = 1;
        if ( gid != -1 && setgid(gid) )
        {
          v10 = gettext("failed to set group-ID");
          v11 = __errno_location();
          error(0, *v11, v10);
          v19 = 1;
        }
        if ( uid != -1 && setuid(uid) )
        {
          v12 = gettext("failed to set user-ID");
          v13 = __errno_location();
          error(0, *v13, v12);
          v19 = 1;
        }
      }
      else if ( v27 && (unsigned int)sub_40186D(v27) )
      {
        v19 = 1;
      }
      if ( v19 )
        exit(125);
      execvp(*argv, argv);
      if ( *__errno_location() == 2 )
        v14 = 127;
      else
        v14 = 126;
      status = v14;
      v15 = sub_4022BE(*argv);
      v16 = gettext("failed to run command %s");
      v17 = __errno_location();
      error(0, *v17, v16, v15);
      exit(status);
    }
    if ( v22 == -130 )
      sub_401A93(0);
    if ( v22 <= -130 )
      break;
    if ( v22 == 256 )
    {
      v27 = optarg;
    }
    else
    {
      if ( v22 != 257 )
        goto LABEL_12;
      v26 = optarg;
    }
  }
  if ( v22 == -131 )
  {
    sub_4045F0(
      (_DWORD)stdout,
      (unsigned int)"chroot",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_6071F0,
      (unsigned int)"Roland McGrath",
      0,
      (char)a2);
    exit(0);
  }
LABEL_12:
  sub_401A93(125);
}
