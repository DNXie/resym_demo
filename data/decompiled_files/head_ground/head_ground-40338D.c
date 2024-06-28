#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  char *v5; // rax
  char *v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  char **v9; // rax
  int *v10; // rax
  char *const *argv; // [rsp+10h] [rbp-80h]
  int argc; // [rsp+1Ch] [rbp-74h]
  bool v13; // [rsp+24h] [rbp-6Ch]
  char v14; // [rsp+25h] [rbp-6Bh]
  bool v15; // [rsp+26h] [rbp-6Ah]
  char v16; // [rsp+27h] [rbp-69h]
  int v17; // [rsp+28h] [rbp-68h]
  int v18; // [rsp+2Ch] [rbp-64h]
  __int64 i; // [rsp+30h] [rbp-60h]
  __int64 v20; // [rsp+38h] [rbp-58h]
  char *v21; // [rsp+40h] [rbp-50h]
  const char *v22; // [rsp+48h] [rbp-48h]
  char *v23; // [rsp+50h] [rbp-40h]
  char **v24; // [rsp+58h] [rbp-38h]
  char v25[24]; // [rsp+60h] [rbp-30h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp-18h]

  argc = a1;
  argv = a2;
  v26 = __readfsqword(0x28u);
  v17 = 0;
  v13 = 1;
  v20 = 10LL;
  v14 = 1;
  v15 = 0;
  sub_403CC1(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_406930(sub_4038E8);
  byte_60927B = 0;
  byte_60927A = 0;
  if ( a1 <= 1 || *a2[1] != 45 || (unsigned int)(a2[1][1] - 48) > 9 )
    goto LABEL_53;
  v21 = a2[1] + 1;
  v22 = v21;
  v16 = 0;
  do
    ++v21;
  while ( (unsigned int)(*v21 - 48) <= 9 );
  v23 = v21;
  while ( 1 )
  {
    if ( !*v21 )
    {
      *v23 = v16;
      if ( v16 )
        v23[1] = 0;
      v20 = sub_4032B2(v14, v22);
      a2[1] = *a2;
      argv = a2 + 1;
      argc = a1 - 1;
      while ( 1 )
      {
LABEL_53:
        v18 = getopt_long(argc, argv, "c:n:qv0123456789", &longopts, 0LL);
        if ( v18 == -1 )
        {
          if ( v17 == 1 || !v17 && argc - 1 > optind )
            byte_60927A = 1;
          if ( v14 != 1 && v15 && v20 < 0 )
          {
            v7 = sub_403C3C(v20, v25);
            v8 = gettext("%s: number of bytes is too large");
            error(1, 0, v8, v7);
          }
          if ( optind >= argc )
            v9 = &off_407370;
          else
            v9 = (char **)&argv[optind];
          v24 = v9;
          for ( i = 0LL; v24[i]; ++i )
            v13 = (v13 & (unsigned __int8)sub_403172(v24[i], v20, v14, v15)) != 0;
          if ( byte_60927B )
          {
            if ( close(0) < 0 )
            {
              v10 = __errno_location();
              error(1, *v10, "-");
            }
          }
          exit(!v13);
        }
        if ( v18 == 110 )
          break;
        if ( v18 <= 110 )
        {
          if ( v18 == -130 )
            sub_4016C7(0);
          if ( v18 != 99 )
          {
            if ( v18 == -131 )
            {
              sub_405D07(
                (_DWORD)stdout,
                (unsigned int)"head",
                (unsigned int)"GNU coreutils",
                (_DWORD)off_6091D8,
                (unsigned int)"David MacKenzie",
                (unsigned int)"Jim Meyering",
                0);
              exit(0);
            }
LABEL_50:
            if ( (unsigned int)(v18 - 48) <= 9 )
            {
              v6 = gettext("invalid trailing option -- %c");
              error(0, 0, v6, (unsigned int)v18);
            }
            sub_4016C7(1);
          }
          v14 = 0;
          v15 = *(_BYTE *)optarg == 45;
          if ( *(_BYTE *)optarg == 45 )
            ++optarg;
          goto LABEL_42;
        }
        switch ( v18 )
        {
          case 118:
            v17 = 1;
            break;
          case 128:
            byte_609279 = 1;
            break;
          case 113:
            v17 = 2;
            break;
          default:
            goto LABEL_50;
        }
      }
      v14 = 1;
      v15 = *(_BYTE *)optarg == 45;
      if ( *(_BYTE *)optarg == 45 )
        ++optarg;
LABEL_42:
      v20 = sub_4032B2(v14, (const char *)optarg);
      goto LABEL_53;
    }
    v3 = *v21;
    if ( v3 == 108 )
    {
      v14 = 1;
    }
    else
    {
      if ( v3 <= 108 )
      {
        if ( v3 == 99 )
        {
          v14 = 0;
          v16 = 0;
          goto LABEL_23;
        }
        if ( v3 != 107 && v3 != 98 )
        {
LABEL_22:
          v4 = *v21;
          v5 = gettext("invalid trailing option -- %c");
          error(0, 0, v5, v4);
          sub_4016C7(1);
        }
        goto LABEL_18;
      }
      switch ( v3 )
      {
        case 'q':
          v17 = 2;
          break;
        case 'v':
          v17 = 1;
          break;
        case 'm':
LABEL_18:
          v14 = 0;
          v16 = *v21;
          break;
        default:
          goto LABEL_22;
      }
    }
LABEL_23:
    ++v21;
  }
}
