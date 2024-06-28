#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  char *v7; // rbx
  int *v8; // rax
  char *v9; // rax
  int v10; // eax
  char *v11; // rax
  __int64 v12; // rbx
  char *v13; // rax
  __int64 v14; // r12
  char *v15; // rbx
  int *v16; // rax
  char *v17; // rbx
  int *v18; // rax
  __int64 v19; // r12
  char *v20; // rbx
  int *v21; // rax
  char *v22; // rbx
  int *v23; // rax
  __int64 v24; // r12
  char *v25; // rbx
  int *v26; // rax
  char *v27; // rbx
  int *v28; // rax
  char *v29; // rbx
  int *v30; // rax
  char *v31; // rbx
  int *v32; // rax
  char *v33; // rbx
  int *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r12
  char *v38; // rbx
  int *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r12
  char *v43; // rbx
  int *v44; // rax
  int v45; // eax
  const char *v46; // rbx
  int *v47; // rax
  char v48; // [rsp+1Fh] [rbp-61h]
  int longind; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v50; // [rsp+24h] [rbp-5Ch]
  int v51; // [rsp+28h] [rbp-58h]
  int status; // [rsp+2Ch] [rbp-54h]
  char *s; // [rsp+30h] [rbp-50h] BYREF
  __int64 v54; // [rsp+38h] [rbp-48h] BYREF
  char *v55; // [rsp+40h] [rbp-40h] BYREF
  __int64 v56; // [rsp+48h] [rbp-38h]
  __int64 v57; // [rsp+50h] [rbp-30h]
  __int64 v58; // [rsp+58h] [rbp-28h]
  __int64 v59; // [rsp+60h] [rbp-20h]
  char *v60; // [rsp+68h] [rbp-18h]

  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  s = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v48 = 0;
  sub_402054(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404740(sub_401EB2);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        longind = 0;
        v51 = getopt_long(a1, a2, "+r:t:u:l:c", &longopts, &longind);
        if ( v51 == -1 )
        {
          if ( a1 != optind )
          {
            if ( !v58 && !v56 && !v59 && !v57 && v48 != 1 )
            {
              if ( optind >= a1 )
              {
                v9 = gettext("you must specify -c, -t, -u, -l, -r, or context");
                error(0, 0, v9);
                sub_4015A8(1);
              }
              v10 = optind++;
              v60 = a2[v10];
            }
            if ( optind >= a1 )
            {
              v11 = gettext("no command specified");
              error(0, 0, v11);
              sub_4015A8(1);
            }
            v12 = qword_607230;
            v13 = gettext("%s may be used only on a SELinux kernel");
            error(1, 0, v13, v12);
            if ( v60 )
            {
              v50 = sub_4013DF(v60);
              if ( !v50 )
              {
                v14 = sub_403778(v60);
                v15 = gettext("failed to create security context: %s");
                v16 = __errno_location();
                error(1, *v16, v15, v14);
              }
            }
            else
            {
              if ( (int)sub_40132D(&s) < 0 )
              {
                v17 = gettext("failed to get current context");
                v18 = __errno_location();
                error(1, *v18, v17);
              }
              if ( v48 )
              {
                if ( (unsigned int)sub_401355(a2[optind], &v54) == -1 )
                {
                  v19 = sub_40215F(a2[optind]);
                  v20 = gettext("failed to get security context of %s");
                  v21 = __errno_location();
                  error(1, *v21, v20, v19);
                }
                if ( (unsigned int)sub_4013B3(s, v54, 0LL, &v55) )
                {
                  v22 = gettext("failed to compute a new context");
                  v23 = __errno_location();
                  error(1, *v23, v22);
                }
                sub_40134B();
                sub_40134B();
                s = v55;
              }
              v50 = sub_4013DF(s);
              if ( !v50 )
              {
                v24 = sub_403778(s);
                v25 = gettext("failed to create security context: %s");
                v26 = __errno_location();
                error(1, *v26, v25, v24);
              }
              if ( v58 && (unsigned int)sub_40141A(v50, v58) )
              {
                v27 = gettext("failed to set new user %s");
                v28 = __errno_location();
                error(1, *v28, v27, v58);
              }
              if ( v59 && (unsigned int)sub_40147D(v50, v59) )
              {
                v29 = gettext("failed to set new type %s");
                v30 = __errno_location();
                error(1, *v30, v29, v59);
              }
              if ( v57 && (unsigned int)sub_40145C(v50, v57) )
              {
                v31 = gettext("failed to set new range %s");
                v32 = __errno_location();
                error(1, *v32, v31, v57);
              }
              if ( v56 && (unsigned int)sub_40143B(v50, v56) )
              {
                v33 = gettext("failed to set new role %s");
                v34 = __errno_location();
                error(1, *v34, v33, v56);
              }
            }
            v35 = sub_4013FD(v50);
            if ( (int)sub_401377(v35) < 0 )
            {
              v36 = sub_4013FD(v50);
              v37 = sub_403778(v36);
              v38 = gettext("invalid context: %s");
              v39 = __errno_location();
              error(1, *v39, v38, v37);
            }
            v40 = sub_4013FD(v50);
            if ( (unsigned int)sub_401395(v40) )
            {
              v41 = sub_4013FD(v50);
              v42 = sub_40215F(v41);
              v43 = gettext("unable to set security context %s");
              v44 = __errno_location();
              error(1, *v44, v43, v42);
            }
            if ( s )
              sub_40134B();
            execvp(a2[optind], &a2[optind]);
            if ( *__errno_location() == 2 )
              v45 = 127;
            else
              v45 = 126;
            status = v45;
            v46 = a2[optind];
            v47 = __errno_location();
            error(0, *v47, "%s", v46);
            exit(status);
          }
          if ( (int)sub_40132D(&s) < 0 )
          {
            v7 = gettext("failed to get current context");
            v8 = __errno_location();
            error(1, *v8, v7);
          }
          fputs_unlocked(s, stdout);
          fputc_unlocked(10, stdout);
          exit(0);
        }
        if ( v51 != 108 )
          break;
        if ( v57 )
        {
          v6 = gettext("multiple levelranges");
          error(1, 0, v6);
        }
        v57 = optarg;
      }
      if ( v51 <= 108 )
        break;
      switch ( v51 )
      {
        case 't':
          if ( v59 )
          {
            v4 = gettext("multiple types");
            error(1, 0, v4);
          }
          v59 = optarg;
          break;
        case 'u':
          if ( v58 )
          {
            v5 = gettext("multiple users");
            error(1, 0, v5);
          }
          v58 = optarg;
          break;
        case 'r':
          if ( v56 )
          {
            v3 = gettext("multiple roles");
            error(1, 0, v3);
          }
          v56 = optarg;
          break;
        default:
          goto LABEL_29;
      }
    }
    if ( v51 == -130 )
      sub_4015A8(0);
    if ( v51 != 99 )
    {
      if ( v51 == -131 )
      {
        sub_404029(
          (_DWORD)stdout,
          (unsigned int)"runcon",
          (unsigned int)"GNU coreutils",
          (_DWORD)off_607180,
          (unsigned int)"Russell Coker",
          0,
          (char)a2);
        exit(0);
      }
LABEL_29:
      sub_4015A8(1);
    }
    v48 = 1;
  }
}
