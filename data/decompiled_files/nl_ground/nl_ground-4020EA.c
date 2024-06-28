#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  __int64 v5; // rbx
  char *v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  __int64 v9; // rbx
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rbx
  char *v13; // rax
  __int64 v14; // rbx
  char *v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  __int64 v18; // rbx
  char *v19; // rax
  const char *v20; // rbx
  const char *v21; // r12
  char *v22; // rax
  char *v23; // rax
  const char *v24; // rbx
  char *v25; // rax
  int *v26; // rax
  char v27; // [rsp+2Bh] [rbp-25h]
  int v28; // [rsp+2Ch] [rbp-24h]
  __int64 v29; // [rsp+30h] [rbp-20h] BYREF
  size_t v30; // [rsp+38h] [rbp-18h]

  v27 = 1;
  sub_402CE6(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_405DD0(sub_40292D);
  byte_609748 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v28 = getopt_long(a1, a2, "h:b:f:v:i:pl:s:w:n:d:", &longopts, 0LL);
      if ( v28 == -1 )
      {
        if ( v27 != 1 )
          sub_4018F7(1);
        v30 = strlen(src);
        qword_6096F0 = 3 * v30;
        dest = (char *)sub_404F23(3 * v30 + 1);
        v20 = src;
        v21 = src;
        v22 = stpcpy(dest, src);
        v23 = stpcpy(v22, v21);
        strcpy(v23, v20);
        qword_609700 = 2 * v30;
        qword_6096F8 = (char *)sub_404F23(2 * v30 + 1);
        v24 = src;
        v25 = stpcpy(qword_6096F8, src);
        strcpy(v25, v24);
        qword_609710 = v30;
        qword_609708 = (char *)sub_404F23(v30 + 1);
        strcpy(qword_609708, src);
        sub_402B39(&unk_609720);
        v30 = strlen(off_609208);
        s = (char *)sub_404F23(dword_609238 + v30 + 1);
        memset(s, 32, v30 + dword_609238);
        s[dword_609238 + v30] = 0;
        qword_609740 = qword_609218;
        qword_609300 = (__int64)off_6091F0[0];
        buffer = &stru_609320;
        if ( optind == a1 )
        {
          v27 = sub_401FAD("-");
        }
        else
        {
          while ( optind < a1 )
          {
            v27 = (unsigned __int8)(v27 & sub_401FAD(a2[optind])) != 0;
            ++optind;
          }
        }
        if ( byte_609748 )
        {
          if ( (unsigned int)sub_405ACC(stdin) == -1 )
          {
            v26 = __errno_location();
            error(1, *v26, "-");
          }
        }
        exit(v27 == 0);
      }
      if ( v28 != 105 )
        break;
LABEL_36:
      if ( (unsigned int)sub_4051BB(optarg, 0LL, 10LL, &qword_609220, &locale) || qword_609220 <= 0 )
      {
        v12 = sub_402DF1(optarg);
        v13 = gettext("invalid line number increment: %s");
        error(0, 0, v13, v12);
        v27 = 0;
      }
    }
    if ( v28 > 105 )
    {
      if ( v28 == 115 )
      {
        off_609208 = optarg;
      }
      else if ( v28 > 115 )
      {
        switch ( v28 )
        {
          case 119:
            if ( (unsigned int)sub_4056B4(optarg, 0LL, 10LL, &v29, &locale) || v29 <= 0 || v29 > 0x7FFFFFFF )
            {
              v16 = sub_402DF1(optarg);
              v17 = gettext("invalid line number field width: %s");
              error(0, 0, v17, v16);
              v27 = 0;
            }
            else
            {
              dword_609238 = v29;
            }
            break;
          case 128:
            v11 = gettext("WARNING: --page-increment is deprecated; use --line-increment instead");
            error(0, 0, v11);
            goto LABEL_36;
          case 118:
            if ( (unsigned int)sub_4051BB(optarg, 0LL, 10LL, &qword_609218, &locale) )
            {
              v9 = sub_402DF1(optarg);
              v10 = gettext("invalid starting line number: %s");
              error(0, 0, v10, v9);
              v27 = 0;
            }
            break;
          default:
            goto LABEL_61;
        }
      }
      else
      {
        switch ( v28 )
        {
          case 'n':
            if ( !strcmp(optarg, "ln") )
            {
              off_609240 = "%-*ld%s";
            }
            else if ( !strcmp(optarg, "rn") )
            {
              off_609240 = "%*ld%s";
            }
            else if ( !strcmp(optarg, "rz") )
            {
              off_609240 = "%0*ld%s";
            }
            else
            {
              v18 = sub_402DF1(optarg);
              v19 = gettext("invalid line numbering format: %s");
              error(0, 0, v19, v18);
              v27 = 0;
            }
            break;
          case 'p':
            byte_609228 = 0;
            break;
          case 'l':
            if ( (unsigned int)sub_4051BB(optarg, 0LL, 10LL, &qword_609230, &locale) || qword_609230 <= 0 )
            {
              v14 = sub_402DF1(optarg);
              v15 = gettext("invalid number of blank lines: %s");
              error(0, 0, v15, v14);
              v27 = 0;
            }
            break;
          default:
            goto LABEL_61;
        }
      }
    }
    else if ( v28 == 98 )
    {
      if ( (unsigned __int8)sub_401A68(off_6091F0, &stru_609320, byte_6093E0) != 1 )
      {
        v5 = sub_402DF1(optarg);
        v6 = gettext("invalid body numbering style: %s");
        error(0, 0, v6, v5);
        v27 = 0;
      }
    }
    else if ( v28 > 98 )
    {
      switch ( v28 )
      {
        case 'f':
          if ( (unsigned __int8)sub_401A68(off_609200, &stru_6093A0, byte_6095E0) != 1 )
          {
            v7 = sub_402DF1(optarg);
            v8 = gettext("invalid footer numbering style: %s");
            error(0, 0, v8, v7);
            v27 = 0;
          }
          break;
        case 'h':
          if ( (unsigned __int8)sub_401A68(off_6091F8, &stru_609360, byte_6094E0) != 1 )
          {
            v3 = sub_402DF1(optarg);
            v4 = gettext("invalid header numbering style: %s");
            error(0, 0, v4, v3);
            v27 = 0;
          }
          break;
        case 'd':
          src = optarg;
          break;
        default:
          goto LABEL_61;
      }
    }
    else
    {
      if ( v28 == -131 )
      {
        sub_404CBB(
          (_DWORD)stdout,
          (unsigned int)"nl",
          (unsigned int)"GNU coreutils",
          (_DWORD)off_609248,
          (unsigned int)"Scott Bartram",
          (unsigned int)"David MacKenzie",
          0);
        exit(0);
      }
      if ( v28 == -130 )
        sub_4018F7(0);
LABEL_61:
      v27 = 0;
    }
  }
}
