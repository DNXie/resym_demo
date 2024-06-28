#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rbx
  char *v6; // rax
  int v7; // eax
  char *v8; // rax
  char *v9; // rbx
  int *v10; // rax
  char *v11; // rbx
  int *v12; // rax
  char *v13; // r12
  int v14; // ebx
  int *v15; // rax
  int v16; // eax
  int v17; // eax
  const char *v18; // rbx
  int *v19; // rax
  int v20; // [rsp+18h] [rbp-48h]
  int v21; // [rsp+1Ch] [rbp-44h]
  unsigned int v22; // [rsp+28h] [rbp-38h]
  int v23; // [rsp+28h] [rbp-38h]
  int status; // [rsp+2Ch] [rbp-34h]
  __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  char *v26; // [rsp+38h] [rbp-28h]
  char *v27; // [rsp+40h] [rbp-20h]
  char **argv; // [rsp+48h] [rbp-18h]

  v20 = 10;
  v26 = 0LL;
  sub_401D13(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40145D(0x7Du);
  sub_404900(sub_401B71);
  v21 = 1;
  while ( v21 < a1 )
  {
    v27 = a2[v21];
    if ( *v27 == 45 && (v27[1] != 45 && v27[1] != 43 ? (v3 = 0) : (v3 = 1), (unsigned int)(v27[v3 + 1] - 48) <= 9) )
    {
      v26 = v27 + 1;
      ++v21;
    }
    else
    {
      argv = &a2[v21 - 1];
      *argv = *a2;
      optind = 0;
      v4 = getopt_long(1 - v21 + a1, argv, "+n:", &longopts, 0LL);
      v21 += optind - 1;
      if ( v4 == -130 )
        sub_40157F(0);
      if ( v4 <= -130 )
      {
        if ( v4 == -131 )
        {
          sub_403CE8(
            (_DWORD)stdout,
            (unsigned int)"nice",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_6071A0,
            (unsigned int)"David MacKenzie",
            0,
            (char)a2);
          exit(0);
        }
LABEL_18:
        sub_40157F(125);
      }
      if ( v4 != -1 )
      {
        if ( v4 != 110 )
          goto LABEL_18;
        v26 = (char *)optarg;
      }
      if ( v4 == -1 )
        break;
    }
  }
  if ( v26 )
  {
    if ( (unsigned int)sub_4041E8(v26, 0LL, 10LL, &v25, locale) > 1 )
    {
      v5 = sub_401E1E(v26);
      v6 = gettext("invalid adjustment %s");
      error(125, 0, v6, v5);
    }
    if ( v25 == -39 || v25 >= -38 )
    {
      v7 = v25;
      if ( v25 > 39 )
        v7 = 39;
    }
    else
    {
      v7 = -39;
    }
    v20 = v7;
  }
  if ( v21 == a1 )
  {
    if ( v26 )
    {
      v8 = gettext("a command must be given with an adjustment");
      error(0, 0, v8);
      sub_40157F(125);
    }
    *__errno_location() = 0;
    v22 = getpriority(PRIO_PROCESS, 0);
    if ( v22 == -1 )
    {
      if ( *__errno_location() )
      {
        v9 = gettext("cannot get niceness");
        v10 = __errno_location();
        error(125, *v10, v9);
      }
    }
    printf("%d\n", v22);
    exit(0);
  }
  *__errno_location() = 0;
  v23 = getpriority(PRIO_PROCESS, 0);
  if ( v23 == -1 && *__errno_location() )
  {
    v11 = gettext("cannot get niceness");
    v12 = __errno_location();
    error(125, *v12, v11);
  }
  if ( setpriority(PRIO_PROCESS, 0, v23 + v20) )
  {
    v13 = gettext("cannot set niceness");
    v14 = *__errno_location();
    v15 = __errno_location();
    v16 = sub_401669(*v15) ? 0 : 125;
    error(v16, v14, v13);
    if ( ferror_unlocked(stderr) )
      exit(125);
  }
  execvp(a2[v21], &a2[v21]);
  if ( *__errno_location() == 2 )
    v17 = 127;
  else
    v17 = 126;
  status = v17;
  v18 = a2[v21];
  v19 = __errno_location();
  error(0, *v19, "%s", v18);
  exit(status);
}
