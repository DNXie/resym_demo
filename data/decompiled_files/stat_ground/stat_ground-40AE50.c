#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40AE50(const char *a1)
{
  char *path; // [rsp+8h] [rbp-48h]
  int v3; // [rsp+10h] [rbp-40h] BYREF
  unsigned int v4; // [rsp+18h] [rbp-38h]
  int v5; // [rsp+1Ch] [rbp-34h]
  int v6; // [rsp+20h] [rbp-30h]
  int v7; // [rsp+24h] [rbp-2Ch]
  size_t v8; // [rsp+28h] [rbp-28h]
  unsigned __int64 v9; // [rsp+30h] [rbp-20h]
  size_t v10; // [rsp+38h] [rbp-18h]
  char *v11; // [rsp+40h] [rbp-10h]
  void *v12; // [rsp+48h] [rbp-8h]

  path = (char *)a1;
  v4 = chdir(a1);
  if ( !v4 || *__errno_location() != 36 )
    return v4;
  v8 = strlen(a1);
  v9 = (unsigned __int64)&a1[v8];
  sub_40AD48(&v3);
  if ( !v8 )
    __assert_fail("0 < len", "../../src/lib/chdir-long.c", 0x7Du, "chdir_long");
  if ( v8 <= 0xFFF )
    __assert_fail("4096 <= len", "../../src/lib/chdir-long.c", 0x7Eu, "chdir_long");
  v10 = strspn(a1, "/");
  if ( v10 == 2 )
  {
    v11 = (char *)memchr(a1 + 3, 47, v9 - (_QWORD)(a1 + 3));
    if ( !v11 )
    {
LABEL_10:
      *__errno_location() = 36;
      return 0xFFFFFFFFLL;
    }
    *v11 = 0;
    v5 = sub_40ADC8(&v3, a1);
    *v11 = 47;
    if ( v5 )
      goto LABEL_31;
    path = (char *)sub_40AE22(v11 + 1);
  }
  else if ( v10 )
  {
    if ( (unsigned int)sub_40ADC8(&v3, "/") )
      goto LABEL_31;
    path = (char *)&a1[v10];
  }
  if ( *path == 47 )
    __assert_fail("*dir != '/'", "../../src/lib/chdir-long.c", 0xA1u, "chdir_long");
  if ( (unsigned __int64)path > v9 )
    __assert_fail("dir <= dir_end", "../../src/lib/chdir-long.c", 0xA2u, "chdir_long");
  while ( (__int64)(v9 - (_QWORD)path) > 4095 )
  {
    v12 = memrchr(path, 47, 0x1000uLL);
    if ( !v12 )
      goto LABEL_10;
    *(_BYTE *)v12 = 0;
    if ( (_BYTE *)v12 - path > 4095 )
      __assert_fail("slash - dir < 4096", "../../src/lib/chdir-long.c", 0xB2u, "chdir_long");
    v6 = sub_40ADC8(&v3, path);
    *(_BYTE *)v12 = 47;
    if ( v6 )
      goto LABEL_31;
    path = (char *)sub_40AE22((const char *)v12 + 1);
  }
  if ( ((unsigned __int64)path >= v9 || !(unsigned int)sub_40ADC8(&v3, path)) && !sub_40AD5C(&v3) )
  {
    sub_40AD77(&v3);
    return 0LL;
  }
LABEL_31:
  v7 = *__errno_location();
  sub_40AD77(&v3);
  *__errno_location() = v7;
  return 0xFFFFFFFFLL;
}
