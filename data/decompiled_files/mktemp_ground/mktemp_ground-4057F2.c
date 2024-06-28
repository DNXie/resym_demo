#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4057F2(char *a1, unsigned __int64 a2, size_t a3)
{
  size_t v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 result; // rax
  __int64 v9; // rax
  int fd; // [rsp+24h] [rbp-4Ch]
  unsigned __int64 v12; // [rsp+28h] [rbp-48h]
  size_t n; // [rsp+38h] [rbp-38h]
  size_t v14; // [rsp+40h] [rbp-30h]
  size_t v15; // [rsp+48h] [rbp-28h]
  size_t v16; // [rsp+50h] [rbp-20h]
  size_t v17; // [rsp+58h] [rbp-18h]
  struct timeval tv; // [rsp+60h] [rbp-10h] BYREF

  v12 = 0LL;
  fd = open("/dev/urandom", 0);
  if ( fd >= 0 )
  {
    v3 = a2;
    if ( a3 <= a2 )
      v3 = a3;
    v12 = read(fd, a1, v3);
    if ( (v12 & 0x8000000000000000LL) != 0LL )
      v12 = 0LL;
    close(fd);
  }
  if ( v12 < a2 )
  {
    v4 = a2 - v12;
    if ( a2 - v12 > 0x10 )
      v4 = 16LL;
    n = v4;
    gettimeofday(&tv, 0LL);
    memcpy(&a1[v12], &tv, n);
    v12 += n;
  }
  if ( v12 < a2 )
  {
    v5 = a2 - v12;
    if ( a2 - v12 > 4 )
      v5 = 4LL;
    v14 = v5;
    LODWORD(tv.tv_sec) = getpid();
    memcpy(&a1[v12], &tv, v14);
    v12 += v14;
  }
  if ( v12 < a2 )
  {
    v6 = a2 - v12;
    if ( a2 - v12 > 4 )
      v6 = 4LL;
    v15 = v6;
    LODWORD(tv.tv_sec) = getppid();
    memcpy(&a1[v12], &tv, v15);
    v12 += v15;
  }
  if ( v12 < a2 )
  {
    v7 = a2 - v12;
    if ( a2 - v12 > 4 )
      v7 = 4LL;
    v16 = v7;
    LODWORD(tv.tv_sec) = getuid();
    memcpy(&a1[v12], &tv, v16);
    v12 += v16;
  }
  result = v12;
  if ( v12 < a2 )
  {
    v9 = a2 - v12;
    if ( a2 - v12 > 4 )
      v9 = 4LL;
    v17 = v9;
    LODWORD(tv.tv_sec) = getgid();
    memcpy(&a1[v12], &tv, v17);
    result = v12 + v17;
  }
  return result;
}
