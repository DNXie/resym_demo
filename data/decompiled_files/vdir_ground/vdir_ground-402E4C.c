#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(unsigned int a1, char **a2, char **a3)
{
  void (*v3)(int); // rax
  int v4; // eax
  bool v5; // al
  bool v6; // al
  int v7; // eax
  unsigned __int64 v8; // rdx
  int v9; // eax
  int v10; // [rsp+10h] [rbp-C0h]
  int i; // [rsp+14h] [rbp-BCh]
  int j; // [rsp+14h] [rbp-BCh]
  int sig; // [rsp+18h] [rbp-B8h]
  int siga; // [rsp+18h] [rbp-B8h]
  int v15; // [rsp+1Ch] [rbp-B4h]
  void **v16; // [rsp+20h] [rbp-B0h]
  void *v17; // [rsp+28h] [rbp-A8h]
  struct sigaction v18; // [rsp+30h] [rbp-A0h] BYREF

  sub_40FC9B(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_40256B(2u);
  sub_415C00(sub_40B678);
  status = 0;
  byte_61D718 = 1;
  qword_61D658 = 0LL;
  qword_61D660 = 0x8000000000000000LL;
  qword_61D668 = -1LL;
  v10 = sub_403704(a1, a2);
  if ( byte_61D6C0 )
    sub_404CA9();
  if ( byte_61D6C0 )
  {
    if ( sub_402C5C(0xDu) || sub_402C5C(0xEu) && byte_61D650 || sub_402C5C(0xCu) && !dword_61D69C )
      byte_61D6D8 = 1;
    if ( tcgetpgrp(1) >= 0 )
    {
      sigemptyset(&set);
      for ( i = 0; i <= 11; ++i )
      {
        sigaction(::sig[i], 0LL, &v18);
        if ( v18.sa_handler != (__sighandler_t)1 )
          sigaddset(&set, ::sig[i]);
      }
      v18.sa_mask = set;
      v18.sa_flags = 0x10000000;
      for ( j = 0; j <= 11; ++j )
      {
        if ( sigismember(&set, ::sig[j]) )
        {
          if ( ::sig[j] == 20 )
            v3 = (void (*)(int))sub_402D56;
          else
            v3 = (void (*)(int))sub_402D3A;
          v18.sa_handler = v3;
          sigaction(::sig[j], &v18, 0LL);
        }
      }
    }
  }
  if ( dword_61D6DC == 1 )
  {
    if ( byte_61D6E1 || dword_61D6BC == 3 || !dword_61D69C )
      v4 = 2;
    else
      v4 = 4;
    dword_61D6DC = v4;
  }
  if ( byte_61D6E0 )
  {
    qword_61D620 = sub_40CBA9(30LL, 0LL, sub_402B0A, sub_402B33, sub_402B88);
    if ( !qword_61D620 )
      sub_414B0B();
    _obstack_begin(&stru_61D8C0, 0, 0, (void *(*)(__int64))malloc, free);
  }
  v5 = dword_61D6A4 == 4 || dword_61D6A4 == 2 || !dword_61D69C || byte_61D670 || byte_61D6AB;
  byte_61D728 = v5;
  v6 = !v5 && (byte_61D6E0 || byte_61D6C0 || dword_61D6BC || byte_61D6E2);
  byte_61D729 = v6;
  if ( byte_61D6B8 )
  {
    _obstack_begin(&stru_61D800, 0, 0, (void *(*)(__int64))malloc, free);
    _obstack_begin(&stru_61D860, 0, 0, (void *(*)(__int64))malloc, free);
  }
  qword_61D630 = 100LL;
  qword_61D628 = sub_414840(100LL, 192LL);
  qword_61D638 = 0LL;
  sub_405AE7();
  v15 = a1 - v10;
  if ( (int)(a1 - v10) > 0 )
  {
    do
    {
      v7 = v10++;
      sub_405BE1(a2[v7], 0LL, 0LL, 1LL, &locale);
    }
    while ( v10 < (int)a1 );
  }
  else if ( byte_61D6E1 )
  {
    sub_405BE1(".", 3LL, 0LL, 1LL, &locale);
  }
  else
  {
    sub_4050DD(".", 0LL, 1LL);
  }
  if ( qword_61D638 )
  {
    sub_4080A9();
    if ( byte_61D6E1 != 1 )
      sub_406A50(0LL, 1LL);
  }
  if ( qword_61D638 )
  {
    sub_4081E3();
    if ( qword_61D658 )
    {
      putchar_unlocked(10);
      ++qword_61D7E0;
    }
  }
  else if ( v15 <= 1 && qword_61D658 && !*(_QWORD *)(qword_61D658 + 24) )
  {
    byte_61D718 = 0;
  }
  while ( qword_61D658 )
  {
    v16 = (void **)qword_61D658;
    qword_61D658 = *(_QWORD *)(qword_61D658 + 24);
    if ( !qword_61D620 || *v16 )
    {
      sub_40516A(*v16, v16[1], *((unsigned __int8 *)v16 + 16));
      sub_402C23(v16);
      byte_61D718 = 1;
    }
    else
    {
      v18.sa_handler = (__sighandler_t)sub_4027F7();
      v18.sa_mask.__val[0] = v8;
      v17 = (void *)sub_40D888(qword_61D620, &v18);
      if ( !v17 )
        __assert_fail("found", "../../src/src/ls.c", 0x59Du, "main");
      sub_402B88(v17);
      sub_402C23(v16);
    }
  }
  if ( byte_61D6C0 )
  {
    if ( byte_61D6C1
      && (qword_61D3A0[0] != 2 || memcmp(s1, &unk_416068, 2uLL) || qword_61D3B0 != 1 || *(_BYTE *)off_61D3B8 != 109) )
    {
      sub_402CE3();
    }
    fflush_unlocked(stdout);
    for ( sig = 0; sig <= 11; ++sig )
    {
      if ( sigismember(&set, ::sig[sig]) )
        signal(::sig[sig], 0LL);
    }
    for ( siga = dword_61D7C4; siga; --siga )
      raise(19);
    if ( dword_61D7C0 )
      raise(dword_61D7C0);
  }
  if ( byte_61D6B8 )
  {
    sub_4028A6("//DIRED//", (__int64)&stru_61D800);
    sub_4028A6("//SUBDIRED//", (__int64)&stru_61D860);
    v9 = sub_40FE0E(qword_61D700);
    printf("//DIRED-OPTIONS// --quoting-style=%s\n", off_419180[v9]);
  }
  if ( qword_61D620 )
  {
    if ( sub_40C2D7(qword_61D620) )
      __assert_fail("hash_get_n_entries (active_dir_set) == 0", "../../src/src/ls.c", 0x5DCu, "main");
    sub_40CE14(qword_61D620);
  }
  exit(status);
}
