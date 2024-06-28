#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  char *v5; // rax
  bool v6; // al
  __int64 v7; // r12
  char *v8; // rbx
  int *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // er15
  int v13; // er14
  int v14; // er13
  int v15; // er12
  char *v16; // rbx
  char *v17; // rax
  char *v18; // rax
  __int64 v19; // [rsp+28h] [rbp-118h]
  unsigned int v20; // [rsp+38h] [rbp-108h]
  char v21; // [rsp+4Ah] [rbp-F6h]
  bool v22; // [rsp+4Bh] [rbp-F5h]
  int v23; // [rsp+4Ch] [rbp-F4h]
  __int64 v24; // [rsp+50h] [rbp-F0h]
  struct tm *v25; // [rsp+58h] [rbp-E8h]
  __int64 v26; // [rsp+60h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-D8h]
  __int64 v28; // [rsp+70h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+78h] [rbp-C8h]
  struct stat stat_buf; // [rsp+80h] [rbp-C0h] BYREF

  v21 = 0;
  v22 = 1;
  v24 = 0LL;
  sub_40793C(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40C830(sub_403093);
  dword_611380 = 0;
  byte_611385 = 0;
  byte_611384 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        v23 = getopt_long(a1, a2, "acd:fhmr:t:", &longopts, 0LL);
        if ( v23 == -1 )
        {
          if ( !dword_611380 )
            dword_611380 = 3;
          if ( v21 && (byte_611385 || v24) )
          {
            v5 = gettext("cannot specify times from more than one source");
            error(0, 0, v5);
            sub_4022EB(1);
          }
          if ( byte_611385 )
          {
            if ( byte_611386 )
              v6 = (unsigned int)sub_40C870(filename, &stat_buf) != 0;
            else
              v6 = (unsigned int)sub_40C850(filename, &stat_buf) != 0;
            if ( v6 )
            {
              v7 = sub_407A47(filename);
              v8 = gettext("failed to get attributes of %s");
              v9 = __errno_location();
              error(1, *v9, v8, v7);
            }
            timer = sub_401FA7((__int64)&stat_buf);
            qword_6113A8 = v10;
            qword_6113B0 = sub_401FBD((__int64)&stat_buf);
            qword_6113B8 = v11;
            v21 = 1;
            if ( v24 )
            {
              if ( (dword_611380 & 1) != 0 )
                sub_401FD3((__int64)&timer, v24, (__int64)&timer);
              if ( (dword_611380 & 2) != 0 )
                sub_401FD3((__int64)&qword_6113B0, v24, (__int64)&qword_6113B0);
            }
          }
          else if ( v24 )
          {
            sub_4032C4(&v26);
            sub_401FD3((__int64)&timer, v24, (__int64)&v26);
            qword_6113B0 = timer;
            qword_6113B8 = qword_6113A8;
            v21 = 1;
            if ( dword_611380 == 3 && timer == v26 && qword_6113A8 == v27 )
            {
              v28 = v26 ^ 1;
              v29 = v27;
              sub_401FD3((__int64)&stat_buf, v24, (__int64)&v28);
              if ( stat_buf.st_dev == v28 && stat_buf.st_ino == v29 )
                v21 = 0;
            }
          }
          if ( v21 != 1
            && a1 - optind > 1
            && (int)sub_4078B8() <= 200111
            && (unsigned __int8)sub_407698(&timer, a2[optind], 18LL) )
          {
            qword_6113A8 = 0LL;
            qword_6113B0 = timer;
            qword_6113B8 = 0LL;
            v21 = 1;
            if ( !getenv("POSIXLY_CORRECT") )
            {
              v25 = localtime(&timer);
              if ( v25 )
              {
                v12 = v25->tm_sec;
                v13 = v25->tm_min;
                v14 = v25->tm_hour;
                v15 = v25->tm_mday;
                v20 = v25->tm_mon + 1;
                v19 = v25->tm_year + 1900LL;
                v16 = a2[optind];
                v17 = gettext("warning: `touch %s' is obsolete; use `touch -t %04ld%02d%02d%02d%02d.%02d'");
                error(0, 0, v17, v16, v19, v20, v15, v14, v13, v12);
              }
            }
            ++optind;
          }
          if ( v21 != 1 )
          {
            if ( dword_611380 == 3 )
            {
              byte_611387 = 1;
            }
            else
            {
              qword_6113A8 = 0x3FFFFFFFLL;
              qword_6113B8 = 0x3FFFFFFFLL;
            }
          }
          if ( optind == a1 )
          {
            v18 = gettext("missing file operand");
            error(0, 0, v18);
            sub_4022EB(1);
          }
          while ( optind < a1 )
          {
            v22 = (v22 & (unsigned __int8)sub_402040(a2[optind])) != 0;
            ++optind;
          }
          exit(!v22);
        }
      }
      while ( v23 == 102 );
      if ( v23 <= 102 )
        break;
      if ( v23 == 114 )
      {
        byte_611385 = 1;
        filename = (char *)optarg;
      }
      else if ( v23 > 114 )
      {
        if ( v23 == 116 )
        {
          if ( (unsigned __int8)sub_407698(&timer, optarg, 13LL) != 1 )
          {
            v3 = sub_407A47(optarg);
            v4 = gettext("invalid date format %s");
            error(1, 0, v4, v3);
          }
          qword_6113A8 = 0LL;
          qword_6113B0 = timer;
          qword_6113B8 = 0LL;
          v21 = 1;
        }
        else
        {
          if ( v23 != 128 )
            goto LABEL_32;
          dword_611380 |= dword_40CBD0[sub_402F57("--time", optarg, off_40CBA0, dword_40CBD0, 4LL, off_6112C8)];
        }
      }
      else if ( v23 == 104 )
      {
        byte_611386 = 1;
      }
      else
      {
        if ( v23 != 109 )
          goto LABEL_32;
        dword_611380 |= 2u;
      }
    }
    if ( v23 == 97 )
    {
      dword_611380 |= 1u;
    }
    else
    {
      if ( v23 <= 97 )
      {
        if ( v23 == -131 )
        {
          sub_409911(
            (_DWORD)stdout,
            (unsigned int)"touch",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_6112C0,
            (unsigned int)"Paul Rubin",
            (unsigned int)"Arnold Robbins",
            "Jim Kingdon",
            "David MacKenzie",
            "Randy Smith",
            0LL);
          exit(0);
        }
        if ( v23 == -130 )
          sub_4022EB(0);
LABEL_32:
        sub_4022EB(1);
      }
      if ( v23 == 99 )
      {
        byte_611384 = 1;
      }
      else
      {
        if ( v23 != 100 )
          goto LABEL_32;
        v24 = optarg;
      }
    }
  }
}
