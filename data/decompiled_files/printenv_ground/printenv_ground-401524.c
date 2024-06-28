#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  char *v5; // rax
  char v6; // cl
  char *v7; // rax
  bool v8; // [rsp+29h] [rbp-27h]
  char v9; // [rsp+2Ah] [rbp-26h]
  unsigned __int8 v10; // [rsp+2Bh] [rbp-25h]
  int i; // [rsp+2Ch] [rbp-24h]
  int v12; // [rsp+30h] [rbp-20h]
  int v13; // [rsp+34h] [rbp-1Ch]
  char **k; // [rsp+38h] [rbp-18h]
  char **j; // [rsp+38h] [rbp-18h]
  char *v16; // [rsp+40h] [rbp-10h]
  char *v17; // [rsp+48h] [rbp-8h]

  v9 = 0;
  sub_4019B2(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40131D(2u);
  sub_404060(sub_401810);
  while ( 1 )
  {
    v13 = getopt_long(a1, a2, "+iu:0", &longopts, 0LL);
    if ( v13 == -1 )
      break;
    if ( v13 == -130 )
      sub_40143F(0);
    if ( v13 != 48 )
    {
      if ( v13 != -131 )
        sub_40143F(2);
      sub_403944(
        (_DWORD)stdout,
        (unsigned int)"printenv",
        (unsigned int)"GNU coreutils",
        (_DWORD)off_606180,
        (unsigned int)"David MacKenzie",
        (unsigned int)"Richard Mlynarik",
        0);
      exit(0);
    }
    v9 = 1;
  }
  if ( optind < a1 )
  {
    v12 = 0;
    for ( i = optind; i < a1; ++i )
    {
      v10 = 0;
      if ( !strchr(a2[i], 61) )
      {
        for ( j = environ; *j; ++j )
        {
          v16 = *j;
          v17 = a2[i];
          do
          {
            if ( *v16 )
            {
              if ( *v17 )
              {
                v5 = v16++;
                v6 = *v5;
                v7 = v17++;
                if ( v6 == *v7 )
                  continue;
              }
            }
            goto LABEL_31;
          }
          while ( *v16 != 61 || *v17 );
          if ( v9 )
            v4 = 0;
          else
            v4 = 10;
          printf("%s%c", v16 + 1, v4);
          v10 = 1;
LABEL_31:
          ;
        }
        v12 += v10;
      }
    }
    v8 = a1 - optind == v12;
  }
  else
  {
    for ( k = environ; *k; ++k )
    {
      if ( v9 )
        v3 = 0;
      else
        v3 = 10;
      printf("%s%c", *k, v3);
    }
    v8 = 1;
  }
  exit(!v8);
}
