#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  int v7; // eax
  __int64 v8; // rbx
  char *v9; // rax
  int v10; // eax
  int v11; // [rsp+10h] [rbp-50h]
  __mode_t v12; // [rsp+14h] [rbp-4Ch]
  __int64 v13; // [rsp+18h] [rbp-48h]
  __int64 v14; // [rsp+20h] [rbp-40h]
  void *ptr; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall *v16)(__int64, const char *, __int64); // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+38h] [rbp-28h]
  int v18; // [rsp+3Ch] [rbp-24h]
  int v19; // [rsp+40h] [rbp-20h] BYREF
  char *v20; // [rsp+48h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  v18 = 511;
  v19 = 0;
  v20 = 0LL;
  sub_402C84(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40BBB0(sub_40204F);
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = getopt_long(a1, a2, "pm:vZ:", &longopts, 0LL);
      if ( v11 == -1 )
      {
        if ( optind == a1 )
        {
          v3 = gettext("missing operand");
          error(0, 0, v3);
          sub_401A05(1);
        }
        if ( v14 && (int)sub_4018DD(v14) < 0 )
        {
          v4 = sub_402D8F(v14);
          v5 = gettext("failed to set default file creation context to %s");
          v6 = __errno_location();
          error(1, *v6, v5, v4);
        }
        if ( v16 || v13 )
        {
          v12 = umask(0);
          v7 = ~(_WORD)v12 & 0x13F;
          LOBYTE(v7) = ~(_BYTE)v12 & 0x3F | 0xC0;
          v17 = v7;
          if ( v13 )
          {
            ptr = (void *)sub_40274D(v13);
            if ( !ptr )
            {
              v8 = sub_402D8F(v13);
              v9 = gettext("invalid mode %s");
              error(1, 0, v9, v8);
            }
            v18 = sub_402AE9(511LL, 1LL, v12, ptr, &v19);
            free(ptr);
          }
          else
          {
            v18 = ~(_WORD)v12 & 0x1FF;
          }
        }
        v10 = sub_404A2B((unsigned int)(a1 - optind), &a2[optind], sub_401BC4, &v16);
        exit(v10);
      }
      if ( v11 != 90 )
        break;
      v14 = optarg;
    }
    if ( v11 <= 90 )
      break;
    switch ( v11 )
    {
      case 'p':
        v16 = sub_401B5B;
        break;
      case 'v':
        v20 = gettext("created directory %s");
        break;
      case 'm':
        v13 = optarg;
        break;
      default:
        goto LABEL_17;
    }
  }
  if ( v11 == -131 )
  {
    sub_4052C0(
      (_DWORD)stdout,
      (unsigned int)"mkdir",
      (unsigned int)"GNU coreutils",
      (_DWORD)off_60E220,
      (unsigned int)"David MacKenzie",
      0,
      (char)a2);
    exit(0);
  }
  if ( v11 == -130 )
    sub_401A05(0);
LABEL_17:
  sub_401A05(1);
}
