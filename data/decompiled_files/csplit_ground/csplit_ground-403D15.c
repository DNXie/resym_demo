#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  char *v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  int v11; // eax
  char *v12; // rbx
  int *v13; // rax
  int i; // [rsp+20h] [rbp-D0h]
  int j; // [rsp+20h] [rbp-D0h]
  int v17; // [rsp+24h] [rbp-CCh]
  unsigned __int64 v18; // [rsp+28h] [rbp-C8h] BYREF
  size_t v19; // [rsp+30h] [rbp-C0h]
  unsigned __int64 v20; // [rsp+38h] [rbp-B8h]
  struct sigaction v21; // [rsp+40h] [rbp-B0h] BYREF

  sub_404768(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_408100(sub_40445B);
  qword_60B388 = (__int64)a2;
  qword_60B398 = 0LL;
  qword_60B3A0 = 0LL;
  byte_60B390 = 0;
  byte_60B391 = 1;
  s = "xx";
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v17 = getopt_long(a1, a2, "f:b:kn:sqz", &longopts, 0LL);
          if ( v17 == -1 )
          {
            if ( a1 - optind <= 1 )
            {
              if ( a1 > optind )
              {
                v6 = sub_404873(a2[a1 - 1]);
                v7 = gettext("missing operand after %s");
                error(0, 0, v7, v6);
              }
              else
              {
                v5 = gettext("missing operand");
                error(0, 0, v5);
              }
              sub_4042DC(1LL);
            }
            v8 = s;
            v19 = strlen(s);
            if ( qword_60B360 )
            {
              v8 = qword_60B360;
              v10 = sub_403BCF((unsigned __int8 *)qword_60B360);
            }
            else if ( (unsigned int)dword_60B260 <= 9 )
            {
              v10 = 10LL;
            }
            else
            {
              v10 = dword_60B260;
            }
            v20 = v10;
            if ( -2LL - v19 < v10 )
              sub_401CAF(v8, a2, v9);
            dest = (char *)sub_406A3C(v19 + v20 + 1);
            v11 = optind++;
            sub_4026B3(a2[v11]);
            sub_403717(a1, optind, (__int64)a2);
            sigemptyset(&set);
            for ( i = 0; i <= 10; ++i )
            {
              sigaction(sig[i], 0LL, &v21);
              if ( v21.sa_handler != (__sighandler_t)1 )
                sigaddset(&set, sig[i]);
            }
            v21.sa_handler = (__sighandler_t)sub_401CDE;
            v21.sa_mask = set;
            v21.sa_flags = 0;
            for ( j = 0; j <= 10; ++j )
            {
              if ( sigismember(&set, sig[j]) )
                sigaction(sig[j], &v21, 0LL);
            }
            sub_402D87();
            if ( close(0) )
            {
              v12 = gettext("read error");
              v13 = __errno_location();
              error(0, *v13, v12);
              sub_401C9C();
            }
            exit(0);
          }
          if ( v17 != 107 )
            break;
          byte_60B391 = 0;
        }
        if ( v17 > 107 )
          break;
        if ( v17 == -130 )
          sub_4042DC(0LL);
        if ( v17 <= -130 )
        {
          if ( v17 == -131 )
          {
            sub_4067D4(
              (_DWORD)stdout,
              (unsigned int)"csplit",
              (unsigned int)"GNU coreutils",
              (_DWORD)off_60B268,
              (unsigned int)"Stuart Kemp",
              (unsigned int)"David MacKenzie",
              0);
            exit(0);
          }
LABEL_29:
          sub_4042DC(1LL);
        }
        if ( v17 == 98 )
        {
          qword_60B360 = (char *)optarg;
        }
        else
        {
          if ( v17 != 102 )
            goto LABEL_29;
          s = (char *)optarg;
        }
      }
      if ( v17 != 113 )
        break;
LABEL_25:
      byte_60B390 = 1;
    }
    if ( v17 > 113 )
    {
      if ( v17 == 115 )
        goto LABEL_25;
      if ( v17 != 122 )
        goto LABEL_29;
      byte_60B392 = 1;
    }
    else
    {
      if ( v17 != 110 )
        goto LABEL_29;
      if ( (unsigned int)sub_407157(optarg, 0LL, 10LL, &v18, locale) || v18 > 0x7FFFFFFF )
      {
        v3 = optarg;
        v4 = gettext("%s: invalid number");
        error(1, 0, v4, v3);
      }
      dword_60B260 = v18;
    }
  }
}
