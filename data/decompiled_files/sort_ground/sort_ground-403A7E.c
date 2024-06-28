#include "/share/binary_recovery/clang-parser/defs.hh"
FILE *__fastcall sub_403A7E(__int64 a1)
{
  int v2; // eax
  char *v3; // r12
  char *v4; // rbx
  int *v5; // rax
  char *v6; // r12
  char *v7; // rbx
  int *v8; // rax
  int fd; // [rsp+14h] [rbp-2Ch]
  int v10; // [rsp+18h] [rbp-28h]
  int v11; // [rsp+1Ch] [rbp-24h]
  int v12; // [rsp+20h] [rbp-20h] BYREF
  int v13; // [rsp+24h] [rbp-1Ch]
  FILE *v14; // [rsp+28h] [rbp-18h]

  v14 = 0LL;
  if ( *(_BYTE *)(a1 + 12) == 1 )
    sub_403204(*(_DWORD *)(a1 + 8));
  fd = open((const char *)(a1 + 13), 0);
  if ( fd < 0 )
    return 0LL;
  v2 = sub_403701(&v12, 9LL);
  v10 = v2;
  if ( v2 == -1 )
  {
    if ( *__errno_location() != 24 )
    {
      v3 = s1;
      v4 = gettext("couldn't create process for %s -d");
      v5 = __errno_location();
      error(2, *v5, v4, v3);
    }
    close(fd);
    *__errno_location() = 24;
  }
  else
  {
    if ( !v2 )
    {
      close(v12);
      sub_4036B0(fd, 0);
      close(fd);
      sub_4036B0(v13, 1);
      close(v13);
      execlp(s1, s1, "-d", 0LL);
      v6 = s1;
      v7 = gettext("couldn't execute %s -d");
      v8 = __errno_location();
      error(2, *v8, v7, v6);
    }
    *(_DWORD *)(a1 + 8) = v10;
    sub_403143(a1);
    close(fd);
    close(v13);
    v14 = fdopen(v12, "r");
    if ( !v14 )
    {
      v11 = *__errno_location();
      close(v12);
      *__errno_location() = v11;
    }
  }
  return v14;
}
