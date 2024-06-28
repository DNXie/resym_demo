#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __mode_t v4; // eax
  char *v5; // rax
  int v6; // eax
  char *v7; // rax
  __int64 v8; // rbx
  char *v9; // rax
  char *v10; // rax
  __int64 v11; // rbx
  char *v12; // rax
  char *v13; // rax
  __int64 v14; // r12
  char *v15; // rbx
  int *v16; // rax
  int v17; // eax
  __int64 v18; // rbx
  char *v19; // rax
  __int64 v20; // rbx
  char *v21; // rax
  char *v22; // rax
  const char *v23; // rbx
  int *v24; // rax
  const char *v25; // rbx
  int *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __mode_t mode; // [rsp+10h] [rbp-60h]
  int v30; // [rsp+14h] [rbp-5Ch]
  int v31; // [rsp+18h] [rbp-58h]
  int v32; // [rsp+1Ch] [rbp-54h]
  unsigned int major[2]; // [rsp+20h] [rbp-50h] BYREF
  unsigned int minor[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v35; // [rsp+30h] [rbp-40h]
  __int64 v36; // [rsp+38h] [rbp-38h]
  void *ptr; // [rsp+40h] [rbp-30h]
  char *v38; // [rsp+48h] [rbp-28h]
  char *v39; // [rsp+50h] [rbp-20h]
  unsigned __int64 v40; // [rsp+58h] [rbp-18h]

  v35 = 0LL;
  v36 = 0LL;
  sub_402614(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_405210(sub_401ED3);
  while ( 1 )
  {
    v31 = getopt_long(a1, a2, "m:Z:", &longopts, 0LL);
    if ( v31 == -1 )
      break;
    if ( v31 == -130 )
      sub_401635(0);
    if ( v31 <= -130 )
    {
      if ( v31 == -131 )
      {
        sub_4045E9(
          (_DWORD)stdout,
          (unsigned int)"mknod",
          (unsigned int)"GNU coreutils",
          (_DWORD)off_6071B0,
          (unsigned int)"David MacKenzie",
          0,
          (char)a2);
        exit(0);
      }
LABEL_12:
      sub_401635(1);
    }
    if ( v31 == 90 )
    {
      v36 = optarg;
    }
    else
    {
      if ( v31 != 109 )
        goto LABEL_12;
      v35 = optarg;
    }
  }
  mode = 438;
  if ( v35 )
  {
    ptr = (void *)sub_4020DD(v35);
    if ( !ptr )
    {
      v3 = gettext("invalid mode");
      error(1, 0, v3);
    }
    v4 = umask(0);
    mode = sub_402479(438LL, 0LL, v4, ptr, 0LL);
    free(ptr);
    if ( (mode & 0xFFFFFE00) != 0 )
    {
      v5 = gettext("mode must specify only file permission bits");
      error(1, 0, v5);
    }
  }
  if ( a1 <= optind || optind + 1 < a1 && *a2[optind + 1] == 112 )
    v6 = 2;
  else
    v6 = 4;
  v32 = v6;
  if ( a1 - optind < v6 )
  {
    if ( a1 > optind )
    {
      v8 = sub_40271F(a2[a1 - 1]);
      v9 = gettext("missing operand after %s");
      error(0, 0, v9, v8);
    }
    else
    {
      v7 = gettext("missing operand");
      error(0, 0, v7);
    }
    if ( v32 == 4 && a1 - optind == 2 )
    {
      v10 = gettext("Special files require major and minor device numbers.");
      fprintf(stderr, "%s\n", v10);
    }
    sub_401635(1);
  }
  if ( a1 - optind > v6 )
  {
    v11 = sub_40271F((&a2[optind])[v6]);
    v12 = gettext("extra operand %s");
    error(0, 0, v12, v11);
    if ( v32 == 2 && a1 - optind == 4 )
    {
      v13 = gettext("Fifos do not have major and minor device numbers.");
      fprintf(stderr, "%s\n", v13);
    }
    sub_401635(1);
  }
  if ( v36 && (int)sub_40150D(v36) < 0 )
  {
    v14 = sub_40271F(v36);
    v15 = gettext("failed to set default file creation context to %s");
    v16 = __errno_location();
    error(1, *v16, v15, v14);
  }
  v17 = *a2[optind + 1];
  if ( v17 != 99 )
  {
    if ( v17 <= 99 )
    {
      if ( v17 != 98 )
        goto LABEL_63;
      v30 = 24576;
      goto LABEL_49;
    }
    if ( v17 == 112 )
    {
      if ( mkfifo(a2[optind], mode) )
      {
        v25 = (const char *)sub_40271F(a2[optind]);
        v26 = __errno_location();
        error(1, *v26, "%s", v25);
      }
LABEL_64:
      exit(0);
    }
    if ( v17 != 117 )
    {
LABEL_63:
      v27 = sub_40271F(a2[optind + 1]);
      v28 = gettext("invalid device type %s");
      error(0, 0, v28, v27);
      sub_401635(1);
    }
  }
  v30 = 0x2000;
LABEL_49:
  v38 = a2[optind + 2];
  v39 = a2[optind + 3];
  if ( (unsigned int)sub_404AA8(v38, 0LL, 0LL, major, 0LL) || major[0] != *(_QWORD *)major )
  {
    v18 = sub_40271F(v38);
    v19 = gettext("invalid major device number %s");
    error(1, 0, v19, v18);
  }
  if ( (unsigned int)sub_404AA8(v39, 0LL, 0LL, minor, 0LL) || minor[0] != *(_QWORD *)minor )
  {
    v20 = sub_40271F(v39);
    v21 = gettext("invalid minor device number %s");
    error(1, 0, v21, v20);
  }
  v40 = gnu_dev_makedev(major[0], minor[0]);
  if ( v40 == -1LL )
  {
    v22 = gettext("invalid device %s %s");
    error(1, 0, v22, v38, v39);
  }
  if ( (unsigned int)sub_405240(a2[optind], v30 | mode) )
  {
    v23 = (const char *)sub_40271F(a2[optind]);
    v24 = __errno_location();
    error(1, *v24, "%s", v23);
  }
  goto LABEL_64;
}
