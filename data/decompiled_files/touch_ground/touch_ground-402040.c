#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402040(const char *a1)
{
  unsigned int v1; // edx
  const char *v2; // rax
  __int64 v3; // r12
  char *v4; // rbx
  int *v5; // rax
  __int64 v7; // rbx
  char *v8; // rax
  __int64 v9; // r12
  char *v10; // rbx
  int *v11; // rax
  bool v12; // [rsp+1Bh] [rbp-25h]
  unsigned int v13; // [rsp+1Ch] [rbp-24h]
  int errnum; // [rsp+20h] [rbp-20h]
  time_t *v15; // [rsp+28h] [rbp-18h]

  v13 = -1;
  errnum = 0;
  v15 = &timer;
  if ( !strcmp(a1, "-") )
  {
    v13 = 1;
  }
  else if ( byte_611384 != 1 && byte_611386 != 1 )
  {
    v13 = sub_40A2EF(0LL, a1, 2369LL, 438LL);
    if ( v13 == -1 && *__errno_location() != 21 && *__errno_location() != 22 && *__errno_location() != 1 )
      errnum = *__errno_location();
  }
  if ( dword_611380 != 3 )
  {
    if ( dword_611380 == 2 )
    {
      qword_6113A8 = 1073741822LL;
    }
    else
    {
      if ( dword_611380 != 1 )
        __assert_fail("change_times == 1", "../../src/src/touch.c", 0x9Cu, "touch");
      qword_6113B8 = 1073741822LL;
    }
  }
  if ( byte_611387 )
    v15 = 0LL;
  if ( byte_611386 && v13 == -1 )
    v1 = 256;
  else
    v1 = 0;
  if ( v13 == 1 )
    v2 = 0LL;
  else
    v2 = a1;
  v12 = (unsigned int)sub_403235(v13, 4294967196LL, v2, v15, v1) == 0;
  if ( v13 )
  {
    if ( v13 == 1 && !v12 && *__errno_location() == 9 && byte_611384 )
      return 1LL;
  }
  else if ( close(0) )
  {
    v3 = sub_407A47(a1);
    v4 = gettext("closing %s");
    v5 = __errno_location();
    error(0, *v5, v4, v3);
    return 0LL;
  }
  if ( v12 )
    return 1LL;
  if ( errnum )
  {
    v7 = sub_407A47(a1);
    v8 = gettext("cannot touch %s");
    error(0, errnum, v8, v7);
  }
  else
  {
    if ( byte_611384 && *__errno_location() == 2 )
      return 1LL;
    v9 = sub_407A47(a1);
    v10 = gettext("setting times of %s");
    v11 = __errno_location();
    error(0, *v11, v10, v9);
  }
  return 0LL;
}
