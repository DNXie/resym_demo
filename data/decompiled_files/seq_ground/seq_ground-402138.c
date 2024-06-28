#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  int v6; // eax
  char *v7; // rsi
  __int128 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  int v14; // eax
  char *v15; // rax
  long double v16; // [rsp+0h] [rbp-120h]
  long double v17; // [rsp+10h] [rbp-110h]
  long double v18; // [rsp+20h] [rbp-100h]
  __int128 v19; // [rsp+60h] [rbp-C0h] BYREF
  __int128 v20; // [rsp+70h] [rbp-B0h]
  char **argv; // [rsp+80h] [rbp-A0h]
  int argc; // [rsp+8Ch] [rbp-94h]
  int v23; // [rsp+94h] [rbp-8Ch]
  char *v24; // [rsp+98h] [rbp-88h]
  __int64 v25; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-78h]
  __int128 v27; // [rsp+B0h] [rbp-70h]
  __int128 v28; // [rsp+C0h] [rbp-60h]
  __int128 v29; // [rsp+D0h] [rbp-50h]
  __int128 v30; // [rsp+E0h] [rbp-40h]
  __int128 v31; // [rsp+F0h] [rbp-30h] BYREF
  __int128 v32; // [rsp+100h] [rbp-20h]

  argc = a1;
  argv = a2;
  *(_QWORD *)&v27 = 0x8000000000000000LL;
  DWORD2(v27) = 0x3FFF;
  *(_QWORD *)&v28 = 1LL;
  DWORD2(v28) = 0;
  *(_QWORD *)&v29 = 0x8000000000000000LL;
  DWORD2(v29) = 0x3FFF;
  *(_QWORD *)&v30 = 1LL;
  DWORD2(v30) = 0;
  v25 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  sub_40292A(*a2);
  setlocale(6, &byte_40B14F);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40A9D0(sub_402788);
  byte_60D280 = 0;
  qword_60D288 = "\n";
  while ( 1 )
  {
    while ( 1 )
    {
      if ( optind >= argc
        || *argv[optind] == 45 && ((v23 = argv[optind][1], v23 == 46) || (unsigned int)(v23 - 48) <= 9)
        || (v23 = getopt_long(argc, argv, "+f:s:w", &longopts, 0LL), v23 == -1) )
      {
        if ( argc - optind <= 0 )
        {
          v3 = gettext("missing operand");
          error(0, 0, v3);
          sub_401736(1);
        }
        if ( argc - optind > 3 )
        {
          v4 = sub_402A35(argv[optind + 3]);
          v5 = gettext("extra operand %s");
          error(0, 0, v5, v4);
          sub_401736(1);
        }
        if ( v24 )
          v24 = (char *)sub_401A8B(v24, &v25);
        v6 = optind++;
        v7 = argv[v6];
        v8 = &v31;
        sub_40184F((__int64)&v31, (unsigned __int8 *)v7);
        if ( optind < argc )
        {
          v27 = v31;
          v28 = v32;
          v13 = optind++;
          v7 = argv[v13];
          v8 = &v19;
          sub_40184F((__int64)&v19, (unsigned __int8 *)v7);
          v31 = v19;
          v32 = v20;
          if ( optind < argc )
          {
            v29 = v31;
            v30 = v32;
            v14 = optind++;
            v7 = argv[v14];
            v8 = &v19;
            sub_40184F((__int64)&v19, (unsigned __int8 *)v7);
            v31 = v19;
            v32 = v20;
          }
        }
        if ( v24 && byte_60D280 )
        {
          v15 = gettext("format string may not be specified when printing equal width strings");
          error(0, 0, v15);
          sub_401736(1);
        }
        if ( !v24 )
          v24 = (char *)sub_402036(
                          (__int64)v8,
                          (__int64)v7,
                          v9,
                          v10,
                          v11,
                          v12,
                          v27,
                          SDWORD2(v27),
                          v28,
                          SDWORD2(v28),
                          v29,
                          SDWORD2(v29),
                          v30,
                          SDWORD2(v30),
                          v31,
                          SDWORD2(v31),
                          v32,
                          SDWORD2(v32));
        *(_QWORD *)&v18 = v31;
        DWORD2(v18) = DWORD2(v31);
        *(_QWORD *)&v17 = v29;
        DWORD2(v17) = DWORD2(v29);
        *(_QWORD *)&v16 = v27;
        DWORD2(v16) = DWORD2(v27);
        sub_401DD4(v24, v25, v26, v16, v17, v18);
        exit(0);
      }
      if ( v23 != 102 )
        break;
      v24 = (char *)optarg;
    }
    if ( v23 <= 102 )
      break;
    if ( v23 == 115 )
    {
      qword_60D288 = (char *)optarg;
    }
    else
    {
      if ( v23 != 119 )
        goto LABEL_19;
      byte_60D280 = 1;
    }
  }
  if ( v23 == -131 )
  {
    sub_4048FF(
      (_DWORD)stdout,
      (unsigned int)"seq",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_60D1D0,
      (unsigned int)"Ulrich Drepper",
      0);
    exit(0);
  }
  if ( v23 == -130 )
    sub_401736(0);
LABEL_19:
  sub_401736(1);
}
