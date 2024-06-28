#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char *v9; // rbx
  char *v10; // rax
  __uid_t v11; // eax
  __gid_t v12; // eax
  unsigned __int8 v13; // [rsp+2Ch] [rbp-24h]
  unsigned __int8 v14; // [rsp+2Dh] [rbp-23h]
  char v15; // [rsp+2Eh] [rbp-22h]
  unsigned __int8 v16; // [rsp+2Fh] [rbp-21h]
  int v17; // [rsp+34h] [rbp-1Ch]
  struct passwd *v18; // [rsp+38h] [rbp-18h]

  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  sub_4025EA(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_4051D0(sub_402448);
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        v17 = getopt_long(a1, a2, "agnruGZ", &longopts, 0LL);
        if ( v17 == -1 )
        {
          if ( a1 - optind > 1 )
          {
            v4 = sub_4026F5(a2[optind + 1]);
            v5 = gettext("extra operand %s");
            error(0, 0, v5, v4);
            sub_4017E5(1);
          }
          if ( a1 - optind == 1 && dword_607280 )
          {
            v6 = gettext("cannot print security context when user specified");
            error(1, 0, v6);
          }
          if ( v13 + v14 + v16 + dword_607280 > 1 )
          {
            v7 = gettext("cannot print \"only\" of more than one choice");
            error(1, 0, v7);
          }
          if ( !(v14 + v16 + v13) && (v15 || byte_607284) )
          {
            v8 = gettext("cannot print only names or real IDs in default format");
            error(1, 0, v8);
          }
          if ( a1 - optind == 1 )
          {
            v18 = getpwnam(a2[optind]);
            if ( !v18 )
            {
              v9 = a2[optind];
              v10 = gettext("%s: No such user");
              error(1, 0, v10, v9);
            }
            dword_60728C = v18->pw_uid;
            uid = dword_60728C;
            dword_607294 = v18->pw_gid;
            gid = dword_607294;
          }
          else
          {
            dword_60728C = geteuid();
            uid = getuid();
            dword_607294 = getegid();
            gid = getgid();
          }
          if ( v16 )
          {
            if ( v15 )
              v11 = uid;
            else
              v11 = dword_60728C;
            sub_401DFB(v11);
          }
          else if ( v14 )
          {
            if ( v15 )
              v12 = gid;
            else
              v12 = dword_607294;
            if ( (unsigned __int8)sub_402379(v12, (unsigned __int8)byte_607284) != 1 )
              byte_6071F0 = 0;
          }
          else if ( v13 )
          {
            if ( (unsigned __int8)sub_4021BE(a2[optind], uid, gid, dword_607294, (unsigned __int8)byte_607284) != 1 )
              byte_6071F0 = 0;
          }
          else if ( dword_607280 )
          {
            fputs_unlocked(s, stdout);
          }
          else
          {
            sub_401E9B(a2[optind]);
          }
          putchar_unlocked(10);
          exit(byte_6071F0 == 0);
        }
      }
      while ( v17 == 97 );
      if ( v17 <= 97 )
        break;
      if ( v17 == 110 )
      {
        byte_607284 = 1;
      }
      else if ( v17 > 110 )
      {
        if ( v17 == 114 )
        {
          v15 = 1;
        }
        else
        {
          if ( v17 != 117 )
            goto LABEL_26;
          v16 = 1;
        }
      }
      else
      {
        if ( v17 != 103 )
          goto LABEL_26;
        v14 = 1;
      }
    }
    if ( v17 == -130 )
      sub_4017E5(0);
    if ( v17 <= -130 )
    {
      if ( v17 == -131 )
      {
        sub_4045BF(
          (_DWORD)stdout,
          (unsigned int)"id",
          (unsigned int)"GNU coreutils",
          (_DWORD)off_6071F8,
          (unsigned int)"Arnold Robbins",
          (unsigned int)"David MacKenzie",
          0);
        exit(0);
      }
LABEL_26:
      sub_4017E5(1);
    }
    if ( v17 == 71 )
    {
      v13 = 1;
    }
    else
    {
      if ( v17 != 90 )
        goto LABEL_26;
      v3 = gettext("--context (-Z) works only on an SELinux-enabled kernel");
      error(1, 0, v3);
      dword_607280 = 1;
    }
  }
}
