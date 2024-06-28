#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rbx
  int *v4; // rax
  char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  __int64 v8; // rbx
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  const char *v12; // rax
  __int64 v13; // rbx
  char *v14; // rax
  const char *v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  __int64 v18; // r12
  char *v19; // rbx
  int *v20; // rax
  __int64 v21; // r12
  char *v22; // rbx
  int *v23; // rax
  char *v24; // rax
  char v25; // [rsp+23h] [rbp-7Dh]
  char v26; // [rsp+24h] [rbp-7Ch]
  char v27; // [rsp+25h] [rbp-7Bh]
  char v28; // [rsp+26h] [rbp-7Ah]
  char v29; // [rsp+27h] [rbp-79h]
  int status; // [rsp+28h] [rbp-78h]
  int v31; // [rsp+2Ch] [rbp-74h]
  int fd; // [rsp+38h] [rbp-68h]
  int errnum; // [rsp+3Ch] [rbp-64h]
  const char *v34; // [rsp+40h] [rbp-60h]
  const char *v35; // [rsp+48h] [rbp-58h]
  char *s; // [rsp+50h] [rbp-50h]
  char *sa; // [rsp+50h] [rbp-50h]
  char *v38; // [rsp+58h] [rbp-48h]
  const char *v39; // [rsp+58h] [rbp-48h]
  char *v40; // [rsp+58h] [rbp-48h]
  size_t v41; // [rsp+60h] [rbp-40h]
  size_t n; // [rsp+68h] [rbp-38h]
  char *desta; // [rsp+70h] [rbp-30h]
  char *destb; // [rsp+70h] [rbp-30h]
  const char *dest; // [rsp+70h] [rbp-30h]
  unsigned __int64 v46; // [rsp+78h] [rbp-28h]
  char *v47; // [rsp+80h] [rbp-20h]
  char *v48; // [rsp+88h] [rbp-18h]

  v35 = 0LL;
  v25 = 0;
  v38 = 0LL;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  status = 0;
  sub_402AB7(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_406F80(sub_401D7F);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v31 = getopt_long(a1, a2, "dp:qtuV", &longopts, 0LL);
        if ( v31 == -1 )
        {
          if ( v25 && !sub_402964("/dev/null", "wb", stderr) )
          {
            v3 = gettext("failed to redirect stderr to /dev/null");
            v4 = __errno_location();
            error(1, *v4, v3);
          }
          if ( (unsigned int)(a1 - optind) > 1 )
          {
            v5 = gettext("too many templates");
            error(0, 0, v5);
            sub_401B17(1);
          }
          if ( a1 == optind )
          {
            v26 = 1;
            s = off_60A240[0];
          }
          else
          {
            s = a2[optind];
          }
          if ( v38 )
          {
            n = strlen(s);
            if ( !n || s[n - 1] != 88 )
            {
              v6 = sub_402BC2(s);
              v7 = gettext("with --suffix, template %s must end in X");
              error(1, 0, v7, v6);
            }
            v41 = strlen(v38);
            desta = (char *)sub_405040(n + v41 + 1);
            memcpy(desta, s, n);
            memcpy(&desta[n], v38, v41 + 1);
            sa = desta;
            v39 = &desta[n];
          }
          else
          {
            sa = (char *)sub_4051AF(s);
            v40 = strrchr(sa, 88);
            if ( v40 )
              v39 = v40 + 1;
            else
              v39 = strchr(sa, 0);
            v41 = strlen(v39);
          }
          if ( v41 && (const char *)sub_4026AC(v39) != v39 )
          {
            v8 = sub_402BC2(v39);
            v9 = gettext("invalid suffix %s, contains directory separator");
            error(1, 0, v9, v8);
          }
          v46 = sub_401CA8((__int64)sa, v39 - sa);
          if ( v46 <= 2 )
          {
            v10 = sub_402BC2(sa);
            v11 = gettext("too few X's in template %s");
            error(1, 0, v11, v10);
          }
          if ( v26 )
          {
            if ( v27 )
            {
              v47 = getenv("TMPDIR");
              if ( v47 && *v47 )
              {
                v12 = v47;
              }
              else if ( v35 )
              {
                v12 = v35;
              }
              else
              {
                v12 = "/tmp";
              }
              v34 = v12;
              if ( (char *)sub_4026AC(sa) != sa )
              {
                v13 = sub_402BC2(sa);
                v14 = gettext("invalid template, %s, contains directory separator");
                error(1, 0, v14, v13);
              }
            }
            else
            {
              if ( v35 && *v35 )
              {
                v34 = v35;
              }
              else
              {
                v48 = getenv("TMPDIR");
                if ( v48 && *v48 )
                  v15 = v48;
                else
                  v15 = "/tmp";
                v34 = v15;
              }
              if ( *sa == 47 )
              {
                v16 = sub_402BC2(sa);
                v17 = gettext("invalid template, %s; with --tmpdir, it may not be absolute");
                error(1, 0, v17, v16);
              }
            }
            destb = (char *)sub_402763(v34, sa, 0LL);
            free(sa);
            sa = destb;
          }
          dest = (const char *)sub_4051AF(sa);
          if ( v28 )
          {
            if ( (unsigned int)sub_401D35((__int64)dest, v41, v46, v29) )
            {
              v18 = sub_402BC2(sa);
              v19 = gettext("failed to create directory via template %s");
              v20 = __errno_location();
              error(0, *v20, v19, v18);
              status = 1;
            }
          }
          else
          {
            fd = sub_401CEB((__int64)dest, v41, v46, v29);
            if ( fd < 0 || v29 != 1 && close(fd) )
            {
              v21 = sub_402BC2(sa);
              v22 = gettext("failed to create file via template %s");
              v23 = __errno_location();
              error(0, *v23, v22, v21);
              status = 1;
            }
          }
          if ( !status )
          {
            puts(dest);
            if ( v29 != 1 )
            {
              byte_60A2F9 = 1;
              if ( (unsigned int)sub_40250C(stdout) )
              {
                errnum = *__errno_location();
                sub_4053FC(dest);
                v24 = gettext("write error");
                error(1, errnum, v24);
              }
            }
          }
          exit(status);
        }
        if ( v31 != 112 )
          break;
        v35 = (const char *)optarg;
        v26 = 1;
      }
      if ( v31 <= 112 )
        break;
      if ( v31 == 117 )
      {
        v29 = 1;
      }
      else if ( v31 > 117 )
      {
        if ( v31 == 128 )
        {
          v38 = (char *)optarg;
        }
        else
        {
          if ( v31 != 129 )
            goto LABEL_28;
          v26 = 1;
          v35 = (const char *)optarg;
        }
      }
      else if ( v31 == 113 )
      {
        v25 = 1;
      }
      else
      {
        if ( v31 != 116 )
          goto LABEL_28;
        v26 = 1;
        v27 = 1;
      }
    }
    if ( v31 == -130 )
      sub_401B17(0);
    if ( v31 <= -130 )
      break;
    if ( v31 == 86 )
      goto LABEL_27;
    if ( v31 != 100 )
      goto LABEL_28;
    v28 = 1;
  }
  if ( v31 == -131 )
  {
LABEL_27:
    sub_404DF2(
      (_DWORD)stdout,
      (unsigned int)"mktemp",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_60A248,
      (unsigned int)"Jim Meyering",
      (unsigned int)"Eric Blake",
      0);
    exit(0);
  }
LABEL_28:
  sub_401B17(1);
}
