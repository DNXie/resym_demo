#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax
  char *v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  __int64 v9; // rbx
  char *v10; // rax
  __int64 v11; // rbx
  char *v12; // rax
  __int64 v13; // rbx
  char *v14; // rax
  __int64 v15; // rbx
  char *v16; // rax
  __int64 v17; // rbx
  char *v18; // rax
  const char *v19; // rax
  char *v20; // rax
  char *v21; // rax
  int v22; // eax
  char *v23; // rbx
  int *v24; // rax
  char v25; // [rsp+25h] [rbp-4Bh]
  char v26; // [rsp+26h] [rbp-4Ah]
  char v27; // [rsp+27h] [rbp-49h]
  int longind; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+2Ch] [rbp-44h]
  unsigned int i; // [rsp+30h] [rbp-40h]
  int v31; // [rsp+34h] [rbp-3Ch]
  unsigned __int64 v32; // [rsp+38h] [rbp-38h] BYREF
  __int64 v33; // [rsp+40h] [rbp-30h] BYREF
  void *ptr; // [rsp+48h] [rbp-28h]
  __int64 v35; // [rsp+50h] [rbp-20h]
  __int64 v36; // [rsp+58h] [rbp-18h]

  v25 = 0;
  v26 = 0;
  v27 = 0;
  ptr = 0LL;
  v35 = 0LL;
  v32 = 0LL;
  sub_405A3C(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40B9E0(sub_4053DB);
  v29 = 0;
  if ( a1 <= 1 )
    v3 = 0LL;
  else
    v3 = sub_40A750(8LL * (a1 - 1));
  v36 = v3;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          longind = -1;
          v31 = getopt_long(a1, a2, "-0123456789D:FJN:S::TW:abcde::fh:i::l:mn::o:rs::tvw:", &longopts, &longind);
          if ( v31 == -1 )
          {
            if ( ptr )
            {
              sub_401D71((__int64)ptr);
              free(ptr);
            }
            if ( !qword_6103F8 )
            {
              if ( getenv("POSIXLY_CORRECT") && (unsigned __int8)sub_405721(2LL) != 1 )
                v19 = "%b %e %H:%M %Y";
              else
                v19 = "%Y-%m-%d %H:%M";
              qword_6103F8 = (__int64)v19;
            }
            if ( !qword_6103A0 )
              qword_6103A0 = 1LL;
            if ( byte_610370 && byte_610374 )
            {
              v20 = gettext("cannot specify number of columns when printing in parallel");
              error(1, 0, v20);
            }
            if ( byte_610370 && byte_61037A )
            {
              v21 = gettext("cannot specify both printing across and printing in parallel");
              error(1, 0, v21);
            }
            if ( v25 )
            {
              if ( v26 )
              {
                if ( byte_610370 || byte_610374 )
                {
                  byte_610380 = 1;
                  if ( v27 )
                    byte_6103D9 = 1;
                }
                else
                {
                  byte_610381 = 1;
                }
              }
              else if ( byte_6103D9 != 1 && v27 && (byte_610370 || byte_610374) )
              {
                if ( byte_610380 != 1 )
                {
                  byte_610381 = 1;
                  if ( dword_6103DC > 0 )
                    byte_6103D9 = 1;
                }
                else
                {
                  byte_6103D9 = 1;
                }
              }
            }
            while ( optind < a1 )
            {
              v22 = v29++;
              *(_QWORD *)(v36 + 8LL * v22) = a2[optind++];
            }
            if ( v29 )
            {
              if ( byte_610370 )
              {
                sub_40348D(v29, v36);
              }
              else
              {
                for ( i = 0; v29 > i; ++i )
                  sub_40348D(1LL, 8LL * i + v36);
              }
            }
            else
            {
              sub_40348D(0LL, 0LL);
            }
            sub_40511C();
            if ( byte_610379 && (unsigned int)sub_40B42C(stdin) == -1 )
            {
              v23 = gettext("standard input");
              v24 = __errno_location();
              error(1, *v24, v23);
            }
            if ( byte_61039C )
              exit(1);
            exit(0);
          }
          if ( (unsigned int)(v31 - 48) > 9 )
            break;
          if ( v35 + 1 >= v32 )
            ptr = (void *)sub_40A7E6(ptr, &v32);
          v4 = v35++;
          *((_BYTE *)ptr + v4) = v31;
          *((_BYTE *)ptr + v35) = 0;
        }
        v35 = 0LL;
        if ( v31 != 101 )
          break;
        if ( optarg )
          sub_4029C3(optarg, 101LL, &byte_61024C, &dword_610250);
        byte_610388 = 1;
      }
      if ( v31 <= 101 )
        break;
      if ( v31 == 111 )
      {
        if ( (unsigned int)sub_40A9E8(optarg, 0LL, 10LL, &v33, &locale) || v33 < 0 || v33 > 0x7FFFFFFF )
        {
          v13 = sub_405B47(optarg);
          v14 = gettext("`-o MARGIN' invalid line offset: %s");
          error(1, 0, v14, v13);
        }
        dword_610390 = v33;
      }
      else if ( v31 > 111 )
      {
        if ( v31 == 118 )
        {
          byte_6103D0 = 1;
        }
        else if ( v31 > 118 )
        {
          switch ( v31 )
          {
            case 128:
              sub_401D71(optarg);
              free(ptr);
              ptr = 0LL;
              v32 = 0LL;
              break;
            case 129:
              if ( optarg )
              {
                if ( (unsigned __int8)sub_401C3E(longind, 0, (_BYTE *)optarg) != 1 )
                {
                  v7 = sub_405B47(optarg);
                  v8 = gettext("invalid page range %s");
                  error(1, 0, v8, v7);
                }
              }
              else
              {
                v6 = gettext("`--pages=FIRST_PAGE[:LAST_PAGE]' missing argument");
                error(1, 0, v6);
              }
              break;
            case 119:
              v25 = 1;
              v26 = 1;
              if ( (unsigned int)sub_40A9E8(optarg, 0LL, 10LL, &v33, &locale) || v33 <= 0 || v33 > 0x7FFFFFFF )
              {
                v15 = sub_405B47(optarg);
                v16 = gettext("`-w PAGE_WIDTH' invalid number of characters: %s");
                error(1, 0, v16, v15);
              }
              if ( byte_610380 != 1 )
                dword_610248 = v33;
              break;
            default:
              goto LABEL_121;
          }
        }
        else
        {
          switch ( v31 )
          {
            case 's':
              v25 = 1;
              v27 = 1;
              if ( byte_6103D9 != 1 && optarg )
                goto LABEL_100;
              break;
            case 't':
              byte_610240 = 0;
              byte_610375 = 1;
              break;
            case 'r':
              byte_6103D8 = 1;
              break;
            default:
              goto LABEL_121;
          }
        }
      }
      else if ( v31 == 105 )
      {
        if ( optarg )
          sub_4029C3(optarg, 105LL, &byte_610254, &dword_610258);
        byte_610389 = 1;
      }
      else if ( v31 > 105 )
      {
        if ( v31 == 109 )
        {
          byte_610370 = 1;
          byte_610241 = 0;
        }
        else if ( v31 > 109 )
        {
          byte_6103C0 = 1;
          if ( optarg )
            sub_4029C3(optarg, 110LL, &byte_610268, &dword_610278);
        }
        else
        {
          if ( v31 != 108 )
            goto LABEL_121;
          if ( (unsigned int)sub_40A9E8(optarg, 0LL, 10LL, &v33, &locale) || v33 <= 0 || v33 > 0x7FFFFFFF )
          {
            v9 = sub_405B47(optarg);
            v10 = gettext("`-l PAGE_LENGTH' invalid number of lines: %s");
            error(1, 0, v10, v9);
          }
          dword_610244 = v33;
        }
      }
      else
      {
        if ( v31 == 102 )
          goto LABEL_73;
        if ( v31 != 104 )
          goto LABEL_121;
        qword_6103F0 = optarg;
      }
    }
    if ( v31 == 78 )
    {
      byte_610270 = 0;
      if ( (unsigned int)sub_40A9E8(optarg, 0LL, 10LL, &v33, &locale) || v33 > 0x7FFFFFFF )
      {
        v11 = sub_405B47(optarg);
        v12 = gettext("`-N NUMBER' invalid starting line number: %s");
        error(1, 0, v12, v11);
      }
      dword_610274 = v33;
    }
    else if ( v31 > 78 )
    {
      if ( v31 == 97 )
      {
        byte_61037A = 1;
        byte_610241 = 0;
      }
      else if ( v31 > 97 )
      {
        if ( v31 == 99 )
        {
          byte_6103D1 = 1;
        }
        else if ( v31 > 99 )
        {
          byte_6103D2 = 1;
        }
        else
        {
          byte_61037B = 1;
        }
      }
      else
      {
        switch ( v31 )
        {
          case 'T':
            byte_610240 = 0;
            byte_610375 = 0;
            break;
          case 'W':
            v26 = 0;
            byte_610380 = 1;
            if ( (unsigned int)sub_40A9E8(optarg, 0LL, 10LL, &v33, &locale) || v33 <= 0 || v33 > 0x7FFFFFFF )
            {
              v17 = sub_405B47(optarg);
              v18 = gettext("`-W PAGE_WIDTH' invalid number of characters: %s");
              error(1, 0, v18, v17);
            }
            dword_610248 = v33;
            break;
          case 'S':
            v27 = 0;
            dest = (char *)sub_401BA6((__int64)&locale);
            dword_6103DC = 0;
            byte_6103D9 = 1;
            if ( optarg )
LABEL_100:
              sub_401E05((const char *)optarg);
            break;
          default:
            goto LABEL_121;
        }
      }
    }
    else if ( v31 == 1 )
    {
      if ( qword_6103A0
        || *(_BYTE *)optarg != 43
        || (unsigned __int8)sub_401C3E(0xFFFFFFFE, 43, (_BYTE *)(optarg + 1)) != 1 )
      {
        v5 = v29++;
        *(_QWORD *)(v36 + 8LL * v5) = optarg;
      }
    }
    else
    {
      if ( v31 <= 1 )
      {
        if ( v31 == -131 )
        {
          sub_40A4E8(
            (_DWORD)stdout,
            (unsigned int)"pr",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_610298,
            (unsigned int)"Pete TerMaat",
            (unsigned int)"Roland Huebner",
            0);
          exit(0);
        }
        if ( v31 == -130 )
          sub_40517C(0LL);
LABEL_121:
        sub_40517C(1LL);
      }
      switch ( v31 )
      {
        case 'F':
LABEL_73:
          byte_610378 = 1;
          break;
        case 'J':
          byte_610381 = 1;
          break;
        case 'D':
          qword_6103F8 = optarg;
          break;
        default:
          goto LABEL_121;
      }
    }
  }
}
