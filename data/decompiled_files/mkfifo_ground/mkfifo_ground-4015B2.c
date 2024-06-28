#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  char *v7; // rax
  __mode_t v8; // eax
  char *v9; // rax
  __int64 v10; // r12
  char *v11; // rbx
  int *v12; // rax
  __mode_t mode; // [rsp+1Ch] [rbp-34h]
  int status; // [rsp+20h] [rbp-30h]
  int v15; // [rsp+24h] [rbp-2Ch]
  __int64 v16; // [rsp+28h] [rbp-28h]
  __int64 v17; // [rsp+30h] [rbp-20h]
  void *ptr; // [rsp+38h] [rbp-18h]

  v16 = 0LL;
  status = 0;
  v17 = 0LL;
  sub_40202D(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404720(sub_4018EC);
  while ( 1 )
  {
    v15 = getopt_long(a1, a2, "m:Z:", &longopts, 0LL);
    if ( v15 == -1 )
    {
      if ( optind == a1 )
      {
        v3 = gettext("missing operand");
        error(0, 0, v3);
        sub_401495(1);
      }
      if ( v17 && (int)sub_40136D(v17) < 0 )
      {
        v4 = sub_402138(v17);
        v5 = gettext("failed to set default file creation context to %s");
        v6 = __errno_location();
        error(1, *v6, v5, v4);
      }
      mode = 438;
      if ( v16 )
      {
        ptr = (void *)sub_401AF6(v16);
        if ( !ptr )
        {
          v7 = gettext("invalid mode");
          error(1, 0, v7);
        }
        v8 = umask(0);
        mode = sub_401E92(438LL, 0LL, v8, ptr, 0LL);
        free(ptr);
        if ( (mode & 0xFFFFFE00) != 0 )
        {
          v9 = gettext("mode must specify only file permission bits");
          error(1, 0, v9);
        }
      }
      while ( optind < a1 )
      {
        if ( mkfifo(a2[optind], mode) )
        {
          v10 = sub_402138(a2[optind]);
          v11 = gettext("cannot create fifo %s");
          v12 = __errno_location();
          error(0, *v12, v11, v10);
          status = 1;
        }
        ++optind;
      }
      exit(status);
    }
    if ( v15 == -130 )
      sub_401495(0);
    if ( v15 <= -130 )
      break;
    if ( v15 == 90 )
    {
      v17 = optarg;
    }
    else
    {
      if ( v15 != 109 )
        goto LABEL_12;
      v16 = optarg;
    }
  }
  if ( v15 == -131 )
  {
    sub_404002(
      (_DWORD)stdout,
      (unsigned int)"mkfifo",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_606190,
      (unsigned int)"David MacKenzie",
      0,
      (char)a2);
    exit(0);
  }
LABEL_12:
  sub_401495(1);
}
