#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  int v9; // eax
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax
  unsigned int v14; // eax
  char *v15; // rax
  char *v16; // rax
  char v17; // [rsp+20h] [rbp-110h]
  char v18; // [rsp+21h] [rbp-10Fh]
  char v19; // [rsp+22h] [rbp-10Eh]
  bool v20; // [rsp+23h] [rbp-10Dh]
  int v21; // [rsp+24h] [rbp-10Ch]
  char *v22; // [rsp+28h] [rbp-108h]
  char *v23; // [rsp+30h] [rbp-100h]
  char *v24; // [rsp+38h] [rbp-F8h]
  unsigned int v25; // [rsp+40h] [rbp-F0h] BYREF
  int v26; // [rsp+44h] [rbp-ECh]
  int v27; // [rsp+48h] [rbp-E8h]
  int v28; // [rsp+4Ch] [rbp-E4h]
  char v29; // [rsp+54h] [rbp-DCh]
  char v30; // [rsp+55h] [rbp-DBh]
  char v31; // [rsp+56h] [rbp-DAh]
  char v32; // [rsp+57h] [rbp-D9h]
  char v33; // [rsp+5Bh] [rbp-D5h]
  char v34; // [rsp+5Ch] [rbp-D4h]
  char v35; // [rsp+5Dh] [rbp-D3h]
  char v36; // [rsp+5Eh] [rbp-D2h]
  char v37; // [rsp+5Fh] [rbp-D1h]
  char v38; // [rsp+60h] [rbp-D0h]
  char v39; // [rsp+61h] [rbp-CFh]
  char v40; // [rsp+62h] [rbp-CEh]
  char v41; // [rsp+64h] [rbp-CCh]
  char v42; // [rsp+65h] [rbp-CBh]
  char v43; // [rsp+66h] [rbp-CAh]
  char v44; // [rsp+67h] [rbp-C9h]
  char v45; // [rsp+69h] [rbp-C7h]
  char v46; // [rsp+6Ah] [rbp-C6h]
  char v47; // [rsp+6Bh] [rbp-C5h]
  int v48; // [rsp+70h] [rbp-C0h]
  struct stat stat_buf; // [rsp+90h] [rbp-A0h] BYREF

  v17 = 0;
  v23 = 0LL;
  v18 = 0;
  v24 = 0LL;
  v19 = 0;
  sub_40D935(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_4160E0(sub_40B281);
  byte_61D440 = 0;
  sub_403C46((__int64)&v25);
  v22 = getenv("SIMPLE_BACKUP_SUFFIX");
  while ( 1 )
  {
    while ( 1 )
    {
      v21 = getopt_long(a1, a2, "abdfHilLnprst:uvxPRS:T", &longopts, 0LL);
      if ( v21 == -1 )
      {
        if ( v32 && v45 )
        {
          v10 = gettext("cannot make both hard and symbolic links");
          error(0, 0, v10);
          sub_402713(1);
        }
        if ( v17 && v27 == 2 )
        {
          v11 = gettext("options --backup and --no-clobber are mutually exclusive");
          error(0, 0, v11);
          sub_402713(1);
        }
        if ( v48 == 2 && v28 != 2 )
        {
          v12 = gettext("--reflink can be used only with --sparse=auto");
          error(0, 0, v12);
          sub_402713(1);
        }
        if ( v22 )
          src = (char *)sub_41281A(v22);
        if ( v17 )
        {
          v13 = gettext("backup type");
          v14 = sub_40B21C(v13, v23);
        }
        else
        {
          v14 = 0;
        }
        v25 = v14;
        if ( v26 == 1 )
        {
          if ( v44 )
            v26 = 2;
          else
            v26 = 4;
        }
        if ( v44 )
          v29 = v18;
        if ( v31 && (v32 || v45) )
          v30 = 1;
        if ( v40 && byte_61D440 != 1 )
        {
          v15 = gettext("cannot preserve security context without an SELinux-enabled kernel");
          error(1, 0, v15);
        }
        if ( v42 )
        {
          v16 = gettext("cannot preserve extended attributes, cp is built without xattr support");
          error(1, 0, v16);
        }
        sub_409D97();
        v20 = sub_403419(a1 - optind, &a2[optind], (__int64)v24, v19, &v25);
        sub_409DD4();
        exit(!v20);
      }
      if ( v21 != 112 )
        break;
LABEL_69:
      v34 = 1;
      v35 = 1;
      v36 = 1;
      v39 = 1;
    }
    if ( v21 > 112 )
    {
      if ( v21 == 129 )
      {
        v18 = 1;
      }
      else if ( v21 > 129 )
      {
        if ( v21 == 133 )
        {
          if ( optarg )
            v48 = dword_416348[sub_40AB4A("--reflink", optarg, off_416330, dword_416348, 4LL, off_61D398)];
          else
            v48 = 2;
        }
        else if ( v21 > 133 )
        {
          if ( v21 == 135 )
          {
            byte_61D442 = 1;
          }
          else if ( v21 < 135 )
          {
            v28 = dword_416320[sub_40AB4A("--sparse", optarg, off_416300, dword_416320, 4LL, off_61D398)];
          }
          else
          {
            if ( v21 != 136 )
              goto LABEL_89;
            v30 = 1;
          }
        }
        else if ( v21 == 131 )
        {
          byte_61D441 = 1;
        }
        else if ( v21 > 131 )
        {
          if ( !optarg )
            goto LABEL_69;
          sub_403D7E((__int64)optarg, &v25, 1);
          v39 = 1;
        }
        else
        {
          sub_403D7E((__int64)optarg, &v25, 0);
        }
      }
      else if ( v21 == 117 )
      {
        v46 = 1;
      }
      else if ( v21 > 117 )
      {
        switch ( v21 )
        {
          case 120:
            v33 = 1;
            break;
          case 128:
            v38 = 0;
            break;
          case 118:
            v47 = 1;
            break;
          default:
            goto LABEL_89;
        }
      }
      else if ( v21 == 115 )
      {
        v45 = 1;
      }
      else if ( v21 > 115 )
      {
        if ( v24 )
        {
          v3 = gettext("multiple target directories specified");
          error(1, 0, v3);
        }
        else
        {
          if ( (unsigned int)sub_416100(optarg, &stat_buf) )
          {
            v4 = sub_40E491(optarg);
            v5 = gettext("accessing %s");
            v6 = __errno_location();
            error(1, *v6, v5, v4);
          }
          if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
          {
            v7 = sub_40E491(optarg);
            v8 = gettext("target %s is not a directory");
            error(1, 0, v8, v7);
          }
        }
        v24 = optarg;
      }
      else
      {
        if ( v21 != 114 )
          goto LABEL_89;
LABEL_71:
        v44 = 1;
      }
    }
    else if ( v21 == 84 )
    {
      v19 = 1;
    }
    else if ( v21 > 84 )
    {
      if ( v21 == 102 )
      {
        v31 = 1;
      }
      else if ( v21 > 102 )
      {
        switch ( v21 )
        {
          case 'l':
            v32 = 1;
            break;
          case 'n':
            v27 = 2;
            break;
          case 'i':
            v27 = 3;
            break;
          default:
            goto LABEL_89;
        }
      }
      else
      {
        switch ( v21 )
        {
          case 'b':
            v17 = 1;
            if ( optarg )
              v23 = optarg;
            break;
          case 'd':
            v37 = 1;
            v26 = 2;
            break;
          case 'a':
            v26 = 2;
            v37 = 1;
            v34 = 1;
            v35 = 1;
            v36 = 1;
            v39 = 1;
            if ( byte_61D440 )
              v40 = 1;
            v41 = 1;
            v43 = 1;
            v44 = 1;
            break;
          default:
            goto LABEL_89;
        }
      }
    }
    else if ( v21 == 76 )
    {
      v26 = 4;
    }
    else if ( v21 > 76 )
    {
      if ( v21 == 82 )
        goto LABEL_71;
      if ( v21 > 82 )
      {
        v17 = 1;
        v22 = optarg;
      }
      else
      {
        if ( v21 != 80 )
          goto LABEL_89;
        v26 = 2;
      }
    }
    else
    {
      if ( v21 == -130 )
        sub_402713(0);
      if ( v21 != 72 )
      {
        if ( v21 == -131 )
        {
          v9 = sub_40E1A1("Torbjorn Granlund", &unk_417C0E);
          sub_41241C(
            (_DWORD)stdout,
            (unsigned int)"cp",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_61D390,
            v9,
            (unsigned int)"David MacKenzie",
            "Jim Meyering",
            0LL);
          exit(0);
        }
LABEL_89:
        sub_402713(1);
      }
      v26 = 3;
    }
  }
}
