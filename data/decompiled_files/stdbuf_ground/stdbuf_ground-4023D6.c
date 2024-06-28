#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  int v7; // eax
  char *v8; // rax
  int v9; // eax
  __int64 v10; // r12
  char *v11; // rbx
  int *v12; // rax
  char **argv; // [rsp+0h] [rbp-30h]
  int v14; // [rsp+14h] [rbp-1Ch]
  int v15; // [rsp+18h] [rbp-18h]
  int status; // [rsp+1Ch] [rbp-14h]

  sub_402EBD(*a2, a2, a3);
  setlocale(6, locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_401BDD(0x7Du);
  sub_40EFA0(sub_402A1F);
  while ( 1 )
  {
    v14 = getopt_long(a1, a2, "+i:o:e:", &longopts, 0LL);
    if ( v14 == -1 )
    {
      argv = &a2[optind];
      if ( a1 - optind <= 0 )
      {
        v8 = gettext("missing operand");
        error(0, 0, v8);
        sub_401D7B(125);
      }
      sub_40226F();
      sub_401EEC((const char *)qword_612398);
      if ( !ptr )
        ptr = (void *)sub_406261("/root/Product/coreutils/exe/lib/coreutils");
      sub_402058();
      free(ptr);
      execvp(*argv, argv);
      if ( *__errno_location() == 2 )
        v9 = 127;
      else
        v9 = 126;
      status = v9;
      v10 = sub_403A19(*argv);
      v11 = gettext("failed to run command %s");
      v12 = __errno_location();
      error(0, *v12, v11, v10);
      exit(status);
    }
    if ( v14 != 101 )
    {
      if ( v14 <= 101 )
      {
        if ( v14 == -131 )
        {
          v7 = sub_403729("Padraig Brady", &unk_40F8CE);
          sub_405EA4(
            (_DWORD)stdout,
            (unsigned int)"stdbuf",
            (unsigned int)"GNU coreutils",
            (_DWORD)off_612270,
            v7,
            0,
            (char)a2);
          exit(0);
        }
        if ( v14 == -130 )
          sub_401D7B(0);
LABEL_24:
        sub_401D7B(125);
      }
      if ( v14 != 105 && v14 != 111 )
        goto LABEL_24;
    }
    v15 = sub_402019(v14);
    if ( v15 < 0 || (unsigned int)v15 > 2 )
      __assert_fail(
        "0 <= opt_fileno && opt_fileno < (sizeof (stdbuf) / sizeof *(stdbuf))",
        "../../src/src/stdbuf.c",
        0x138u,
        "main");
    LODWORD(qword_612340[3 * v15 + 1]) = v14;
    while ( (unsigned __int8)sub_40291B((unsigned int)*optarg) )
      ++optarg;
    qword_612340[3 * v15 + 2] = optarg;
    if ( v14 == 105 && *optarg == 76 )
    {
      v3 = gettext("line buffering stdin is meaningless");
      error(0, 0, v3);
      sub_401D7B(125);
    }
    if ( strcmp(optarg, "L") && (unsigned int)sub_401CFF((__int64)optarg, &qword_612340[3 * v15]) == -1 )
    {
      v4 = sub_403A19(optarg);
      v5 = gettext("invalid mode %s");
      v6 = __errno_location();
      error(125, *v6, v5, v4);
    }
  }
}
