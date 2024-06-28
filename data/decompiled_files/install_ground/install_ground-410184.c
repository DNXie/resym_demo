#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_410184(unsigned int *a1, __int64 a2, char a3, int *a4)
{
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  int *v8; // [rsp+0h] [rbp-40h]
  char *file; // [rsp+10h] [rbp-30h]
  int fd; // [rsp+24h] [rbp-1Ch]
  unsigned int v12; // [rsp+28h] [rbp-18h]
  int v13; // [rsp+2Ch] [rbp-14h]

  file = (char *)a2;
  v8 = a4;
  fd = -1;
  v12 = 0;
  if ( a4 || (a3 & 1) != 0 )
  {
    if ( (a3 & 1) != 0 )
      v4 = 198912;
    else
      v4 = 67840;
    a2 = v4;
    fd = open(file, v4);
    if ( v8 )
    {
      *v8 = fd;
      v8[1] = *__errno_location();
    }
    if ( fd < 0 && (*__errno_location() != 13 || (a3 & 2) != 0) )
      v12 = -1;
  }
  if ( !v12 && (fd < 0 || (a3 & 4) == 0) )
  {
    if ( (unsigned __int8)sub_41005D(a1, a2, a3) )
    {
      v8 = 0LL;
      v12 = -2;
      goto LABEL_33;
    }
    if ( fd >= 0 )
      v5 = fchdir(fd);
    else
      v5 = chdir(file);
    v12 = v5;
    if ( v5 )
      goto LABEL_33;
    v6 = *a1;
    if ( *a1 == 3 )
    {
      if ( a1[1] )
        __assert_fail("wd->val.child == 0", "../../src/lib/savewd.c", 0x91u, "savewd_chdir");
    }
    else
    {
      if ( v6 > 3 )
      {
        if ( v6 <= 5 )
          goto LABEL_33;
        goto LABEL_32;
      }
      if ( v6 == 1 )
      {
        *a1 = 2;
        goto LABEL_33;
      }
      if ( v6 != 2 )
LABEL_32:
        __assert_fail("0", "../../src/lib/savewd.c", 0x95u, "savewd_chdir");
    }
  }
LABEL_33:
  if ( fd >= 0 && !v8 )
  {
    v13 = *__errno_location();
    close(fd);
    *__errno_location() = v13;
  }
  return v12;
}
