#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  char *v8; // rax
  const char *v9; // rbx
  int *v10; // rax
  __int64 v11; // rax
  int v12; // er8
  int v13; // er9
  bool v14; // [rsp+13h] [rbp-5Dh]
  int i; // [rsp+14h] [rbp-5Ch]
  int v16; // [rsp+18h] [rbp-58h]
  int v17; // [rsp+1Ch] [rbp-54h]
  unsigned __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  char *s1; // [rsp+28h] [rbp-48h]
  char **v20; // [rsp+30h] [rbp-40h]
  void *ptr; // [rsp+38h] [rbp-38h]
  __int64 v22; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-28h]
  unsigned __int64 v24; // [rsp+50h] [rbp-20h]
  __int64 v25; // [rsp+58h] [rbp-18h]

  v14 = 1;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  s1 = 0LL;
  sub_405179(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_409C80(sub_403E49);
  v23 = 3LL;
  v24 = -1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = getopt_long(a1, a2, "fn:s:uvxz", &longopts, 0LL);
        if ( v16 == -1 )
        {
          v20 = &a2[optind];
          v17 = a1 - optind;
          if ( a1 == optind )
          {
            v8 = gettext("missing file operand");
            error(0, 0, v8);
            sub_401DD0(1);
          }
          qword_60D340 = sub_406A20(s1, -1LL);
          if ( !qword_60D340 )
          {
            v9 = (const char *)sub_40685A(s1);
            v10 = __errno_location();
            error(1, *v10, "%s", v9);
          }
          sub_409C80(sub_403963);
          for ( i = 0; i < v17; ++i )
          {
            v11 = sub_40685A(v20[i]);
            ptr = (void *)sub_408C03(v11);
            if ( !strcmp(v20[i], "-") )
              v14 = (v14 & (unsigned __int8)sub_4032DF(1, (__int64)ptr, qword_60D340, (__int64)&v22, v12, v13)) != 0;
            else
              v14 = (v14 & (unsigned __int8)sub_403816(v20[i], (const char *)ptr, qword_60D340, &v22, v12, v13)) != 0;
            free(ptr);
          }
          exit(!v14);
        }
        if ( v16 != 115 )
          break;
        if ( (unsigned int)sub_408D05(optarg, 0LL, 0LL, &v18, "cbBkKMGTPEZY0") )
        {
          v6 = sub_40685A(optarg);
          v7 = gettext("%s: invalid file size");
          error(1, 0, v7, v6);
        }
        v24 = v18;
      }
      if ( v16 <= 115 )
        break;
      if ( v16 == 120 )
      {
        BYTE2(v25) = 1;
      }
      else if ( v16 > 120 )
      {
        if ( v16 == 122 )
        {
          BYTE3(v25) = 1;
        }
        else
        {
          if ( v16 != 128 )
            goto LABEL_37;
          if ( s1 && strcmp(s1, optarg) )
          {
            v5 = gettext("multiple random sources specified");
            error(1, 0, v5);
          }
          s1 = optarg;
        }
      }
      else if ( v16 == 117 )
      {
        LOBYTE(v25) = 1;
      }
      else
      {
        if ( v16 != 118 )
          goto LABEL_37;
        BYTE1(v25) = 1;
      }
    }
    if ( v16 == -130 )
      sub_401DD0(0);
    if ( v16 <= -130 )
    {
      if ( v16 == -131 )
      {
        sub_408846(
          (_DWORD)stdout,
          (unsigned int)"shred",
          (unsigned int)"GNU coreutils",
          (_DWORD)off_60D290,
          (unsigned int)"Colin Plumb",
          0,
          (char)a2);
        exit(0);
      }
LABEL_37:
      sub_401DD0(1);
    }
    if ( v16 == 102 )
    {
      LOBYTE(v22) = 1;
    }
    else
    {
      if ( v16 != 110 )
        goto LABEL_37;
      if ( (unsigned int)sub_408D05(optarg, 0LL, 10LL, &v18, 0LL) || v18 > 0xFFFFFFFF )
      {
        v3 = sub_40685A(optarg);
        v4 = gettext("%s: invalid number of passes");
        error(1, 0, v4, v3);
      }
      v23 = v18;
    }
  }
}
