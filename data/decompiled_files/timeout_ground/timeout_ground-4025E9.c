#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  int v3; // eax
  int v4; // eax
  char *v5; // rbx
  int *v6; // rax
  __int64 result; // rax
  unsigned int v8; // eax
  __int64 v9; // r12
  char *v10; // rbx
  int *v11; // rax
  char *v12; // rbx
  int *v13; // rax
  unsigned int v14; // ebx
  char *v15; // rax
  char **argv; // [rsp+10h] [rbp-90h]
  int stat_loc; // [rsp+54h] [rbp-4Ch] BYREF
  int v18; // [rsp+58h] [rbp-48h]
  unsigned int v19; // [rsp+5Ch] [rbp-44h]
  __pid_t v20; // [rsp+60h] [rbp-40h]
  int v21; // [rsp+64h] [rbp-3Ch]
  double v22; // [rsp+68h] [rbp-38h]
  char v23[24]; // [rsp+70h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-18h]

  v24 = __readfsqword(0x28u);
  sub_403027(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_401EDD(0x7Du);
  sub_409540(sub_402D1C);
  while ( 1 )
  {
    v18 = getopt_long(a1, a2, "+k:s:", &longopts, 0LL);
    if ( v18 == -1 )
      break;
    if ( v18 == 107 )
    {
      qword_60C648 = sub_40244A(optarg);
    }
    else
    {
      if ( v18 <= 107 )
      {
        if ( v18 == -131 )
        {
          v3 = sub_403893("Padraig Brady", &unk_409E03);
          sub_40600E((_DWORD)stdout, (unsigned int)"timeout", (unsigned int)"GNU coreutils", (_DWORD)off_60C2B8, v3, 0);
          exit(0);
        }
        if ( v18 == -130 )
          sub_4022A6(0);
LABEL_17:
        sub_4022A6(125);
      }
      if ( v18 == 115 )
      {
        dword_60C2B0 = sub_402A89(optarg, v23);
        if ( dword_60C2B0 == -1 )
          sub_4022A6(125);
      }
      else
      {
        if ( v18 != 128 )
          goto LABEL_17;
        byte_60C650 = 1;
      }
    }
  }
  if ( a1 - optind <= 1 )
    sub_4022A6(125);
  v4 = optind++;
  v22 = sub_40244A((__int64)a2[v4]);
  argv = &a2[optind];
  if ( byte_60C650 != 1 )
    setpgid(0, 0);
  sub_402518(dword_60C2B0);
  signal(21, (__sighandler_t)1);
  signal(22, (__sighandler_t)1);
  signal(17, 0LL);
  pid = fork();
  if ( pid == -1 )
  {
    v5 = gettext("fork system call failed");
    v6 = __errno_location();
    error(0, *v6, v5);
    result = 125LL;
  }
  else if ( pid )
  {
    sub_401FFF(v22);
    do
      v20 = waitpid(pid, &stat_loc, 0);
    while ( v20 < 0 && *__errno_location() == 4 );
    if ( v20 >= 0 )
    {
      if ( (stat_loc & 0x7F) != 0 )
      {
        if ( (char)((stat_loc & 0x7F) + 1) >> 1 <= 0 )
        {
          v14 = stat_loc;
          v15 = gettext("unknown status from command (0x%X)");
          error(0, 0, v15, v14);
          stat_loc = 1;
        }
        else
        {
          v21 = stat_loc & 0x7F;
          stat_loc = v21 + 128;
        }
      }
      else
      {
        stat_loc = (stat_loc & 0xFF00) >> 8;
      }
    }
    else
    {
      v12 = gettext("error waiting for command");
      v13 = __errno_location();
      error(0, *v13, v12);
      stat_loc = 125;
    }
    if ( dword_60C520 )
      result = 124LL;
    else
      result = (unsigned int)stat_loc;
  }
  else
  {
    signal(21, 0LL);
    signal(22, 0LL);
    execvp(*argv, argv);
    if ( *__errno_location() == 2 )
      v8 = 127;
    else
      v8 = 126;
    v19 = v8;
    v9 = sub_403B83(*argv);
    v10 = gettext("failed to run command %s");
    v11 = __errno_location();
    error(0, *v11, v10, v9);
    result = v19;
  }
  return result;
}
