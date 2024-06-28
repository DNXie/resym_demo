#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  char *v5; // rax
  char *v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  __int64 v11; // rax
  char *v12; // rax
  char v13; // al
  char *v14; // rbx
  int *v15; // rax
  char **argv; // [rsp+0h] [rbp-80h]
  char v17; // [rsp+1Dh] [rbp-63h]
  char v18; // [rsp+1Eh] [rbp-62h]
  bool v19; // [rsp+1Fh] [rbp-61h]
  char v20; // [rsp+1Fh] [rbp-61h]
  int v21; // [rsp+20h] [rbp-60h]
  int v22; // [rsp+24h] [rbp-5Ch]
  int v23; // [rsp+28h] [rbp-58h]
  int v24; // [rsp+30h] [rbp-50h]
  unsigned int v25; // [rsp+3Ch] [rbp-44h]
  unsigned int v26; // [rsp+3Ch] [rbp-44h]
  unsigned int v27; // [rsp+3Ch] [rbp-44h]
  unsigned int v28; // [rsp+3Ch] [rbp-44h]
  int longind[2]; // [rsp+40h] [rbp-40h] BYREF
  size_t v30; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 i; // [rsp+50h] [rbp-30h]
  size_t v32; // [rsp+58h] [rbp-28h]
  unsigned __int64 v33; // [rsp+60h] [rbp-20h]
  size_t v34; // [rsp+68h] [rbp-18h]

  argv = a2;
  v17 = 0;
  v18 = 0;
  v19 = 1;
  v33 = 0LL;
  sub_4059EA(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40E2E0(sub_4052AF);
  for ( i = 0LL; i <= 8; ++i )
    dword_612380[i] = 0;
  dword_612384 = 1;
  dword_612388 = 2;
  dword_612390 = 3;
  dword_6123A0 = 5;
  for ( i = 0LL; i <= 0x10; ++i )
    dword_6123C0[i] = 0;
  dword_6123D0 = 6;
  dword_612400 = 8;
  dword_6123E0 = 7;
  qword_612330 = 0LL;
  qword_612338 = 0LL;
  qword_612328 = 0LL;
  qword_612300 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_4034ED;
  dword_6122E0 = 8;
  dword_6122E4 = 7;
  byte_6122F0 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        longind[0] = -1;
        v22 = getopt_long(a1, a2, "A:aBbcDdeFfHhIij:LlN:OoS:st:vw::Xx", &longopts, longind);
        if ( v22 == -1 )
        {
          if ( v19 )
          {
            if ( byte_6122F0 && qword_612330 )
            {
              v6 = gettext("no type may be specified when dumping strings");
              error(1, 0, v6);
            }
            v21 = a1 - optind;
            if ( v17 != 1 || byte_6122F1 )
            {
              if ( v21 == 2 )
              {
                if ( (byte_6122F1 || *a2[optind + 1] == 43 || (unsigned int)(*a2[optind + 1] - 48) <= 9)
                  && sub_403B95(a2[optind + 1], (__int64)&v30) )
                {
                  if ( byte_6122F1 && sub_403B95(a2[optind], (__int64)longind) )
                  {
                    qword_612308 = *(_QWORD *)longind;
                    byte_6122F2 = 1;
                    v34 = v30;
                    argv = a2 + 2;
                    v21 = 0;
                  }
                  else
                  {
                    qword_612308 = v30;
                    v21 = 1;
                    a2[optind + 1] = a2[optind];
                    argv = a2 + 1;
                  }
                }
              }
              else if ( v21 == 3 )
              {
                if ( byte_6122F1
                  && sub_403B95(a2[optind + 1], (__int64)longind)
                  && sub_403B95(a2[optind + 2], (__int64)&v30) )
                {
                  qword_612308 = *(_QWORD *)longind;
                  byte_6122F2 = 1;
                  v34 = v30;
                  a2[optind + 2] = a2[optind];
                  argv = a2 + 2;
                  v21 -= 2;
                }
              }
              else if ( v21 == 1 && (byte_6122F1 || *a2[optind] == 43) && sub_403B95(a2[optind], (__int64)longind) )
              {
                qword_612308 = *(_QWORD *)longind;
                --v21;
                argv = a2 + 1;
              }
              if ( byte_6122F1 && v21 > 1 )
              {
                v7 = sub_405AF5(argv[optind + 1]);
                v8 = gettext("extra operand %s");
                error(0, 0, v8, v7);
                v9 = gettext("compatibility mode supports at most one file");
                error(0, 0, "%s", v9);
                sub_401A7A(1);
              }
            }
            if ( byte_6122F2 )
            {
              if ( (char *)qword_612300 == (char *)sub_4034DE )
              {
                dword_6122E0 = 8;
                dword_6122E4 = 7;
                qword_612300 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_40365F;
              }
              else
              {
                qword_612300 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_40369E;
              }
            }
            if ( byte_612310 )
            {
              qword_612320 = qword_612308 + qword_612318;
              if ( qword_612308 + qword_612318 < (unsigned __int64)qword_612308 )
              {
                v10 = gettext("skip-bytes + read-bytes is too large");
                error(1, 0, v10);
              }
            }
            if ( !qword_612330 )
              sub_403165((__int64)"oS");
            if ( v21 <= 0 )
              qword_612350 = (__int64)&off_40E6F0;
            else
              qword_612350 = (__int64)&argv[optind];
            v20 = sub_402EFF();
            if ( stream )
            {
              v20 = (unsigned __int8)(v20 & sub_403265(qword_612308)) != 0;
              if ( stream )
              {
                if ( byte_6122F2 )
                  v11 = v34 - qword_612308;
                else
                  v11 = 0LL;
                qword_6122F8 = v11;
                v23 = sub_403B27();
                if ( v18 )
                {
                  if ( !v32 || v32 % v23 )
                  {
                    v12 = gettext("warning: invalid width %lu; using %d instead");
                    error(0, 0, v12, v32, (unsigned int)v23);
                    n = v23;
                  }
                  else
                  {
                    n = v32;
                  }
                }
                else if ( v23 > 15 )
                {
                  n = v23;
                }
                else
                {
                  n = v23 * (16 / v23);
                }
                for ( i = 0LL; i < qword_612330; ++i )
                {
                  v24 = n
                      / dword_40E620[*(unsigned int *)(qword_612328 + 40 * i + 4)]
                      * (*(_DWORD *)(qword_612328 + 40 * i + 28) + 1);
                  if ( v24 > v33 )
                    v33 = v24;
                }
                for ( i = 0LL; i < qword_612330; ++i )
                  *(_DWORD *)(qword_612328 + 40 * i + 32) = v33
                                                          - n
                                                          / dword_40E620[*(unsigned int *)(qword_612328 + 40 * i + 4)]
                                                          * *(_DWORD *)(qword_612328 + 40 * i + 28);
                if ( byte_6122F0 )
                  v13 = sub_403F4F();
                else
                  v13 = sub_403C47();
                v20 = (unsigned __int8)(v20 & v13) != 0;
              }
            }
            if ( byte_612360 )
            {
              if ( (unsigned int)sub_40865A(stdin) == -1 )
              {
                v14 = gettext("standard input");
                v15 = __errno_location();
                error(1, *v15, v14);
              }
            }
            exit(v20 == 0);
          }
          exit(1);
        }
        if ( v22 != 98 )
          break;
        v19 = (v19 & (unsigned __int8)sub_403165((__int64)"o1")) != 0;
      }
      if ( v22 > 98 )
        break;
      if ( v22 == 72 )
        goto LABEL_88;
      if ( v22 > 72 )
      {
        if ( v22 == 79 )
        {
          v19 = (v19 & (unsigned __int8)sub_403165((__int64)"o4")) != 0;
        }
        else if ( v22 > 79 )
        {
          switch ( v22 )
          {
            case 'X':
LABEL_88:
              v19 = (v19 & (unsigned __int8)sub_403165((__int64)"x4")) != 0;
              break;
            case 'a':
              v19 = (v19 & (unsigned __int8)sub_403165((__int64)"a")) != 0;
              break;
            case 'S':
              v17 = 1;
              if ( optarg )
              {
                v27 = sub_4081EE(optarg, 0LL, 0LL, &v30, "bEGKkMmPTYZ0");
                if ( v27 )
                  sub_408108(v27, (unsigned int)longind[0], (unsigned int)(char)v22, &longopts, optarg);
                qword_6122E8 = v30;
              }
              else
              {
                qword_6122E8 = 3LL;
              }
              byte_6122F0 = 1;
              break;
            default:
              goto LABEL_102;
          }
        }
        else
        {
          switch ( v22 )
          {
            case 'L':
              goto LABEL_90;
            case 'N':
              v17 = 1;
              byte_612310 = 1;
              v26 = sub_4081EE(optarg, 0LL, 0LL, &qword_612318, "bEGKkMmPTYZ0");
              if ( v26 )
                sub_408108(v26, (unsigned int)longind[0], (unsigned int)(char)v22, &longopts, optarg);
              break;
            case 'I':
LABEL_90:
              v19 = (v19 & (unsigned __int8)sub_403165((__int64)"dL")) != 0;
              break;
            default:
              goto LABEL_102;
          }
        }
      }
      else if ( v22 == 65 )
      {
        v17 = 1;
        v3 = *(char *)optarg;
        if ( v3 == 110 )
        {
          qword_612300 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_4034DE;
          dword_6122E4 = 0;
        }
        else if ( v3 > 110 )
        {
          if ( v3 == 111 )
          {
            qword_612300 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_4034ED;
            dword_6122E0 = 8;
            dword_6122E4 = 7;
          }
          else if ( v3 == 120 )
          {
            qword_612300 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_4034ED;
            dword_6122E0 = 16;
            dword_6122E4 = 6;
          }
          else
          {
LABEL_66:
            v4 = *(char *)optarg;
            v5 = gettext("invalid output address radix `%c'; it must be one character from [doxn]");
            error(1, 0, v5, v4);
          }
        }
        else
        {
          if ( v3 != 100 )
            goto LABEL_66;
          qword_612300 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_4034ED;
          dword_6122E0 = 10;
          dword_6122E4 = 7;
        }
      }
      else
      {
        if ( v22 <= 65 )
        {
          if ( v22 == -131 )
          {
            sub_4079BF(
              (_DWORD)stdout,
              (unsigned int)"od",
              (unsigned int)"GNU coreutils",
              (_DWORD)off_612228,
              (unsigned int)"Jim Meyering",
              0,
              (char)a2);
            exit(0);
          }
          if ( v22 == -130 )
            sub_401A7A(0);
LABEL_102:
          sub_401A7A(1);
        }
        switch ( v22 )
        {
          case 'D':
            v19 = (v19 & (unsigned __int8)sub_403165((__int64)"u4")) != 0;
            break;
          case 'F':
LABEL_86:
            v19 = (v19 & (unsigned __int8)sub_403165((__int64)"fD")) != 0;
            break;
          case 'B':
            goto LABEL_92;
          default:
            goto LABEL_102;
        }
      }
    }
    if ( v22 == 108 )
      goto LABEL_90;
    if ( v22 > 108 )
    {
      if ( v22 == 118 )
      {
        v17 = 1;
        byte_612220 = 0;
      }
      else if ( v22 > 118 )
      {
        if ( v22 == 120 )
          goto LABEL_94;
        if ( v22 < 120 )
        {
          v17 = 1;
          v18 = 1;
          if ( optarg )
          {
            v28 = sub_4081EE(optarg, 0LL, 10LL, &v30, &locale);
            if ( v28 )
              sub_408108(v28, (unsigned int)longind[0], (unsigned int)(char)v22, &longopts, optarg);
            v32 = v30;
          }
          else
          {
            v32 = 32LL;
          }
        }
        else
        {
          if ( v22 != 128 )
            goto LABEL_102;
          byte_6122F1 = 1;
        }
      }
      else
      {
        switch ( v22 )
        {
          case 's':
            v19 = (v19 & (unsigned __int8)sub_403165((__int64)"d2")) != 0;
            break;
          case 't':
            v17 = 1;
            v19 = (v19 & (unsigned __int8)sub_403165(optarg)) != 0;
            break;
          case 'o':
LABEL_92:
            v19 = (v19 & (unsigned __int8)sub_403165((__int64)"o2")) != 0;
            break;
          default:
            goto LABEL_102;
        }
      }
    }
    else if ( v22 == 102 )
    {
      v19 = (v19 & (unsigned __int8)sub_403165((__int64)"fF")) != 0;
    }
    else if ( v22 > 102 )
    {
      switch ( v22 )
      {
        case 'i':
          v19 = (v19 & (unsigned __int8)sub_403165((__int64)"dI")) != 0;
          break;
        case 'j':
          v17 = 1;
          v25 = sub_4081EE(optarg, 0LL, 0LL, &qword_612308, "bEGKkMmPTYZ0");
          if ( v25 )
            sub_408108(v25, (unsigned int)longind[0], (unsigned int)(char)v22, &longopts, optarg);
          break;
        case 'h':
LABEL_94:
          v19 = (v19 & (unsigned __int8)sub_403165((__int64)"x2")) != 0;
          break;
        default:
          goto LABEL_102;
      }
    }
    else if ( v22 == 100 )
    {
      v19 = (v19 & (unsigned __int8)sub_403165((__int64)"u2")) != 0;
    }
    else
    {
      if ( v22 > 100 )
        goto LABEL_86;
      v19 = (v19 & (unsigned __int8)sub_403165((__int64)"c")) != 0;
    }
  }
}
