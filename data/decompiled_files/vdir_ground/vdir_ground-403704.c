#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403704(int a1, char *const *a2)
{
  __int64 v2; // rbx
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  int v8; // eax
  __int64 v9; // rbx
  char *v10; // rax
  __int64 v11; // rbx
  char *v12; // rax
  bool v13; // al
  __int64 v14; // rax
  const char *v15; // rax
  unsigned __int64 v16; // rax
  __int64 v18; // rbx
  char *v19; // rax
  char *v20; // rax
  int v21; // eax
  char *v22; // rax
  char *v23; // rax
  char v24; // [rsp+27h] [rbp-89h]
  int longind; // [rsp+28h] [rbp-88h] BYREF
  int v26; // [rsp+2Ch] [rbp-84h]
  int j; // [rsp+30h] [rbp-80h]
  int v28; // [rsp+34h] [rbp-7Ch]
  int v29; // [rsp+38h] [rbp-78h]
  unsigned int v30; // [rsp+3Ch] [rbp-74h]
  __int64 v31[2]; // [rsp+40h] [rbp-70h] BYREF
  char *v32; // [rsp+50h] [rbp-60h]
  _BYTE *i; // [rsp+58h] [rbp-58h]
  char *s1; // [rsp+60h] [rbp-50h]
  char *v35; // [rsp+68h] [rbp-48h]
  char *v36; // [rsp+70h] [rbp-40h]
  char *v37; // [rsp+78h] [rbp-38h]
  char *v38; // [rsp+80h] [rbp-30h]
  char *v39; // [rsp+88h] [rbp-28h]
  char *s; // [rsp+90h] [rbp-20h]
  _QWORD *v41; // [rsp+98h] [rbp-18h]

  v32 = 0LL;
  v24 = 0;
  byte_61D6F8 = 0;
  switch ( dword_61D568 )
  {
    case 2:
      dword_61D69C = 2;
      sub_40FE2C(0LL, 5LL);
      break;
    case 3:
      dword_61D69C = 0;
      sub_40FE2C(0LL, 5LL);
      break;
    case 1:
      if ( isatty(1) )
      {
        dword_61D69C = 2;
        byte_61D6F8 = 1;
      }
      else
      {
        dword_61D69C = 1;
        byte_61D6F8 = 0;
      }
      break;
    default:
      abort();
  }
  dword_61D6A0 = 0;
  dword_61D6A4 = 0;
  byte_61D6A8 = 0;
  byte_61D6AA = 0;
  byte_61D6AB = 0;
  dword_61D6BC = 0;
  byte_61D6D9 = 0;
  dword_61D6DC = 1;
  byte_61D6E0 = 0;
  byte_61D6E1 = 0;
  dword_61D6E4 = 0;
  qword_61D6E8 = 0LL;
  qword_61D6F0 = 0LL;
  byte_61D670 = 0;
  v36 = getenv("QUOTING_STYLE");
  if ( v36 )
  {
    v28 = sub_40B252(v36, off_419180, dword_4191E0, 4LL);
    if ( v28 < 0 )
    {
      v2 = sub_4111EB(v36);
      v3 = gettext("ignoring invalid value of environment variable QUOTING_STYLE: %s");
      error(0, 0, v3, v2);
    }
    else
    {
      sub_40FE2C(0LL, (unsigned int)dword_4191E0[v28]);
    }
  }
  v37 = getenv("LS_BLOCK_SIZE");
  sub_40E98E(v37, &dword_61D6AC, &qword_61D6B0);
  if ( v37 || getenv("BLOCK_SIZE") )
    qword_61D388 = qword_61D6B0;
  qword_61D720 = 80LL;
  v38 = getenv("COLUMNS");
  if ( v38 && *v38 )
  {
    if ( (unsigned int)sub_414BE0(v38, 0LL, 0LL, v31, 0LL) || !v31[0] )
    {
      v4 = sub_4111EB(v38);
      v5 = gettext("ignoring invalid width in environment variable COLUMNS: %s");
      error(0, 0, v5, v4);
    }
    else
    {
      qword_61D720 = v31[0];
    }
  }
  if ( ioctl(1, 0x5413uLL, v31) != -1 && WORD1(v31[0]) )
    qword_61D720 = WORD1(v31[0]);
  v39 = getenv("TABSIZE");
  qword_61D710 = 8LL;
  if ( v39 )
  {
    if ( (unsigned int)sub_414BE0(v39, 0LL, 0LL, v31, 0LL) )
    {
      v6 = sub_4111EB(v39);
      v7 = gettext("ignoring invalid tab size in environment variable TABSIZE: %s");
      error(0, 0, v7, v6);
    }
    else
    {
      qword_61D710 = v31[0];
    }
  }
  while ( 1 )
  {
    longind = -1;
    v29 = getopt_long(a1, a2, "abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1", &longopts, &longind);
    if ( v29 == -1 )
      break;
    if ( v29 == 107 )
    {
      dword_61D6AC = 0;
      qword_61D6B0 = 1024LL;
      qword_61D388 = 1024LL;
    }
    else if ( v29 > 107 )
    {
      if ( v29 == 129 )
      {
        v30 = sub_40E98E(optarg, &dword_61D6AC, &qword_61D6B0);
        if ( v30 )
          sub_415126(v30, (unsigned int)longind, 0LL, &longopts, optarg);
        qword_61D388 = qword_61D6B0;
      }
      else if ( v29 > 129 )
      {
        if ( v29 == 136 )
        {
          v41 = (_QWORD *)sub_414989(16LL);
          *v41 = optarg;
          v41[1] = qword_61D6F0;
          qword_61D6F0 = (__int64)v41;
        }
        else if ( v29 > 136 )
        {
          if ( v29 == 140 )
          {
            dword_61D6AC = 144;
            qword_61D6B0 = 1LL;
            qword_61D388 = 1LL;
          }
          else if ( v29 > 140 )
          {
            if ( v29 == 142 )
            {
              dword_61D6A0 = dword_416930[sub_40B53C("--time", optarg, off_416900, dword_416930, 4LL, off_61D578)];
            }
            else if ( v29 < 142 )
            {
              dword_61D6A4 = dword_4168B0[sub_40B53C("--sort", optarg, off_416880, dword_4168B0, 4LL, off_61D578)];
              v24 = 1;
            }
            else
            {
              if ( v29 != 143 )
                goto LABEL_197;
              v32 = (char *)optarg;
            }
          }
          else if ( v29 == 138 )
          {
            v14 = sub_40B53C("--quoting-style", optarg, off_419180, dword_4191E0, 4LL, off_61D578);
            sub_40FE2C(0LL, (unsigned int)dword_4191E0[v14]);
          }
          else if ( v29 > 138 )
          {
            byte_61D6F8 = 0;
          }
          else
          {
            dword_61D6BC = dword_415F30[sub_40B53C(
                                          "--indicator-style",
                                          optarg,
                                          off_415F00,
                                          dword_415F30,
                                          4LL,
                                          off_61D578)];
          }
        }
        else if ( v29 == 132 )
        {
          dword_61D6BC = 2;
        }
        else if ( v29 > 132 )
        {
          if ( v29 == 134 )
          {
            dword_61D69C = 0;
            v32 = (char *)sub_4027A7((__int64)"full-iso");
          }
          else if ( v29 > 134 )
          {
            byte_61D6E2 = 1;
          }
          else
          {
            dword_61D69C = dword_416840[sub_40B53C("--format", optarg, off_416800, dword_416840, 4LL, off_61D578)];
          }
        }
        else if ( v29 == 130 )
        {
          if ( optarg )
            v26 = dword_4169E0[sub_40B53C("--color", optarg, off_416980, dword_4169E0, 4LL, off_61D578)];
          else
            v26 = 1;
          v13 = v26 == 1 || v26 == 2 && isatty(1);
          byte_61D6C0 = v13;
          if ( v13 )
            qword_61D710 = 0LL;
        }
        else
        {
          dword_61D6DC = 4;
        }
      }
      else if ( v29 == 114 )
      {
        byte_61D6A8 = 1;
      }
      else if ( v29 > 114 )
      {
        if ( v29 == 118 )
        {
          dword_61D6A4 = 3;
          v24 = 1;
        }
        else if ( v29 > 118 )
        {
          if ( v29 == 120 )
          {
            dword_61D69C = 3;
          }
          else if ( v29 < 120 )
          {
            if ( (unsigned int)sub_414BE0(optarg, 0LL, 0LL, v31, 0LL) || !v31[0] )
            {
              v9 = sub_4111EB(optarg);
              v10 = gettext("invalid line width: %s");
              error(2, 0, v10, v9);
            }
            qword_61D720 = v31[0];
          }
          else
          {
            if ( v29 != 128 )
              goto LABEL_197;
            byte_61D6A9 = 1;
          }
        }
        else if ( v29 == 116 )
        {
          dword_61D6A4 = 4;
          v24 = 1;
        }
        else if ( v29 > 116 )
        {
          dword_61D6A0 = 2;
        }
        else
        {
          byte_61D6AB = 1;
        }
      }
      else if ( v29 == 110 )
      {
        byte_61D6AA = 1;
        dword_61D69C = 0;
      }
      else if ( v29 > 110 )
      {
        if ( v29 == 112 )
        {
          dword_61D6BC = 1;
        }
        else if ( v29 > 112 )
        {
          byte_61D6F8 = 1;
        }
        else
        {
          dword_61D69C = 0;
          byte_61D383 = 0;
        }
      }
      else if ( v29 == 108 )
      {
        dword_61D69C = 0;
      }
      else
      {
        dword_61D69C = 4;
      }
    }
    else if ( v29 == 81 )
    {
      sub_40FE2C(0LL, 3LL);
    }
    else if ( v29 > 81 )
    {
      if ( v29 == 97 )
      {
        dword_61D6E4 = 2;
      }
      else if ( v29 > 97 )
      {
        if ( v29 == 102 )
        {
          dword_61D6E4 = 2;
          dword_61D6A4 = -1;
          v24 = 1;
          if ( !dword_61D69C )
          {
            if ( isatty(1) )
              v8 = 2;
            else
              v8 = 1;
            dword_61D69C = v8;
          }
          byte_61D6AB = 0;
          byte_61D6C0 = 0;
        }
        else if ( v29 > 102 )
        {
          if ( v29 == 104 )
          {
            dword_61D6AC = 176;
            qword_61D6B0 = 1LL;
            qword_61D388 = 1LL;
          }
          else if ( v29 < 104 )
          {
            dword_61D69C = 0;
            byte_61D382 = 0;
          }
          else
          {
            if ( v29 != 105 )
              goto LABEL_197;
            byte_61D6D9 = 1;
          }
        }
        else if ( v29 == 99 )
        {
          dword_61D6A0 = 1;
        }
        else if ( v29 < 99 )
        {
          sub_40FE2C(0LL, 5LL);
        }
        else
        {
          if ( v29 != 100 )
            goto LABEL_197;
          byte_61D6E1 = 1;
        }
      }
      else if ( v29 == 84 )
      {
        if ( (unsigned int)sub_414BE0(optarg, 0LL, 0LL, v31, 0LL) )
        {
          v11 = sub_4111EB(optarg);
          v12 = gettext("invalid tab size: %s");
          error(2, 0, v12, v11);
        }
        qword_61D710 = v31[0];
      }
      else if ( v29 > 84 )
      {
        switch ( v29 )
        {
          case 'X':
            dword_61D6A4 = 1;
            v24 = 1;
            break;
          case 'Z':
            byte_61D670 = 1;
            break;
          case 'U':
            dword_61D6A4 = -1;
            v24 = 1;
            break;
          default:
            goto LABEL_197;
        }
      }
      else if ( v29 == 82 )
      {
        byte_61D6E0 = 1;
      }
      else
      {
        dword_61D6A4 = 2;
        v24 = 1;
      }
    }
    else if ( v29 == 68 )
    {
      byte_61D6B8 = 1;
    }
    else if ( v29 > 68 )
    {
      if ( v29 == 72 )
      {
        dword_61D6DC = 3;
      }
      else if ( v29 > 72 )
      {
        switch ( v29 )
        {
          case 'L':
            dword_61D6DC = 5;
            break;
          case 'N':
            sub_40FE2C(0LL, 0LL);
            break;
          case 'I':
            sub_40598B(optarg);
            break;
          default:
            goto LABEL_197;
        }
      }
      else if ( v29 == 70 )
      {
        dword_61D6BC = 3;
      }
      else
      {
        if ( v29 != 71 )
          goto LABEL_197;
        byte_61D383 = 0;
      }
    }
    else if ( v29 == 49 )
    {
      if ( dword_61D69C )
        dword_61D69C = 1;
    }
    else
    {
      if ( v29 <= 49 )
      {
        if ( v29 == -131 )
        {
          if ( dword_61D568 == 1 )
          {
            v15 = "ls";
          }
          else if ( dword_61D568 == 2 )
          {
            v15 = "dir";
          }
          else
          {
            v15 = "vdir";
          }
          sub_414721(
            (_DWORD)stdout,
            (_DWORD)v15,
            (unsigned int)"GNU coreutils",
            (_DWORD)off_61D570,
            (unsigned int)"Richard M. Stallman",
            (unsigned int)"David MacKenzie",
            0);
          exit(0);
        }
        if ( v29 == -130 )
          sub_40ADC6(0LL);
LABEL_197:
        sub_40ADC6(2LL);
      }
      if ( v29 == 66 )
      {
        sub_40598B("*~");
        sub_40598B(".*~");
      }
      else if ( v29 > 66 )
      {
        dword_61D69C = 2;
      }
      else
      {
        if ( v29 != 65 )
          goto LABEL_197;
        if ( !dword_61D6E4 )
          dword_61D6E4 = 1;
      }
    }
  }
  if ( (unsigned __int64)qword_61D720 > 2 )
    v16 = qword_61D720 / 3uLL;
  else
    v16 = 1LL;
  qword_61D7D8 = v16;
  qword_61D700 = sub_40FDC5(0LL);
  if ( (unsigned int)sub_40FE0E(qword_61D700) == 5 )
    sub_40FE50(qword_61D700, 32LL, 1LL);
  if ( (unsigned int)dword_61D6BC > 1 )
  {
    for ( i = (_BYTE *)((unsigned int)dword_61D6BC - 2LL + 4287784); *i; ++i )
      sub_40FE50(qword_61D700, (unsigned int)(char)*i, 1LL);
  }
  qword_61D708 = sub_40FDC5(0LL);
  sub_40FE50(qword_61D708, 58LL, 1LL);
  if ( byte_61D6B8 && dword_61D69C )
    byte_61D6B8 = 0;
  if ( (dword_61D6A0 == 1 || dword_61D6A0 == 2) && v24 != 1 && dword_61D69C )
    dword_61D6A4 = 4;
  if ( !dword_61D69C )
  {
    s1 = v32;
    if ( !v32 )
    {
      s1 = getenv("TIME_STYLE");
      if ( !s1 )
        s1 = (char *)sub_4027A7((__int64)"locale");
    }
    while ( !strncmp(s1, "posix-", 6uLL) )
    {
      if ( (unsigned __int8)sub_40C23A(2LL) != 1 )
        return (unsigned int)optind;
      s1 += 6;
    }
    if ( *s1 == 43 )
    {
      s = s1 + 1;
      v35 = strchr(s1 + 1, 10);
      if ( v35 )
      {
        if ( strchr(v35 + 1, 10) )
        {
          v18 = sub_40FDA6(s);
          v19 = gettext("invalid time style format %s");
          error(2, 0, v19, v18);
        }
        v20 = v35++;
        *v20 = 0;
      }
      else
      {
        v35 = s;
      }
      haystack = s;
      off_61D528 = v35;
    }
    else
    {
      v21 = dword_415ED0[sub_40B53C("time style", s1, off_415EA0, dword_415ED0, 4LL, off_61D578)];
      if ( v21 == 1 )
      {
        off_61D528 = "%Y-%m-%d %H:%M";
        haystack = "%Y-%m-%d %H:%M";
      }
      else if ( v21 )
      {
        if ( v21 == 2 )
        {
          haystack = "%Y-%m-%d ";
          off_61D528 = "%m-%d %H:%M";
        }
        else if ( v21 == 3 && (unsigned __int8)sub_40C23A(2LL) )
        {
          for ( j = 0; j <= 1; ++j )
          {
            v22 = dcgettext(0LL, (&haystack)[j], 2);
            (&haystack)[j] = v22;
          }
        }
      }
      else
      {
        off_61D528 = "%Y-%m-%d %H:%M:%S.%N %z";
        haystack = "%Y-%m-%d %H:%M:%S.%N %z";
      }
    }
    if ( (strstr(haystack, "%b") || strstr(off_61D528, "%b")) && !sub_402A0D() )
    {
      v23 = gettext("error initializing month strings");
      error(0, 0, v23);
    }
  }
  return (unsigned int)optind;
}
