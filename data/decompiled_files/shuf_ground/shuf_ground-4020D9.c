#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  _BOOL4 v4; // eax
  __int64 v5; // rbx
  char *v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  __int64 v13; // rbx
  char *v14; // rax
  const char *v15; // rbx
  int *v16; // rax
  __int64 v17; // rbx
  char *v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  const char *v21; // rbx
  int *v22; // rax
  char *v23; // rbx
  int *v24; // rax
  const char *v25; // rbx
  int *v26; // rax
  char *v27; // rbx
  int *v28; // rax
  char v30; // [rsp+11h] [rbp-8Fh]
  char v31; // [rsp+12h] [rbp-8Eh]
  bool v32; // [rsp+13h] [rbp-8Dh]
  int v33; // [rsp+14h] [rbp-8Ch]
  int v34; // [rsp+18h] [rbp-88h]
  int v35; // [rsp+1Ch] [rbp-84h]
  const char **v36; // [rsp+20h] [rbp-80h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-78h] BYREF
  unsigned __int64 v38; // [rsp+30h] [rbp-70h]
  __int64 v39; // [rsp+38h] [rbp-68h]
  unsigned __int64 v40; // [rsp+40h] [rbp-60h]
  char *s1; // [rsp+48h] [rbp-58h]
  char *v42; // [rsp+50h] [rbp-50h]
  unsigned __int64 v43; // [rsp+58h] [rbp-48h]
  const char **v44; // [rsp+60h] [rbp-40h]
  char *v45; // [rsp+68h] [rbp-38h]
  char *v46; // [rsp+70h] [rbp-30h]
  const char **v47; // [rsp+78h] [rbp-28h]
  __int64 v48; // [rsp+80h] [rbp-20h]
  __int64 v49; // [rsp+88h] [rbp-18h]

  v30 = 0;
  v38 = -1LL;
  v39 = 0LL;
  v40 = -1LL;
  s1 = 0LL;
  v42 = 0LL;
  v31 = 10;
  v36 = 0LL;
  sub_402D04(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_4094F0(sub_402952);
  while ( 1 )
  {
    v33 = getopt_long(a1, a2, "ei:n:o:z", &longopts, 0LL);
    if ( v33 == -1 )
      break;
    if ( v33 == 105 )
    {
      v37 = 0LL;
      v46 = strchr(optarg, 45);
      v45 = optarg;
      v32 = v46 == 0LL;
      if ( sub_401CCC(v38, v39) )
      {
        v3 = gettext("multiple -i options specified");
        error(1, 0, v3);
      }
      if ( v46 )
      {
        *v46 = 0;
        v32 = (unsigned int)sub_40711A(optarg, 0LL, 10LL, &v37, 0LL) != 0;
        *v46 = 45;
        v38 = v37;
        v45 = v46 + 1;
      }
      v4 = sub_40711A(v45, 0LL, 10LL, &v37, 0LL) != 0;
      v39 = v37;
      v43 = v37 - v38 + 1;
      if ( (v32 || v4) | (v38 > v37) ^ (v43 == 0) )
      {
        v5 = sub_402E0F(optarg);
        v6 = gettext("invalid input range %s");
        error(1, 0, v6, v5);
      }
    }
    else if ( v33 > 105 )
    {
      if ( v33 == 111 )
      {
        if ( s1 && strcmp(s1, optarg) )
        {
          v10 = gettext("multiple output files specified");
          error(1, 0, v10);
        }
        s1 = optarg;
      }
      else if ( v33 > 111 )
      {
        if ( v33 == 122 )
        {
          v31 = 0;
        }
        else
        {
          if ( v33 != 128 )
            goto LABEL_41;
          if ( v42 && strcmp(v42, optarg) )
          {
            v11 = gettext("multiple random sources specified");
            error(1, 0, v11);
          }
          v42 = optarg;
        }
      }
      else
      {
        if ( v33 != 110 )
          goto LABEL_41;
        v34 = sub_40711A(optarg, 0LL, 10LL, &v37, 0LL);
        if ( v34 )
        {
          if ( v34 != 1 )
          {
            v8 = sub_402E0F(optarg);
            v9 = gettext("invalid line count %s");
            error(1, 0, v9, v8);
          }
        }
        else
        {
          v7 = v40;
          if ( v37 <= v40 )
            v7 = v37;
          v40 = v7;
        }
      }
    }
    else
    {
      if ( v33 == -130 )
        sub_401B97(0);
      if ( v33 != 101 )
      {
        if ( v33 == -131 )
        {
          sub_406C5B(
            (_DWORD)stdout,
            (unsigned int)"shuf",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_60C250,
            (unsigned int)"Paul Eggert",
            0,
            (char)a2);
          exit(0);
        }
LABEL_41:
        sub_401B97(1);
      }
      v30 = 1;
    }
  }
  v35 = a1 - optind;
  v47 = (const char **)&a2[optind];
  if ( v30 )
  {
    if ( sub_401CCC(v38, v39) )
    {
      v12 = gettext("cannot combine -e and -i options");
      error(1, 0, v12);
    }
    sub_401CF7((__int64)v47, v35, v31);
    v43 = v35;
    v44 = v47;
  }
  else if ( sub_401CCC(v38, v39) )
  {
    if ( v35 )
    {
      v13 = sub_402E0F(*v47);
      v14 = gettext("extra operand %s");
      error(0, 0, v14, v13);
      sub_401B97(1);
    }
    v43 = v39 - v38 + 1;
    v44 = 0LL;
  }
  else
  {
    if ( v35 )
    {
      if ( v35 != 1 )
      {
        v17 = sub_402E0F(v47[1]);
        v18 = gettext("extra operand %s");
        error(0, 0, v18, v17);
        sub_401B97(1);
      }
      if ( strcmp(*v47, "-") && !sub_402BB1(*v47, "r", stdin) )
      {
        v15 = *v47;
        v16 = __errno_location();
        error(1, *v16, "%s", v15);
      }
    }
    sub_402B24(stdin, 2LL);
    v43 = sub_401E26(stdin, v31, (char ***)&v36);
    v44 = v36;
  }
  v19 = v40;
  if ( v43 <= v40 )
    v19 = v43;
  v40 = v19;
  v20 = sub_404907(v19, v43);
  v48 = sub_4045EE(v42, v20);
  if ( !v48 )
  {
    v21 = (const char *)sub_404428(v42);
    v22 = __errno_location();
    error(1, *v22, "%s", v21);
  }
  if ( v30 != 1 && !sub_401CCC(v38, v39) && (unsigned int)sub_407586(stdin) )
  {
    v23 = gettext("read error");
    v24 = __errno_location();
    error(1, *v24, v23);
  }
  v49 = sub_404BA8(v48, v40, v43);
  if ( s1 && !sub_402BB1(s1, "w", stdout) )
  {
    v25 = (const char *)sub_404428(s1);
    v26 = __errno_location();
    error(1, *v26, "%s", v25);
  }
  if ( (unsigned int)sub_401FB7(v40, (__int64)v44, v38, v49, v31) )
  {
    v27 = gettext("write error");
    v28 = __errno_location();
    error(1, *v28, v27);
  }
  return 0LL;
}
