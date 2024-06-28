#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  int v4; // eax
  char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  __int64 v8; // r12
  char *v9; // rbx
  int *v10; // rax
  int v11; // eax
  char *v12; // rax
  __int64 v13; // r12
  char *v14; // rbx
  int *v15; // rax
  int v16; // eax
  char v17; // [rsp+26h] [rbp-EAh]
  int v18; // [rsp+28h] [rbp-E8h]
  int v19; // [rsp+2Ch] [rbp-E4h]
  int v20; // [rsp+30h] [rbp-E0h]
  int v21; // [rsp+34h] [rbp-DCh]
  char *v22; // [rsp+38h] [rbp-D8h]
  int v23; // [rsp+40h] [rbp-D0h] BYREF
  char v24; // [rsp+44h] [rbp-CCh]
  bool v26; // [rsp+50h] [rbp-C0h]
  char v27; // [rsp+51h] [rbp-BFh]
  char *v28; // [rsp+60h] [rbp-B0h]
  struct stat stat_buf; // [rsp+70h] [rbp-A0h] BYREF

  v17 = 0;
  v19 = 16;
  v20 = -1;
  sub_4038A4(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40B2B0(sub_40367D);
  sub_402452(&v23);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = getopt_long(a1, a2, "HLPRcfhv", &longopts, 0LL);
        if ( v21 == -1 )
        {
          if ( v24 )
          {
            if ( v19 == 16 )
            {
              if ( v20 == 1 )
              {
                v3 = gettext("-R --dereference requires either -H or -L");
                error(1, 0, v3);
              }
              v20 = 0;
            }
          }
          else
          {
            v19 = 16;
          }
          v26 = v20 != 0;
          if ( filename )
            v4 = 1;
          else
            v4 = 2;
          if ( a1 - optind < v4 )
          {
            if ( a1 > optind )
            {
              v6 = sub_4039AF(a2[a1 - 1]);
              v7 = gettext("missing operand after %s");
              error(0, 0, v7, v6);
            }
            else
            {
              v5 = gettext("missing operand");
              error(0, 0, v5);
            }
            sub_401D4B(1);
          }
          if ( filename )
          {
            if ( (unsigned int)sub_40B2D0(filename, &stat_buf) )
            {
              v8 = sub_4039AF(filename);
              v9 = gettext("failed to get attributes of %s");
              v10 = __errno_location();
              error(1, *v10, v9, v8);
            }
            v18 = stat_buf.st_gid;
            v28 = (char *)sub_4024AC(stat_buf.st_gid);
          }
          else
          {
            v11 = optind++;
            v22 = a2[v11];
            if ( *v22 )
              v12 = a2[v11];
            else
              v12 = 0LL;
            v28 = v12;
            v18 = sub_401C87(v22);
          }
          if ( v24 )
          {
            if ( v17 )
            {
              if ( !sub_408D79(&unk_60F310) )
              {
                v13 = sub_4039AF("/");
                v14 = gettext("failed to get attributes of %s");
                v15 = __errno_location();
                error(1, *v15, v14, v13);
              }
            }
          }
          v16 = (unsigned __int8)sub_4034FA(8 * optind + (int)a2, v19 | 0x400u, -1, v18, -1, -1, (__int64)&v23) == 0;
          exit(v16);
        }
        if ( v21 != 99 )
          break;
        v23 = 1;
      }
      if ( v21 <= 99 )
        break;
      if ( v21 == 128 )
      {
        v20 = 1;
      }
      else if ( v21 > 128 )
      {
        if ( v21 == 130 )
        {
          v17 = 1;
        }
        else if ( v21 < 130 )
        {
          v17 = 0;
        }
        else
        {
          if ( v21 != 131 )
            goto LABEL_37;
          filename = (char *)optarg;
        }
      }
      else
      {
        switch ( v21 )
        {
          case 'h':
            v20 = 0;
            break;
          case 'v':
            v23 = 0;
            break;
          case 'f':
            v27 = 1;
            break;
          default:
            goto LABEL_37;
        }
      }
    }
    if ( v21 == 72 )
    {
      v19 = 17;
    }
    else
    {
      if ( v21 <= 72 )
      {
        if ( v21 == -131 )
        {
          sub_405879(
            (_DWORD)stdout,
            (unsigned int)"chgrp",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_60F250,
            (unsigned int)"David MacKenzie",
            (unsigned int)"Jim Meyering",
            0);
          exit(0);
        }
        if ( v21 == -130 )
          sub_401D4B(0);
LABEL_37:
        sub_401D4B(1);
      }
      switch ( v21 )
      {
        case 'P':
          v19 = 16;
          break;
        case 'R':
          v24 = 1;
          break;
        case 'L':
          v19 = 2;
          break;
        default:
          goto LABEL_37;
      }
    }
  }
}
