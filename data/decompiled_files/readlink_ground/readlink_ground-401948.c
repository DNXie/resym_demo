#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  int v4; // eax
  __int64 v5; // rbx
  char *v6; // rax
  __int64 v7; // rax
  const char *v8; // rax
  __int64 result; // rax
  int *v10; // rax
  unsigned int v11; // [rsp+18h] [rbp-28h]
  int v12; // [rsp+1Ch] [rbp-24h]
  const char *v13; // [rsp+20h] [rbp-20h]
  char *ptr; // [rsp+28h] [rbp-18h]

  v11 = -1;
  sub_404364(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_4075C0(sub_402694);
  while ( 1 )
  {
    v12 = getopt_long(a1, a2, "efmnqsv", &longopts, 0LL);
    if ( v12 == -1 )
      break;
    if ( v12 == 109 )
    {
      v11 = 2;
    }
    else if ( v12 > 109 )
    {
      if ( v12 == 113 )
        goto LABEL_22;
      if ( v12 > 113 )
      {
        if ( v12 == 115 )
        {
LABEL_22:
          byte_60A27A = 0;
        }
        else
        {
          if ( v12 != 118 )
            goto LABEL_26;
          byte_60A27A = 1;
        }
      }
      else
      {
        if ( v12 != 110 )
          goto LABEL_26;
        byte_60A279 = 1;
      }
    }
    else
    {
      if ( v12 == -130 )
        sub_401847(0);
      if ( v12 <= -130 )
      {
        if ( v12 == -131 )
        {
          sub_406532(
            (_DWORD)stdout,
            (unsigned int)"readlink",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_60A200,
            (unsigned int)"Dmitry V. Levin",
            0,
            (char)a2);
          exit(0);
        }
LABEL_26:
        sub_401847(1);
      }
      if ( v12 == 101 )
      {
        v11 = 0;
      }
      else
      {
        if ( v12 != 102 )
          goto LABEL_26;
        v11 = 1;
      }
    }
  }
  if ( optind >= a1 )
  {
    v3 = gettext("missing operand");
    error(0, 0, v3);
    sub_401847(1);
  }
  v4 = optind++;
  v13 = a2[v4];
  if ( optind < a1 )
  {
    v5 = sub_40446F(a2[optind]);
    v6 = gettext("extra operand %s");
    error(0, 0, v6, v5);
    sub_401847(1);
  }
  if ( v11 == -1 )
    v7 = sub_401C1C(v13, 63LL);
  else
    v7 = sub_401E12(v13, v11);
  ptr = (char *)v7;
  if ( v7 )
  {
    if ( byte_60A279 )
      v8 = locale;
    else
      v8 = "\n";
    printf("%s%s", ptr, v8);
    free(ptr);
    result = 0LL;
  }
  else
  {
    if ( byte_60A27A )
    {
      v10 = __errno_location();
      error(1, *v10, "%s", v13);
    }
    result = 1LL;
  }
  return result;
}
