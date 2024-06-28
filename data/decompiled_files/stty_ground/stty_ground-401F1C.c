#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  int v4; // eax
  char *v5; // rax
  char *v6; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // er8
  int v10; // er9
  int *v11; // rax
  int v12; // ecx
  int v13; // er8
  int v14; // er9
  int v15; // eax
  char *v16; // rbx
  int *v17; // rax
  int *v18; // rax
  __int64 v19; // rbx
  char *v20; // rax
  __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // rbx
  char *v24; // rax
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rbx
  char *v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rbx
  char *v34; // rax
  __int64 v35; // rbx
  char *v36; // rax
  __int64 v37; // rbx
  char *v38; // rax
  int *v39; // rax
  int *v40; // rax
  char *v41; // rax
  char v43; // [rsp+1Dh] [rbp-E3h]
  char v44; // [rsp+1Eh] [rbp-E2h]
  char v45; // [rsp+1Fh] [rbp-E1h]
  char v46; // [rsp+20h] [rbp-E0h]
  char v47; // [rsp+21h] [rbp-DFh]
  char v48; // [rsp+22h] [rbp-DEh]
  unsigned __int8 v49; // [rsp+23h] [rbp-DDh]
  unsigned int v50; // [rsp+24h] [rbp-DCh]
  int v51; // [rsp+28h] [rbp-D8h]
  int v52; // [rsp+2Ch] [rbp-D4h]
  int i; // [rsp+30h] [rbp-D0h]
  int j; // [rsp+34h] [rbp-CCh]
  int k; // [rsp+34h] [rbp-CCh]
  int v56; // [rsp+38h] [rbp-C8h]
  int v57; // [rsp+3Ch] [rbp-C4h]
  const char *v58; // [rsp+40h] [rbp-C0h]
  char *v59; // [rsp+48h] [rbp-B8h]
  char *s1; // [rsp+50h] [rbp-B0h]
  __int64 v61; // [rsp+58h] [rbp-A8h]
  struct termios termios_p; // [rsp+60h] [rbp-A0h] BYREF
  int v63; // [rsp+9Ch] [rbp-64h] BYREF
  struct termios s2; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v65; // [rsp+E8h] [rbp-18h]

  v65 = __readfsqword(0x28u);
  memset(&termios_p, 0, 0x38uLL);
  termios_p.c_ospeed = 0;
  v51 = 0;
  v52 = 1;
  v47 = 1;
  v58 = 0LL;
  sub_404842(*a2, a2, &v63);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40D4B0(sub_4046A0);
  v50 = 0;
  v45 = 0;
  v46 = 0;
  opterr = 0;
  while ( 1 )
  {
    v56 = getopt_long(a1 - v51, &a2[v51], "-agF:", &longopts, 0LL);
    if ( v56 == -1 )
    {
      if ( v45 && v46 )
      {
        v5 = gettext("the options for verbose and stty-readable output styles are\nmutually exclusive");
        error(1, 0, v5);
      }
      if ( v47 != 1 && (v45 || v46) )
      {
        v6 = gettext("when specifying an output style, modes may not be set");
        error(1, 0, v6);
      }
      if ( v58 )
      {
        v59 = (char *)v58;
        if ( (int)sub_40796F(0LL, v58, 2048LL, 0LL) < 0 )
        {
          v11 = __errno_location();
          error(1, *v11, "%s", v58);
        }
        v57 = sub_40763B(0, 3, v7, v8, v9, v10, (char)a2);
        if ( v57 == -1
          || (v15 = v57, BYTE1(v15) = BYTE1(v57) & 0xF7, (int)sub_40763B(0, 4, v15, v12, v13, v14, (char)a2) < 0) )
        {
          v16 = gettext("%s: couldn't reset non-blocking mode");
          v17 = __errno_location();
          error(1, *v17, v16, v58);
        }
      }
      else
      {
        v59 = gettext("standard input");
      }
      if ( tcgetattr(0, &termios_p) )
      {
        v18 = __errno_location();
        error(1, *v18, "%s", v59);
      }
      if ( v45 || v46 || v47 )
      {
        dword_6132C4 = sub_4036C1();
        dword_6132C8 = 0;
        sub_4037B4(v50, &termios_p, v59);
        exit(0);
      }
      v44 = 0;
      v43 = 0;
      for ( i = 1; ; ++i )
      {
        if ( i >= a1 )
        {
          if ( v43 )
          {
            memset(&s2, 0, 0x38uLL);
            s2.c_ospeed = 0;
            if ( tcsetattr(0, 1, &termios_p) )
            {
              v39 = __errno_location();
              error(1, *v39, "%s", v59);
            }
            if ( tcgetattr(0, &s2) )
            {
              v40 = __errno_location();
              error(1, *v40, "%s", v59);
            }
            if ( memcmp(&termios_p, &s2, 0x3CuLL) )
            {
              s2.c_cflag &= 0xEFF0FFFF;
              if ( v44 || memcmp(&termios_p, &s2, 0x3CuLL) )
              {
                v41 = gettext("%s: unable to perform all requested operations");
                error(1, 0, v41, v59);
              }
            }
          }
          exit(0);
        }
        s1 = a2[i];
        v48 = 0;
        v49 = 0;
        if ( s1 )
        {
          if ( *s1 == 45 )
          {
            ++s1;
            v49 = 1;
          }
          for ( j = 0; ; ++j )
          {
            if ( !(&off_40D860)[4 * j] )
              goto LABEL_51;
            if ( !strcmp(s1, (&off_40D860)[4 * j]) )
              break;
          }
          v48 = sub_402CD7(&(&off_40D860)[4 * j], v49, &termios_p);
          v43 = 1;
LABEL_51:
          if ( v48 != 1 && v49 )
          {
            v19 = sub_40494D(s1 - 1);
            v20 = gettext("invalid argument %s");
            error(0, 0, v20, v19);
            sub_401B0F(1);
          }
          if ( v48 != 1 )
          {
            for ( k = 0; ; ++k )
            {
              if ( !(&off_40E3A0)[3 * k] )
                goto LABEL_62;
              if ( !strcmp(s1, (&off_40E3A0)[3 * k]) )
                break;
            }
            if ( a1 - 1 == i )
            {
              v21 = sub_40494D(s1);
              v22 = gettext("missing argument to %s");
              error(0, 0, v22, v21);
              sub_401B0F(1);
            }
            v48 = 1;
            sub_40334B(&(&off_40E3A0)[3 * k], a2[++i], &termios_p);
            v43 = 1;
          }
LABEL_62:
          if ( v48 != 1 )
          {
            if ( !strcmp(s1, "ispeed") )
            {
              if ( a1 - 1 == i )
              {
                v23 = sub_40494D(s1);
                v24 = gettext("missing argument to %s");
                error(0, 0, v24, v23);
                sub_401B0F(1);
              }
              sub_403497(0LL, a2[++i], &termios_p);
              v44 = 1;
              v43 = 1;
            }
            else if ( !strcmp(s1, "ospeed") )
            {
              if ( a1 - 1 == i )
              {
                v25 = sub_40494D(s1);
                v26 = gettext("missing argument to %s");
                error(0, 0, v26, v25);
                sub_401B0F(1);
              }
              sub_403497(1LL, a2[++i], &termios_p);
              v44 = 1;
              v43 = 1;
            }
            else if ( !strcmp(s1, "rows") )
            {
              if ( a1 - 1 == i )
              {
                v27 = sub_40494D(s1);
                v28 = gettext("missing argument to %s");
                error(0, 0, v28, v27);
                sub_401B0F(1);
              }
              v29 = sub_4045EC(a2[++i], 0x7FFFFFFFLL);
              sub_403524(v29, 0xFFFFFFFFLL, v59);
            }
            else if ( !strcmp(s1, "cols") || !strcmp(s1, "columns") )
            {
              if ( a1 - 1 == i )
              {
                v30 = sub_40494D(s1);
                v31 = gettext("missing argument to %s");
                error(0, 0, v31, v30);
                sub_401B0F(1);
              }
              v32 = sub_4045EC(a2[++i], 0x7FFFFFFFLL);
              sub_403524(0xFFFFFFFFLL, v32, v59);
            }
            else if ( !strcmp(s1, "size") )
            {
              dword_6132C4 = sub_4036C1();
              dword_6132C8 = 0;
              sub_4035F0(0LL, v59);
            }
            else if ( !strcmp(s1, "line") )
            {
              if ( a1 - 1 == i )
              {
                v33 = sub_40494D(s1);
                v34 = gettext("missing argument to %s");
                error(0, 0, v34, v33);
                sub_401B0F(1);
              }
              v61 = sub_4045EC(a2[++i], -1LL);
              termios_p.c_line = v61;
              if ( (unsigned __int8)v61 != v61 )
              {
                v35 = sub_40494D(a2[i]);
                v36 = gettext("invalid line discipline %s");
                error(0, 0, v36, v35);
              }
              v43 = 1;
            }
            else if ( !strcmp(s1, "speed") )
            {
              dword_6132C4 = sub_4036C1();
              sub_403E6E(&termios_p, 0LL);
            }
            else if ( (unsigned int)sub_404219(s1) == -1 )
            {
              if ( (unsigned __int8)sub_404102(s1, &termios_p) != 1 )
              {
                v37 = sub_40494D(s1);
                v38 = gettext("invalid argument %s");
                error(0, 0, v38, v37);
                sub_401B0F(1);
              }
              v43 = 1;
            }
            else
            {
              sub_403497(2LL, s1, &termios_p);
              v44 = 1;
              v43 = 1;
            }
          }
        }
      }
    }
    if ( v56 == 70 )
    {
      if ( v58 )
      {
        v3 = gettext("only one device may be specified");
        error(1, 0, v3);
      }
      v58 = (const char *)optarg;
    }
    else
    {
      if ( v56 <= 70 )
      {
        if ( v56 == -131 )
        {
          sub_406817(
            (_DWORD)stdout,
            (unsigned int)"stty",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_613210,
            (unsigned int)"David MacKenzie",
            0,
            (char)a2);
          exit(0);
        }
        if ( v56 == -130 )
          sub_401B0F(0);
LABEL_17:
        v47 = 0;
        v51 += v52;
        v52 = 1;
        optind = 0;
        goto LABEL_19;
      }
      if ( v56 == 97 )
      {
        v45 = 1;
        v50 = 1;
      }
      else
      {
        if ( v56 != 103 )
          goto LABEL_17;
        v46 = 1;
        v50 = 2;
      }
    }
LABEL_19:
    while ( v52 < optind )
    {
      v4 = v52++;
      (&a2[v51])[v4] = 0LL;
    }
  }
}
