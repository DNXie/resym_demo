#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  int v8; // eax
  size_t v9; // rax
  char *v10; // rbx
  int *v11; // rax
  int argc; // [rsp+1Ch] [rbp-64h]
  char v13; // [rsp+2Ah] [rbp-56h]
  char v14; // [rsp+2Bh] [rbp-55h]
  int v15; // [rsp+2Ch] [rbp-54h] BYREF
  int v16; // [rsp+30h] [rbp-50h]
  int v17; // [rsp+34h] [rbp-4Ch]
  unsigned __int64 i; // [rsp+38h] [rbp-48h]
  __int64 v19; // [rsp+40h] [rbp-40h]
  char *s; // [rsp+48h] [rbp-38h]
  char v21[24]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-18h]

  argc = a1;
  v22 = __readfsqword(0x28u);
  v19 = sub_40170B((__int64)v21, 4uLL);
  v13 = 0;
  v14 = 1;
  v16 = -1;
  sub_404F65(*a2);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_4078F0(sub_402C37);
  setvbuf(stdout, 0LL, 1, 0LL);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = getopt_long(a1, a2, "bctw", &longopts, 0LL);
        if ( v17 == -1 )
        {
          qword_60A288 = 43LL;
          qword_60A290 = 40LL;
          if ( v16 >= 0 && v13 )
          {
            v3 = gettext("the --binary and --text options are meaningless when verifying checksums");
            error(0, 0, v3);
            sub_401869(1);
          }
          if ( byte_60A298 && v13 != 1 )
          {
            v4 = gettext("the --status option is meaningful only when verifying checksums");
            error(0, 0, v4);
            sub_401869(1);
          }
          if ( byte_60A299 && v13 != 1 )
          {
            v5 = gettext("the --warn option is meaningful only when verifying checksums");
            error(0, 0, v5);
            sub_401869(1);
          }
          if ( byte_60A29A && v13 != 1 )
          {
            v6 = gettext("the --quiet option is meaningful only when verifying checksums");
            error(0, 0, v6);
            sub_401869(1);
          }
          if ( ((unsigned __int8)byte_60A29B & ((unsigned __int8)v13 ^ 1)) != 0 )
          {
            v7 = gettext("the --strict option is meaningful only when verifying checksums");
            error(0, 0, v7);
            sub_401869(1);
          }
          if ( v16 < 0 )
            v16 = 0;
          if ( optind == a1 )
          {
            argc = a1 + 1;
            a2[a1] = (char *)sub_40185B((__int64)"-");
          }
          while ( optind < argc )
          {
            s = a2[optind];
            if ( v13 )
            {
              v14 &= sub_401FAC(s);
            }
            else
            {
              v15 = v16;
              if ( (unsigned __int8)sub_401E5D(s, (__int64)&v15, v19) != 1 )
              {
                v14 = 0;
              }
              else
              {
                if ( strchr(s, 10) || strchr(s, 92) )
                  putchar_unlocked(92);
                for ( i = 0LL; (unsigned __int64)qword_60A290 >> 1 > i; ++i )
                  printf("%02x", *(unsigned __int8 *)(v19 + i));
                putchar_unlocked(32);
                if ( v15 )
                  putchar_unlocked(42);
                else
                  putchar_unlocked(32);
                for ( i = 0LL; ; ++i )
                {
                  v9 = strlen(s);
                  if ( v9 <= i )
                    break;
                  v8 = s[i];
                  if ( v8 == 10 )
                  {
                    fwrite_unlocked("\\n", 1uLL, 2uLL, stdout);
                  }
                  else if ( v8 == 92 )
                  {
                    fwrite_unlocked("\\\\", 1uLL, 2uLL, stdout);
                  }
                  else
                  {
                    putchar_unlocked(s[i]);
                  }
                }
                putchar_unlocked(10);
              }
            }
            ++optind;
          }
          if ( byte_60A280 )
          {
            if ( (unsigned int)sub_40733C(stdin) == -1 )
            {
              v10 = gettext("standard input");
              v11 = __errno_location();
              error(1, *v11, v10);
            }
          }
          exit(v14 == 0);
        }
        if ( v17 != 116 )
          break;
        v16 = 0;
      }
      if ( v17 <= 116 )
        break;
      if ( v17 == 128 )
      {
        byte_60A298 = 1;
        byte_60A299 = 0;
        byte_60A29A = 0;
      }
      else if ( v17 > 128 )
      {
        if ( v17 == 129 )
        {
          byte_60A298 = 0;
          byte_60A299 = 0;
          byte_60A29A = 1;
        }
        else
        {
          if ( v17 != 130 )
            goto LABEL_27;
          byte_60A29B = 1;
        }
      }
      else
      {
        if ( v17 != 119 )
          goto LABEL_27;
        byte_60A298 = 0;
        byte_60A299 = 1;
        byte_60A29A = 0;
      }
    }
    if ( v17 == -130 )
      sub_401869(0);
    if ( v17 <= -130 )
    {
      if ( v17 == -131 )
      {
        sub_406F1D(
          (_DWORD)stdout,
          (unsigned int)"sha1sum",
          (unsigned int)"GNU coreutils",
          (_DWORD)off_60A1F0,
          (unsigned int)"Ulrich Drepper",
          (unsigned int)"Scott Miller",
          "David Madore",
          0LL);
        exit(0);
      }
LABEL_27:
      sub_401869(1);
    }
    if ( v17 == 98 )
    {
      v16 = 1;
    }
    else
    {
      if ( v17 != 99 )
        goto LABEL_27;
      v13 = 1;
    }
  }
}
