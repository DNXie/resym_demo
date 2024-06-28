#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  int v5; // eax
  int v6; // edx
  __int64 v7; // rbx
  char *v8; // rax
  int v9; // eax
  char v10; // al
  char *v11; // rax
  char v12; // [rsp+2Ah] [rbp-36h]
  _BYTE v13[5]; // [rsp+2Bh] [rbp-35h]
  int v14; // [rsp+30h] [rbp-30h]
  int v15; // [rsp+34h] [rbp-2Ch]
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  const char *v17; // [rsp+40h] [rbp-20h]
  const char *v18; // [rsp+48h] [rbp-18h]

  v13[4] = 0;
  *(_DWORD *)v13 = getenv("POSIXLY_CORRECT") != 0LL;
  v14 = 0;
  v15 = 0;
  v12 = 10;
  v18 = "-";
  v17 = "-";
  sub_4033AA(*a2);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  byte_6092C0 = sub_403082(3LL);
  sub_406370(sub_402CD0);
  qword_6092D0 = 0LL;
  qword_6092C8 = 0LL;
  qword_6092D8 = -1LL;
  byte_6092E5 = 1;
  byte_6092E4 = 1;
  byte_6092E6 = 0;
  dword_6092E0 = 1;
  dword_6092E8 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)&v13[1] != -1 && (!v13[0] || !v15) )
          {
            *(_DWORD *)&v13[1] = getopt_long(a1, a2, "-0123456789Dcdf:is:uw:z", &longopts, 0LL);
            if ( *(_DWORD *)&v13[1] != -1 )
              break;
          }
          if ( a1 <= optind )
          {
            if ( !dword_6092E0 )
            {
              if ( byte_6092E6 )
              {
                v11 = gettext("printing all duplicated lines and repeat counts is meaningless");
                error(0, 0, v11);
                sub_401936(1);
              }
            }
            sub_401DBB(v17, v18, v12);
            exit(0);
          }
          if ( v15 == 2 )
          {
            v3 = sub_4034B5(a2[optind]);
            v4 = gettext("extra operand %s");
            error(0, 0, v4, v3);
            sub_401936(1);
          }
          v5 = v15++;
          v6 = optind++;
          (&v17)[v5] = a2[v6];
        }
        if ( *(_DWORD *)&v13[1] != 99 )
          break;
        dword_6092E0 = 0;
      }
      if ( *(int *)&v13[1] <= 99 )
        break;
      if ( *(_DWORD *)&v13[1] == 115 )
      {
        qword_6092D0 = sub_401AA7((const char *)optarg, "invalid number of bytes to skip");
      }
      else if ( *(int *)&v13[1] > 115 )
      {
        switch ( *(_DWORD *)&v13[1] )
        {
          case 'w':
            qword_6092D8 = sub_401AA7((const char *)optarg, "invalid number of bytes to compare");
            break;
          case 'z':
            v12 = 0;
            break;
          case 'u':
            byte_6092E5 = 0;
            break;
          default:
            goto LABEL_62;
        }
      }
      else
      {
        switch ( *(_DWORD *)&v13[1] )
        {
          case 'f':
            v14 = 2;
            qword_6092C8 = sub_401AA7((const char *)optarg, "invalid number of fields to skip");
            break;
          case 'i':
            byte_6092E7 = 1;
            break;
          case 'd':
            byte_6092E4 = 0;
            break;
          default:
            goto LABEL_62;
        }
      }
    }
    if ( *(_DWORD *)&v13[1] == 1 )
    {
      if ( *(_BYTE *)optarg != 43
        || (int)sub_403326() > 200111
        || (unsigned int)sub_4059E9(optarg, 0LL, 10LL, &v16, &locale) )
      {
        if ( v15 == 2 )
        {
          v7 = sub_4034B5(optarg);
          v8 = gettext("extra operand %s");
          error(0, 0, v8, v7);
          sub_401936(1);
        }
        v9 = v15++;
        (&v17)[v9] = (const char *)optarg;
      }
      else
      {
        qword_6092D0 = v16;
      }
    }
    else
    {
      if ( *(int *)&v13[1] <= 1 )
      {
        if ( *(_DWORD *)&v13[1] == -131 )
        {
          sub_40537F(
            (_DWORD)stdout,
            (unsigned int)"uniq",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_609200,
            (unsigned int)"Richard M. Stallman",
            (unsigned int)"David MacKenzie",
            0);
          exit(0);
        }
        if ( *(_DWORD *)&v13[1] == -130 )
          sub_401936(0);
LABEL_62:
        sub_401936(1);
      }
      if ( *(int *)&v13[1] < 48 )
        goto LABEL_62;
      if ( *(int *)&v13[1] <= 57 )
      {
        if ( v14 == 2 )
          qword_6092C8 = 0LL;
        if ( (unsigned __int64)qword_6092C8 > 0x1999999999999999LL
          || *(_DWORD *)&v13[1] - 48 + 10 * qword_6092C8 < (unsigned __int64)qword_6092C8 )
        {
          v10 = 1;
        }
        else
        {
          qword_6092C8 = 10 * qword_6092C8 + *(_DWORD *)&v13[1] - 48;
          v10 = 0;
        }
        if ( v10 )
          qword_6092C8 = -1LL;
        v14 = 1;
      }
      else
      {
        if ( *(_DWORD *)&v13[1] != 68 )
          goto LABEL_62;
        byte_6092E4 = 0;
        byte_6092E6 = 1;
        if ( optarg )
          dword_6092E8 = dword_406560[sub_402B94("--all-repeated", optarg, off_406540, dword_406560, 4LL, off_609208)];
        else
          dword_6092E8 = 0;
      }
    }
  }
}
