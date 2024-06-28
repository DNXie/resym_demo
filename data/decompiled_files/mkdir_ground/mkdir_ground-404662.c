#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404662(unsigned int *a1, __int64 a2, char a3, int *a4, int a5, int a6)
{
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int *v10; // [rsp+0h] [rbp-40h]
  char *file; // [rsp+10h] [rbp-30h]
  int fd; // [rsp+24h] [rbp-1Ch]
  unsigned int v14; // [rsp+28h] [rbp-18h]
  int v15; // [rsp+2Ch] [rbp-14h]

  file = (char *)a2;
  v10 = a4;
  fd = -1;
  v14 = 0;
  if ( a4 || (a3 & 1) != 0 )
  {
    if ( (a3 & 1) != 0 )
      v6 = 198912;
    else
      v6 = 67840;
    a2 = v6;
    fd = open(file, v6);
    if ( v10 )
    {
      *v10 = fd;
      v10[1] = *__errno_location();
    }
    if ( fd < 0 && (*__errno_location() != 13 || (a3 & 2) != 0) )
      v14 = -1;
  }
  if ( !v14 && (fd < 0 || (a3 & 4) == 0) )
  {
    if ( (unsigned __int8)sub_40453B(a1, a2, a3, (int)a4, a5, a6) )
    {
      v10 = 0LL;
      v14 = -2;
      goto LABEL_33;
    }
    if ( fd >= 0 )
      v7 = fchdir(fd);
    else
      v7 = chdir(file);
    v14 = v7;
    if ( v7 )
      goto LABEL_33;
    v8 = *a1;
    if ( *a1 == 3 )
    {
      if ( a1[1] )
        __assert_fail("wd->val.child == 0", "../../src/lib/savewd.c", 0x91u, "savewd_chdir");
    }
    else
    {
      if ( v8 > 3 )
      {
        if ( v8 <= 5 )
          goto LABEL_33;
        goto LABEL_32;
      }
      if ( v8 == 1 )
      {
        *a1 = 2;
        goto LABEL_33;
      }
      if ( v8 != 2 )
LABEL_32:
        __assert_fail("0", "../../src/lib/savewd.c", 0x95u, "savewd_chdir");
    }
  }
LABEL_33:
  if ( fd >= 0 && !v10 )
  {
    v15 = *__errno_location();
    close(fd);
    *__errno_location() = v15;
  }
  return v14;
}
