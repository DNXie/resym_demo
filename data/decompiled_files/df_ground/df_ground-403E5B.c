#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // eax
  __int64 v4; // rax
  char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  const char *v8; // rbx
  int *v9; // rax
  bool v10; // al
  char *v11; // rax
  char *v12; // rbx
  int *v13; // rax
  char *v14; // rax
  char v15; // [rsp+23h] [rbp-4Dh]
  int longind; // [rsp+24h] [rbp-4Ch] BYREF
  int j; // [rsp+28h] [rbp-48h]
  int k; // [rsp+2Ch] [rbp-44h]
  int v19; // [rsp+30h] [rbp-40h]
  int fd; // [rsp+34h] [rbp-3Ch]
  int status; // [rsp+38h] [rbp-38h]
  unsigned int v22; // [rsp+3Ch] [rbp-34h]
  __int64 v23; // [rsp+40h] [rbp-30h]
  _QWORD *i; // [rsp+48h] [rbp-28h]
  __int64 l; // [rsp+50h] [rbp-20h]
  char *v26; // [rsp+58h] [rbp-18h]

  sub_40652A(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_413F20(sub_404AC0);
  qword_618538 = 0LL;
  qword_618540 = 0LL;
  byte_618520 = 0;
  byte_618521 = 0;
  byte_618523 = 0;
  dword_618524 = -1;
  byte_618550 = 0;
  byte_618531 = 0;
  byte_618530 = 0;
  ::status = 0;
  byte_618551 = 0;
  qword_618560 = 1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      longind = -1;
      v19 = getopt_long(a1, a2, "aB:iF:hHklmPTt:vx:", &longopts, &longind);
      if ( v19 == -1 )
      {
        if ( dword_618524 == -1 )
        {
          if ( byte_618530 )
          {
            dword_618524 = 0;
            if ( getenv("POSIXLY_CORRECT") )
              v4 = 512LL;
            else
              v4 = 1024LL;
            qword_618528 = v4;
          }
          else
          {
            v5 = getenv("DF_BLOCK_SIZE");
            sub_405C07(v5, &dword_618524, &qword_618528);
          }
        }
        if ( byte_618520 )
        {
          dword_618598 = 1;
        }
        else if ( (dword_618524 & 0x10) != 0 )
        {
          dword_618598 = 2;
        }
        else if ( byte_618530 )
        {
          dword_618598 = 3;
        }
        v15 = 0;
        for ( i = (_QWORD *)qword_618538; ; i = (_QWORD *)i[1] )
        {
          if ( !i )
          {
            if ( v15 )
              exit(1);
            if ( optind < a1 )
            {
              v23 = sub_409723(a1 - optind, 144LL);
              for ( j = optind; j < a1; ++j )
              {
                fd = open(a2[j], 256);
                if ( (fd < 0 || (unsigned int)sub_413F50(fd, (struct stat *)(v23 + 144LL * (j - optind))))
                  && (unsigned int)sub_413F40(a2[j], (struct stat *)(v23 + 144LL * (j - optind))) )
                {
                  v8 = (const char *)sub_407086(a2[j]);
                  v9 = __errno_location();
                  error(0, *v9, "%s", v8);
                  ::status = 1;
                  a2[j] = 0LL;
                }
                if ( fd >= 0 )
                  close(fd);
              }
            }
            v10 = qword_618538 || qword_618540 || byte_618550 || byte_618522;
            qword_618548 = sub_40AE9A(v10);
            if ( !qword_618548 )
            {
              status = optind >= a1;
              if ( optind >= a1 )
                v11 = (char *)locale;
              else
                v11 = gettext("Warning: ");
              v26 = v11;
              v12 = gettext("cannot read table of mounted file systems");
              v13 = __errno_location();
              error(status, *v13, "%s%s", v26, v12);
            }
            if ( byte_618532 )
              sync();
            if ( optind >= a1 )
            {
              sub_403C0C();
            }
            else
            {
              byte_618523 = 1;
              for ( k = optind; k < a1; ++k )
              {
                if ( a2[k] )
                  sub_403BAF(a2[k], v23 + 144LL * (k - optind));
              }
            }
            if ( byte_618551 )
            {
              if ( byte_618520 )
                qword_618568 = 1LL;
              sub_402BA3("total", 0LL, 0LL, 0LL, 0, 0, &qword_618560);
            }
            sub_402432();
            if ( byte_618531 != 1 )
            {
              v14 = gettext("no file systems processed");
              error(1, 0, v14);
            }
            exit(::status);
          }
          for ( l = qword_618540; ; l = *(_QWORD *)(l + 8) )
          {
            if ( !l )
              goto LABEL_78;
            if ( !strcmp((const char *)*i, *(const char **)l) )
              break;
          }
          v6 = sub_407086(*i);
          v7 = gettext("file system type %s both selected and excluded");
          error(0, 0, v7, v6);
          v15 = 1;
LABEL_78:
          ;
        }
      }
      if ( v19 != 104 )
        break;
      dword_618524 = 176;
      qword_618528 = 1LL;
    }
    if ( v19 > 104 )
    {
      if ( v19 == 116 )
        goto LABEL_53;
      if ( v19 > 116 )
      {
        if ( v19 == 120 )
        {
          sub_403CD2(optarg);
        }
        else if ( v19 > 120 )
        {
          if ( v19 == 128 )
          {
            byte_618532 = 0;
          }
          else
          {
            if ( v19 != 129 )
              goto LABEL_58;
            byte_618532 = 1;
          }
        }
        else if ( v19 != 118 )
        {
          goto LABEL_58;
        }
      }
      else if ( v19 == 107 )
      {
        dword_618524 = 0;
        qword_618528 = 1024LL;
      }
      else if ( v19 > 107 )
      {
        if ( v19 == 108 )
        {
          byte_618522 = 1;
        }
        else
        {
          if ( v19 != 109 )
            goto LABEL_58;
          dword_618524 = 0;
          qword_618528 = 0x100000LL;
        }
      }
      else
      {
        if ( v19 != 105 )
          goto LABEL_58;
        byte_618520 = 1;
      }
    }
    else if ( v19 == 72 )
    {
      dword_618524 = 144;
      qword_618528 = 1LL;
    }
    else if ( v19 > 72 )
    {
      if ( v19 == 84 )
      {
        byte_618550 = 1;
      }
      else if ( v19 > 84 )
      {
        if ( v19 == 97 )
        {
          byte_618521 = 1;
        }
        else
        {
          if ( v19 != 99 )
            goto LABEL_58;
          byte_618551 = 1;
        }
      }
      else
      {
        if ( v19 != 80 )
          goto LABEL_58;
        byte_618530 = 1;
      }
    }
    else
    {
      if ( v19 == -130 )
        sub_403D13(0);
      if ( v19 <= -130 )
      {
        if ( v19 == -131 )
        {
          v3 = sub_406D96("Torbjorn Granlund", &unk_414BB6);
          sub_409604(
            (_DWORD)stdout,
            (unsigned int)"df",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_618478,
            v3,
            (unsigned int)"David MacKenzie",
            "Paul Eggert",
            0LL);
          exit(0);
        }
LABEL_58:
        sub_403D13(1);
      }
      if ( v19 == 66 )
      {
        v22 = sub_405C07(optarg, &dword_618524, &qword_618528);
        if ( v22 )
          sub_409C22(v22, (unsigned int)longind, (unsigned int)(char)v19, &longopts, optarg);
      }
      else
      {
        if ( v19 != 70 )
          goto LABEL_58;
LABEL_53:
        sub_403C91(optarg);
      }
    }
  }
}
