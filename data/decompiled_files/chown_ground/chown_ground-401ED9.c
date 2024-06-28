#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  const char *v3; // rax
  char *v4; // rax
  int v5; // eax
  char *v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  __int64 v9; // r12
  char *v10; // rbx
  int *v11; // rax
  const char *v12; // rax
  __int64 v13; // r12
  char *v14; // rbx
  int *v15; // rax
  int v16; // eax
  char v17; // [rsp+2Ah] [rbp-106h]
  __uid_t v18; // [rsp+2Ch] [rbp-104h] BYREF
  __gid_t v19; // [rsp+30h] [rbp-100h] BYREF
  int v20; // [rsp+34h] [rbp-FCh] BYREF
  int v21; // [rsp+38h] [rbp-F8h] BYREF
  int v22; // [rsp+3Ch] [rbp-F4h]
  int v23; // [rsp+40h] [rbp-F0h]
  int v24; // [rsp+44h] [rbp-ECh]
  char v25[8]; // [rsp+48h] [rbp-E8h] BYREF
  const char *v26; // [rsp+50h] [rbp-E0h]
  const char *v27; // [rsp+58h] [rbp-D8h]
  int v28; // [rsp+60h] [rbp-D0h] BYREF
  char v29; // [rsp+64h] [rbp-CCh]
  bool v31; // [rsp+70h] [rbp-C0h]
  char v32; // [rsp+71h] [rbp-BFh]
  __int64 v33; // [rsp+78h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+80h] [rbp-B0h] BYREF
  struct stat stat_buf; // [rsp+90h] [rbp-A0h] BYREF

  v17 = 0;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = 16;
  v23 = -1;
  sub_403A1C(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40B890(sub_4037F5);
  sub_4025CA(&v28);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = getopt_long(a1, a2, "HLPRcfhv", &longopts, 0LL);
        if ( v24 == -1 )
        {
          if ( v29 )
          {
            if ( v22 == 16 )
            {
              if ( v23 == 1 )
              {
                v4 = gettext("-R --dereference requires either -H or -L");
                error(1, 0, v4);
              }
              v23 = 0;
            }
          }
          else
          {
            v22 = 16;
          }
          v31 = v23 != 0;
          if ( filename )
            v5 = 1;
          else
            v5 = 2;
          if ( a1 - optind < v5 )
          {
            if ( a1 > optind )
            {
              v7 = sub_403B27(a2[a1 - 1]);
              v8 = gettext("missing operand after %s");
              error(0, 0, v8, v7);
            }
            else
            {
              v6 = gettext("missing operand");
              error(0, 0, v6);
            }
            sub_401D25(1);
          }
          if ( filename )
          {
            if ( (unsigned int)sub_40B8B0(filename, &stat_buf) )
            {
              v9 = sub_403B27(filename);
              v10 = gettext("failed to get attributes of %s");
              v11 = __errno_location();
              error(1, *v11, v10, v9);
            }
            v18 = stat_buf.st_uid;
            v19 = stat_buf.st_gid;
            v33 = sub_40268C(stat_buf.st_uid);
            v34 = sub_402624(stat_buf.st_gid);
          }
          else
          {
            v27 = (const char *)sub_405669(a2[optind], &v18, &v19, &v33, &v34);
            if ( v27 )
            {
              v12 = (const char *)sub_403B27(a2[optind]);
              error(1, 0, "%s: %s", v27, v12);
            }
            if ( !v33 && v34 )
              v33 = sub_401D17((__int64)locale);
            ++optind;
          }
          if ( v29 )
          {
            if ( v17 )
            {
              if ( !sub_409359(&unk_60F330) )
              {
                v13 = sub_403B27("/");
                v14 = gettext("failed to get attributes of %s");
                v15 = __errno_location();
                error(1, *v15, v14, v13);
              }
            }
          }
          v22 |= 0x400u;
          v16 = (unsigned __int8)sub_403672(8 * optind + (int)a2, v22, v18, v19, v20, v21, (__int64)&v28) == 0;
          exit(v16);
        }
        if ( v24 != 102 )
          break;
        v32 = 1;
      }
      if ( v24 <= 102 )
        break;
      if ( v24 == 129 )
      {
        v26 = (const char *)sub_405669(optarg, &v20, &v21, v25, &stat_buf);
        if ( v26 )
        {
          v3 = (const char *)sub_403B27(optarg);
          error(1, 0, "%s: %s", v26, v3);
        }
      }
      else if ( v24 > 129 )
      {
        if ( v24 == 131 )
        {
          v17 = 1;
        }
        else if ( v24 < 131 )
        {
          v17 = 0;
        }
        else
        {
          if ( v24 != 132 )
            goto LABEL_41;
          filename = (char *)optarg;
        }
      }
      else
      {
        switch ( v24 )
        {
          case 118:
            v28 = 0;
            break;
          case 128:
            v23 = 1;
            break;
          case 104:
            v23 = 0;
            break;
          default:
            goto LABEL_41;
        }
      }
    }
    if ( v24 == 76 )
    {
      v22 = 2;
    }
    else if ( v24 > 76 )
    {
      switch ( v24 )
      {
        case 'R':
          v29 = 1;
          break;
        case 'c':
          v28 = 1;
          break;
        case 'P':
          v22 = 16;
          break;
        default:
          goto LABEL_41;
      }
    }
    else
    {
      if ( v24 == -130 )
        sub_401D25(0);
      if ( v24 != 72 )
      {
        if ( v24 == -131 )
        {
          sub_405E59(
            (_DWORD)stdout,
            (unsigned int)"chown",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_60F260,
            (unsigned int)"David MacKenzie",
            (unsigned int)"Jim Meyering",
            0);
          exit(0);
        }
LABEL_41:
        sub_401D25(1);
      }
      v22 = 17;
    }
  }
}
