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
  __int64 v11; // rbx
  char *v12; // rax
  __int64 v13; // rbx
  char *v14; // rax
  char *v15; // rax
  int v16; // eax
  __int64 v17; // rax
  char v18; // [rsp+29h] [rbp-D7h]
  char v19; // [rsp+2Ah] [rbp-D6h]
  char v20; // [rsp+2Bh] [rbp-D5h]
  int v21; // [rsp+2Ch] [rbp-D4h]
  int i; // [rsp+30h] [rbp-D0h]
  int v23; // [rsp+34h] [rbp-CCh]
  char *v24; // [rsp+38h] [rbp-C8h]
  char *v25; // [rsp+40h] [rbp-C0h]
  const char *v26; // [rsp+48h] [rbp-B8h]
  char **v27; // [rsp+50h] [rbp-B0h]
  char *ptr; // [rsp+58h] [rbp-A8h]
  struct stat stat_buf; // [rsp+60h] [rbp-A0h] BYREF

  v19 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v20 = 0;
  sub_4055C0(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_408E20(sub_403485);
  v24 = getenv("SIMPLE_BACKUP_SUFFIX");
  byte_60C2E9 = 0;
  byte_60C2E8 = 0;
  byte_60C2E6 = 0;
  byte_60C2E7 = 0;
  byte_60C2E4 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v23 = getopt_long(a1, a2, "bdfinst:vFLPS:T", &longopts, 0LL);
        if ( v23 == -1 )
        {
          v21 = a1 - optind;
          v27 = &a2[optind];
          if ( a1 - optind <= 0 )
          {
            v9 = gettext("missing file operand");
            error(0, 0, v9);
            sub_40250B(1);
          }
          if ( v20 )
          {
            if ( v26 )
            {
              v10 = gettext("cannot combine --target-directory and --no-target-directory");
              error(1, 0, v10);
            }
            if ( v21 != 2 )
            {
              if ( v21 > 1 )
              {
                v11 = sub_4056CB(v27[2]);
                v12 = gettext("extra operand %s");
              }
              else
              {
                v11 = sub_4056CB(*v27);
                v12 = gettext("missing destination file operand after %s");
              }
              error(0, 0, v12, v11);
              sub_40250B(1);
            }
          }
          else if ( !v26 )
          {
            if ( v21 > 1 )
            {
              if ( sub_401A37(v27[v21 - 1]) )
              {
                v26 = v27[--v21];
              }
              else if ( v21 > 2 )
              {
                v13 = sub_4056CB(v27[v21 - 1]);
                v14 = gettext("target %s is not a directory");
                error(1, 0, v14, v13);
              }
            }
            else
            {
              v26 = ".";
            }
          }
          if ( v24 )
            src = (char *)sub_407B71(v24);
          if ( v19 )
          {
            v15 = gettext("backup type");
            v16 = sub_403420(v15, v25);
          }
          else
          {
            v16 = 0;
          }
          dword_60C2E0 = v16;
          if ( v26 )
          {
            if ( v21 > 1 )
            {
              if ( byte_60C2E7 )
              {
                if ( byte_60C2E4 != 1 && dword_60C2E0 != 3 )
                {
                  qword_60C2F0 = sub_40449B(61LL, 0LL, sub_405429, sub_40549F, sub_40558F);
                  if ( !qword_60C2F0 )
                    sub_407B9E();
                }
              }
            }
            v18 = 1;
            for ( i = 0; i < v21; ++i )
            {
              v17 = sub_40375A(v27[i]);
              ptr = (char *)sub_40396A(v26, v17, &stat_buf);
              sub_403811(stat_buf.st_dev);
              v18 = (unsigned __int8)(v18 & sub_401BF2(v27[i], ptr)) != 0;
              free(ptr);
            }
          }
          else
          {
            v18 = sub_401BF2(*v27, v27[1]);
          }
          exit(v18 == 0);
        }
        if ( v23 != 98 )
          break;
        v19 = 1;
        if ( optarg )
          v25 = optarg;
      }
      if ( v23 > 98 )
        break;
      if ( v23 == 76 )
      {
        byte_60C2E5 = 1;
      }
      else if ( v23 > 76 )
      {
        switch ( v23 )
        {
          case 'S':
            v19 = 1;
            v24 = optarg;
            break;
          case 'T':
            v20 = 1;
            break;
          case 'P':
            byte_60C2E5 = 0;
            break;
          default:
            goto LABEL_46;
        }
      }
      else
      {
        if ( v23 == -130 )
          sub_40250B(0);
        if ( v23 != 70 )
        {
          if ( v23 == -131 )
          {
            sub_4077B4(
              (_DWORD)stdout,
              (unsigned int)"ln",
              (unsigned int)"GNU coreutils",
              off_60C228[0],
              (unsigned int)"Mike Parker",
              (unsigned int)"David MacKenzie",
              0);
            exit(0);
          }
LABEL_46:
          sub_40250B(1);
        }
LABEL_27:
        byte_60C2E9 = 1;
      }
    }
    if ( v23 == 110 )
    {
      byte_60C220 = 0;
    }
    else if ( v23 > 110 )
    {
      switch ( v23 )
      {
        case 't':
          if ( v26 )
          {
            v3 = gettext("multiple target directories specified");
            error(1, 0, v3);
          }
          else
          {
            if ( (unsigned int)sub_408E40(optarg, &stat_buf) )
            {
              v4 = sub_4056CB(optarg);
              v5 = gettext("accessing %s");
              v6 = __errno_location();
              error(1, *v6, v5, v4);
            }
            if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
            {
              v7 = sub_4056CB(optarg);
              v8 = gettext("target %s is not a directory");
              error(1, 0, v8, v7);
            }
          }
          v26 = optarg;
          break;
        case 'v':
          byte_60C2E8 = 1;
          break;
        case 's':
          byte_60C2E4 = 1;
          break;
        default:
          goto LABEL_46;
      }
    }
    else
    {
      switch ( v23 )
      {
        case 'f':
          byte_60C2E7 = 1;
          byte_60C2E6 = 0;
          break;
        case 'i':
          byte_60C2E7 = 0;
          byte_60C2E6 = 1;
          break;
        case 'd':
          goto LABEL_27;
        default:
          goto LABEL_46;
      }
    }
  }
}
