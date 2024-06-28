#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401BFD(const char *a1, int a2)
{
  int v2; // eax
  int *v3; // rax
  __int64 result; // rax
  int *v5; // rax
  int *v6; // rax
  const char *v7; // rax
  bool v8; // [rsp+17h] [rbp-22D9h]
  unsigned int fd; // [rsp+18h] [rbp-22D8h]
  unsigned int v10; // [rsp+1Ch] [rbp-22D4h]
  __int64 v11; // [rsp+28h] [rbp-22C8h]
  unsigned __int64 i; // [rsp+30h] [rbp-22C0h]
  unsigned __int64 v13; // [rsp+38h] [rbp-22B8h]
  char v14[656]; // [rsp+40h] [rbp-22B0h] BYREF
  char v15[8200]; // [rsp+2D0h] [rbp-2020h] BYREF
  unsigned __int64 v16; // [rsp+22D8h] [rbp-18h]

  v16 = __readfsqword(0x28u);
  v11 = 0LL;
  v10 = 0;
  v2 = strcmp(a1, "-");
  v8 = v2 == 0;
  if ( !v2 )
  {
    fd = 0;
    byte_608279 = 1;
    goto LABEL_5;
  }
  fd = open(a1, 0);
  if ( fd == -1 )
  {
    v3 = __errno_location();
    error(0, *v3, "%s", a1);
    result = 0LL;
  }
  else
  {
    while ( 1 )
    {
LABEL_5:
      v13 = sub_404A1D(fd, v15, 0x2000LL);
      if ( !v13 )
      {
        if ( !v8 && close(fd) )
        {
          v6 = __errno_location();
          error(0, *v6, "%s", a1);
          result = 0LL;
        }
        else
        {
          v7 = (const char *)sub_402542(v11, v14, 0LL, 1LL, 512LL);
          printf(
            "%d %s",
            ((int)(HIWORD(v10) + (unsigned __int16)v10) >> 16) + (unsigned int)(unsigned __int16)(HIWORD(v10) + v10),
            v7);
          if ( a2 )
            printf(" %s", a1);
          putchar_unlocked(10);
          result = 1LL;
        }
        return result;
      }
      if ( v13 == -1LL )
        break;
      for ( i = 0LL; i < v13; ++i )
        v10 += (unsigned __int8)v15[i];
      v11 += v13;
    }
    v5 = __errno_location();
    error(0, *v5, "%s", a1);
    if ( !v8 )
      close(fd);
    result = 0LL;
  }
  return result;
}
