#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  __int64 v5; // rbx
  char *v6; // rax
  int v7; // eax
  const char *v8; // rbx
  int *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  int v12; // eax
  int i; // [rsp+10h] [rbp-20h]
  int j; // [rsp+10h] [rbp-20h]
  int v15; // [rsp+14h] [rbp-1Ch]
  __int64 v16[3]; // [rsp+18h] [rbp-18h] BYREF

  sub_405FCA(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40C9F0(sub_405C82);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v15 = getopt_long(a1, a2, "AF:GM:ORS:TW:b:i:fg:o:trw:", &longopts, 0LL);
            if ( v15 == -1 )
            {
              if ( optind == a1 )
              {
                qword_610910 = sub_4095E8(8LL);
                qword_610918 = sub_4095E8(4LL);
                dword_610908 = 1;
                *(_QWORD *)qword_610910 = 0LL;
              }
              else if ( byte_6102B0 )
              {
                dword_610908 = a1 - optind;
                qword_610910 = sub_4095E8(8LL * (a1 - optind));
                qword_610918 = sub_4095E8(4LL * dword_610908);
                for ( i = 0; i < dword_610908; ++i )
                {
                  if ( *a2[optind] && strcmp(a2[optind], "-") )
                    *(_QWORD *)(qword_610910 + 8LL * i) = a2[optind];
                  else
                    *(_QWORD *)(8LL * i + qword_610910) = 0LL;
                  ++optind;
                }
              }
              else
              {
                dword_610908 = 1;
                qword_610910 = sub_4095E8(8LL);
                qword_610918 = sub_4095E8(4LL);
                if ( *a2[optind] && strcmp(a2[optind], "-") )
                  *(_QWORD *)qword_610910 = a2[optind];
                else
                  *(_QWORD *)qword_610910 = 0LL;
                if ( ++optind < a1 )
                {
                  if ( !sub_405E77(a2[optind], "w", stdout) )
                  {
                    v8 = a2[optind];
                    v9 = __errno_location();
                    error(1, *v9, "%s", v8);
                  }
                  ++optind;
                }
                if ( optind < a1 )
                {
                  v10 = sub_406B26(a2[optind]);
                  v11 = gettext("extra operand %s");
                  error(0, 0, v11, v10);
                  sub_404E33(1);
                }
              }
              if ( !dword_610384 )
              {
                if ( byte_6102B0 )
                  v12 = 1;
                else
                  v12 = 2;
                dword_610384 = v12;
              }
              sub_4023CB();
              if ( qword_610390 )
                sub_402857((const char *)qword_610390);
              if ( qword_6103A0 )
              {
                sub_4028F1((const char *)qword_6103A0, qword_6108D0);
                if ( !qword_6108E0 )
                  qword_6103A0 = 0LL;
              }
              if ( qword_610398 )
              {
                sub_4028F1((const char *)qword_610398, qword_6108F0);
                if ( !qword_610900 )
                  qword_610398 = 0LL;
              }
              nmemb = 0LL;
              dword_61090C = 0;
              dword_6108C0 = 0;
              dword_6108C4 = 0;
              for ( j = 0; j < dword_610908; ++j )
              {
                sub_40251F(*(const char **)(8LL * j + qword_610910), &qword_610920);
                sub_402A7F();
                *(_DWORD *)(qword_610918 + 4LL * j) = ++dword_61090C;
              }
              sub_402831();
              sub_403593();
              sub_404D86();
              exit(0);
            }
            if ( v15 != 83 )
              break;
            qword_6103C0 = sub_401F81((const char *)optarg);
          }
          if ( v15 <= 83 )
            break;
          if ( v15 == 103 )
          {
            if ( (unsigned int)sub_40992B(optarg, 0LL, 0LL, v16, 0LL) || !v16[0] || v16[0] > 0x7FFFFFFFuLL )
            {
              v3 = sub_407F6B(optarg);
              v4 = gettext("invalid gap width: %s");
              error(1, 0, v4, v3);
            }
            dword_6102B8 = v16[0];
          }
          else if ( v15 > 103 )
          {
            if ( v15 == 114 )
            {
              byte_610381 = 1;
            }
            else if ( v15 > 114 )
            {
              if ( v15 != 116 )
              {
                if ( v15 != 119 )
                  goto LABEL_36;
                if ( (unsigned int)sub_40992B(optarg, 0LL, 0LL, v16, 0LL) || !v16[0] || v16[0] > 0x7FFFFFFFuLL )
                {
                  v5 = sub_407F6B(optarg);
                  v6 = gettext("invalid line width: %s");
                  error(1, 0, v6, v5);
                }
                dword_6102B4 = v16[0];
              }
            }
            else if ( v15 == 105 )
            {
              qword_6103A0 = optarg;
            }
            else
            {
              if ( v15 != 111 )
                goto LABEL_36;
              qword_610398 = optarg;
            }
          }
          else if ( v15 == 87 )
          {
            qword_610520 = sub_401F81((const char *)optarg);
            if ( !*(_BYTE *)qword_610520 )
              qword_610520 = 0LL;
          }
          else if ( v15 > 87 )
          {
            if ( v15 == 98 )
            {
              qword_610390 = optarg;
            }
            else
            {
              if ( v15 != 102 )
                goto LABEL_36;
              byte_610388 = 1;
            }
          }
          else
          {
            if ( v15 != 84 )
              goto LABEL_36;
            dword_610384 = 3;
          }
        }
        if ( v15 != 70 )
          break;
        s = (char *)sub_401F81((const char *)optarg);
      }
      if ( v15 <= 70 )
        break;
      if ( v15 == 77 )
      {
        off_6102C8[0] = (char *)optarg;
      }
      else if ( v15 > 77 )
      {
        if ( v15 == 79 )
        {
          dword_610384 = 2;
        }
        else
        {
          if ( v15 != 82 )
            goto LABEL_36;
          byte_610382 = 1;
        }
      }
      else
      {
        if ( v15 != 71 )
          goto LABEL_36;
        byte_6102B0 = 0;
      }
    }
    if ( v15 == -130 )
      goto LABEL_64;
    if ( v15 <= -130 )
      break;
    if ( v15 == 10 )
    {
      dword_610384 = dword_40D688[sub_405B46("--format", optarg, off_40D670, dword_40D688, 4LL, off_6102D8)];
LABEL_64:
      sub_404E33(0);
    }
    if ( v15 != 65 )
      goto LABEL_36;
    byte_610380 = 1;
  }
  if ( v15 == -131 )
  {
    v7 = sub_406836("F. Pinard", &unk_40D6F9);
    sub_409380((_DWORD)stdout, (unsigned int)"ptx", (unsigned int)"GNU coreutils", (_DWORD)off_6102D0, v7, 0, (char)a2);
    exit(0);
  }
LABEL_36:
  sub_404E33(1);
}
