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
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  __int64 v13; // rbx
  char *v14; // rax
  char *v15; // rax
  int v16; // eax
  __int64 v17; // r12
  char *v18; // rbx
  int *v19; // rax
  int v20; // eax
  char *v21; // rax
  __int64 v22; // rbx
  char *v23; // rax
  char *v24; // rax
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // rbx
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char v35; // al
  char v36; // [rsp+14h] [rbp-13Ch]
  char v37; // [rsp+15h] [rbp-13Bh]
  char v38; // [rsp+16h] [rbp-13Ah]
  char v39; // [rsp+17h] [rbp-139h]
  int status; // [rsp+18h] [rbp-138h]
  int statusa; // [rsp+18h] [rbp-138h]
  int v42; // [rsp+1Ch] [rbp-134h]
  int i; // [rsp+20h] [rbp-130h]
  int v44; // [rsp+24h] [rbp-12Ch]
  char *v45; // [rsp+28h] [rbp-128h]
  char *v46; // [rsp+30h] [rbp-120h]
  char *v47; // [rsp+38h] [rbp-118h]
  char *v48; // [rsp+40h] [rbp-110h]
  char *v49; // [rsp+48h] [rbp-108h]
  char **v50; // [rsp+50h] [rbp-100h]
  void *ptr; // [rsp+58h] [rbp-F8h]
  int v52[7]; // [rsp+60h] [rbp-F0h] BYREF
  char v53; // [rsp+7Eh] [rbp-D2h]
  char v54; // [rsp+82h] [rbp-CEh]
  char v55; // [rsp+8Bh] [rbp-C5h]
  struct stat stat_buf; // [rsp+B0h] [rbp-A0h] BYREF

  status = 0;
  v45 = 0LL;
  v36 = 0;
  v47 = 0LL;
  v37 = 0;
  v48 = 0LL;
  v38 = 0;
  v39 = 0;
  v49 = 0LL;
  dword_620480 = 0;
  sub_40E287(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_419BA0(sub_40AF70);
  sub_402C5E((__int64)v52);
  name = 0LL;
  qword_620498 = 0LL;
  byte_6204A5 = 0;
  byte_6204A6 = 0;
  umask(0);
  v46 = getenv("SIMPLE_BACKUP_SUFFIX");
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v44 = getopt_long(a1, a2, "bcCsDdg:m:o:pt:TvS:Z:", &longopts, 0LL);
        if ( v44 == -1 )
        {
          if ( byte_6204A6 && byte_6204A5 )
          {
            v11 = gettext("the strip option may not be used when installing a directory");
            error(1, 0, v11);
          }
          if ( byte_6204A6 && v48 )
          {
            v12 = gettext("target directory not allowed when installing a directory");
            error(1, 0, v12);
          }
          if ( v54 && v49 )
          {
            v13 = sub_40E392(v49);
            v14 = gettext("cannot force target context to %s and preserve it");
            error(1, 0, v14, v13);
          }
          if ( v46 )
            src = (char *)sub_412832(v46);
          if ( v36 )
          {
            v15 = gettext("backup type");
            v16 = sub_40AF0B(v15, v47);
          }
          else
          {
            v16 = 0;
          }
          v52[0] = v16;
          if ( v49 && (int)sub_4026F7(v49) < 0 )
          {
            v17 = sub_40E392(v49);
            v18 = gettext("failed to set default file creation context to %s");
            v19 = __errno_location();
            error(1, *v19, v18, v17);
          }
          v42 = a1 - optind;
          v50 = &a2[optind];
          v20 = byte_6204A6 != 1 && !v48;
          if ( v20 >= v42 )
          {
            if ( v42 > 0 )
            {
              v22 = sub_40E392(*v50);
              v23 = gettext("missing destination file operand after %s");
              error(0, 0, v23, v22);
            }
            else
            {
              v21 = gettext("missing file operand");
              error(0, 0, v21);
            }
            sub_403773(1);
          }
          if ( v38 )
          {
            if ( v48 )
            {
              v24 = gettext("cannot combine --target-directory (-t) and --no-target-directory (-T)");
              error(1, 0, v24);
            }
            if ( v42 > 2 )
            {
              v25 = sub_40E392(v50[2]);
              v26 = gettext("extra operand %s");
              error(0, 0, v26, v25);
              sub_403773(1);
            }
          }
          else if ( byte_6204A6 != 1 && !v48 )
          {
            if ( v42 > 1 && sub_402FE1(v50[v42 - 1]) )
            {
              v48 = v50[--v42];
            }
            else if ( v42 > 2 )
            {
              v27 = sub_40E392(v50[v42 - 1]);
              v28 = gettext("target %s is not a directory");
              error(1, 0, v28, v27);
            }
          }
          if ( v45 )
          {
            ptr = (void *)sub_40DD50(v45);
            if ( !ptr )
            {
              v29 = sub_40E392(v45);
              v30 = gettext("invalid mode %s");
              error(1, 0, v30, v29);
            }
            mode = sub_40E0EC(0LL, 0LL, 0LL, ptr, 0LL);
            dword_6203A8 = sub_40E0EC(0LL, 1LL, 0LL, ptr, &dword_6203AC);
            free(ptr);
          }
          if ( v39 && byte_6204A5 != 1 )
          {
            v31 = gettext("WARNING: ignoring --strip-program option as -s option was not specified");
            error(0, 0, v31);
          }
          if ( byte_6204A4 && v53 )
          {
            v32 = gettext("options --compare (-C) and --preserve-timestamps are mutually exclusive");
            error(0, 0, v32);
            sub_403773(1);
          }
          if ( byte_6204A4 && byte_6204A5 )
          {
            v33 = gettext("options --compare (-C) and --strip are mutually exclusive");
            error(0, 0, v33);
            sub_403773(1);
          }
          if ( byte_6204A4 && sub_402943(mode) )
          {
            v34 = gettext("the --compare (-C) option is ignored when you specify a mode with non-permission bits");
            error(0, 0, v34);
          }
          sub_4035DF();
          if ( byte_6204A6 )
          {
            statusa = sub_41054D((unsigned int)v42, v50, sub_403213, v52);
            exit(statusa);
          }
          sub_409E92();
          if ( v48 )
          {
            sub_4070B9(v52);
            for ( i = 0; i < v42; ++i )
            {
              if ( (unsigned __int8)sub_403BDC(v50[i], (__int64)v48, (__int64)v52) != 1 )
                status = 1;
            }
          }
          else
          {
            if ( v37 )
              v35 = !sub_403A70(*v50, v50[1], (__int64)v52);
            else
              v35 = sub_403924(*v50, v50[1], (__int64)v52) ^ 1;
            if ( v35 )
              exit(1);
          }
          exit(status);
        }
        if ( v44 != 100 )
          break;
        byte_6204A6 = 1;
      }
      if ( v44 <= 100 )
        break;
      if ( v44 == 115 )
      {
        byte_6204A5 = 1;
        signal(17, 0LL);
      }
      else if ( v44 > 115 )
      {
        if ( v44 == 118 )
        {
          v55 = 1;
        }
        else if ( v44 > 118 )
        {
          if ( v44 == 128 )
          {
            if ( dword_620480 )
            {
              v54 = 1;
              byte_6203A0 = 0;
            }
            else
            {
              v9 = gettext("WARNING: ignoring --preserve-context; this kernel is not SELinux-enabled");
              error(0, 0, v9);
            }
          }
          else
          {
            if ( v44 != 129 )
              goto LABEL_66;
            arg = (char *)sub_412832(optarg);
            v39 = 1;
          }
        }
        else
        {
          if ( v44 != 116 )
            goto LABEL_66;
          if ( v48 )
          {
            v3 = gettext("multiple target directories specified");
            error(1, 0, v3);
          }
          else
          {
            if ( (unsigned int)sub_419BC0(optarg, &stat_buf) )
            {
              v4 = sub_40E392(optarg);
              v5 = gettext("accessing %s");
              v6 = __errno_location();
              error(1, *v6, v5, v4);
            }
            if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
            {
              v7 = sub_40E392(optarg);
              v8 = gettext("target %s is not a directory");
              error(1, 0, v8, v7);
            }
          }
          v48 = optarg;
        }
      }
      else if ( v44 == 109 )
      {
        v45 = optarg;
      }
      else if ( v44 > 109 )
      {
        if ( v44 == 111 )
        {
          name = optarg;
        }
        else
        {
          if ( v44 != 112 )
            goto LABEL_66;
          v53 = 1;
        }
      }
      else
      {
        if ( v44 != 103 )
          goto LABEL_66;
        qword_620498 = optarg;
      }
    }
    if ( v44 == 83 )
    {
      v36 = 1;
      v46 = optarg;
    }
    else if ( v44 > 83 )
    {
      if ( v44 == 90 )
      {
        if ( dword_620480 )
        {
          v49 = optarg;
          byte_6203A0 = 0;
        }
        else
        {
          v10 = gettext("WARNING: ignoring --context (-Z); this kernel is not SELinux-enabled");
          error(0, 0, v10);
        }
      }
      else if ( v44 > 90 )
      {
        if ( v44 == 98 )
        {
          v36 = 1;
          if ( optarg )
            v47 = optarg;
        }
        else if ( v44 != 99 )
        {
          goto LABEL_66;
        }
      }
      else
      {
        if ( v44 != 84 )
          goto LABEL_66;
        v38 = 1;
      }
    }
    else
    {
      if ( v44 == -130 )
        sub_403773(0);
      if ( v44 <= -130 )
      {
        if ( v44 == -131 )
        {
          sub_412434(
            (_DWORD)stdout,
            (unsigned int)"install",
            (unsigned int)"GNU coreutils",
            off_6203D0[0],
            (unsigned int)"David MacKenzie",
            0,
            (char)a2);
          exit(0);
        }
LABEL_66:
        sub_403773(1);
      }
      if ( v44 == 67 )
      {
        byte_6204A4 = 1;
      }
      else
      {
        if ( v44 != 68 )
          goto LABEL_66;
        v37 = 1;
      }
    }
  }
}
