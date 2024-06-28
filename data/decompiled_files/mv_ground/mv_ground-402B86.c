#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  char *v12; // rax
  __int64 v13; // rbx
  char *v14; // rax
  __int64 v15; // rbx
  char *v16; // rax
  char *v17; // rax
  char *v18; // rax
  int v19; // eax
  char v20; // [rsp+21h] [rbp-11Fh]
  char v21; // [rsp+22h] [rbp-11Eh]
  char v22; // [rsp+23h] [rbp-11Dh]
  int v23; // [rsp+24h] [rbp-11Ch]
  int i; // [rsp+28h] [rbp-118h]
  int v25; // [rsp+2Ch] [rbp-114h]
  char *v26; // [rsp+30h] [rbp-110h]
  char *v27; // [rsp+38h] [rbp-108h]
  char *v28; // [rsp+40h] [rbp-100h]
  __int64 *v29; // [rsp+48h] [rbp-F8h]
  int v30; // [rsp+50h] [rbp-F0h] BYREF
  int v31; // [rsp+58h] [rbp-E8h]
  char v32; // [rsp+7Ah] [rbp-C6h]
  char v33; // [rsp+7Bh] [rbp-C5h]
  struct stat stat_buf; // [rsp+A0h] [rbp-A0h] BYREF

  v21 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v22 = 0;
  sub_40D16D(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_415400(sub_40A9A6);
  sub_40263B((__int64)&v30);
  sub_402587();
  v26 = getenv("SIMPLE_BACKUP_SUFFIX");
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v25 = getopt_long(a1, a2, "bfint:uvS:T", &longopts, 0LL);
        if ( v25 == -1 )
        {
          v23 = a1 - optind;
          v29 = (__int64 *)&a2[optind];
          if ( (v28 == 0LL) >= a1 - optind )
          {
            if ( v23 > 0 )
            {
              v10 = sub_40D278(*v29);
              v11 = gettext("missing destination file operand after %s");
              error(0, 0, v11, v10);
            }
            else
            {
              v9 = gettext("missing file operand");
              error(0, 0, v9);
            }
            sub_4029FD(1);
          }
          if ( v22 )
          {
            if ( v28 )
            {
              v12 = gettext("cannot combine --target-directory (-t) and --no-target-directory (-T)");
              error(1, 0, v12);
            }
            if ( v23 > 2 )
            {
              v13 = sub_40D278(v29[2]);
              v14 = gettext("extra operand %s");
              error(0, 0, v14, v13);
              sub_4029FD(1);
            }
          }
          else if ( !v28 )
          {
            if ( v23 <= 1 )
              __assert_fail("2 <= n_files", "../../src/src/mv.c", 0x1C6u, "main");
            if ( sub_402779((char *)v29[v23 - 1]) )
            {
              v28 = (char *)v29[--v23];
            }
            else if ( v23 > 2 )
            {
              v15 = sub_40D278(v29[v23 - 1]);
              v16 = gettext("target %s is not a directory");
              error(1, 0, v16, v15);
            }
          }
          if ( v21 && v31 == 2 )
          {
            v17 = gettext("options --backup and --no-clobber are mutually exclusive");
            error(0, 0, v17);
            sub_4029FD(1);
          }
          if ( v26 )
            src = (char *)sub_411040(v26);
          if ( v21 )
          {
            v18 = gettext("backup type");
            v19 = sub_40A941(v18, v27);
          }
          else
          {
            v19 = 0;
          }
          v30 = v19;
          sub_4098C8();
          if ( v28 )
          {
            if ( v23 > 1 )
              sub_406AEF(&v30);
            v20 = 1;
            for ( i = 0; i < v23; ++i )
              v20 = (unsigned __int8)(v20 & sub_402947(v29[i], (__int64)v28, 1, (__int64)&v30)) != 0;
          }
          else
          {
            v20 = sub_402947(*v29, v29[1], 0, (__int64)&v30);
          }
          exit(v20 == 0);
        }
        if ( v25 != 102 )
          break;
        v31 = 1;
      }
      if ( v25 <= 102 )
        break;
      if ( v25 == 116 )
      {
        if ( v28 )
        {
          v3 = gettext("multiple target directories specified");
          error(1, 0, v3);
        }
        else
        {
          if ( (unsigned int)sub_415420(optarg, &stat_buf) )
          {
            v4 = sub_40D278(optarg);
            v5 = gettext("accessing %s");
            v6 = __errno_location();
            error(1, *v6, v5, v4);
          }
          if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
          {
            v7 = sub_40D278(optarg);
            v8 = gettext("target %s is not a directory");
            error(1, 0, v8, v7);
          }
        }
        v28 = optarg;
      }
      else if ( v25 > 116 )
      {
        if ( v25 == 118 )
        {
          v33 = 1;
        }
        else if ( v25 < 118 )
        {
          v32 = 1;
        }
        else
        {
          if ( v25 != 128 )
            goto LABEL_41;
          byte_61B400 = 1;
        }
      }
      else if ( v25 == 105 )
      {
        v31 = 3;
      }
      else
      {
        if ( v25 != 110 )
          goto LABEL_41;
        v31 = 2;
      }
    }
    if ( v25 == 83 )
    {
      v21 = 1;
      v26 = optarg;
    }
    else
    {
      if ( v25 <= 83 )
      {
        if ( v25 == -131 )
        {
          sub_410C42(
            (_DWORD)stdout,
            (unsigned int)"mv",
            (unsigned int)"GNU coreutils",
            off_61B350[0],
            (unsigned int)"Mike Parker",
            (unsigned int)"David MacKenzie",
            "Jim Meyering",
            0LL);
          exit(0);
        }
        if ( v25 == -130 )
          sub_4029FD(0);
LABEL_41:
        sub_4029FD(1);
      }
      if ( v25 == 84 )
      {
        v22 = 1;
      }
      else
      {
        if ( v25 != 98 )
          goto LABEL_41;
        v21 = 1;
        if ( optarg )
          v27 = optarg;
      }
    }
  }
}
