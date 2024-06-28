#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404384(char *a1, int a2, int a3, int a4, size_t a5)
{
  int v6; // eax
  unsigned int i; // [rsp+2Ch] [rbp-D4h]
  int v11; // [rsp+30h] [rbp-D0h]
  int v12; // [rsp+34h] [rbp-CCh]
  int v13; // [rsp+3Ch] [rbp-C4h]
  size_t j; // [rsp+40h] [rbp-C0h]
  size_t v15; // [rsp+48h] [rbp-B8h]
  __int64 v16; // [rsp+58h] [rbp-A8h]
  struct stat stat_buf; // [rsp+60h] [rbp-A0h] BYREF

  v12 = *__errno_location();
  v15 = strlen(a1);
  if ( a2 + a5 > v15 || !sub_40435A(&a1[v15 - a5 - a2], a5) )
  {
    *__errno_location() = 22;
    return 0xFFFFFFFFLL;
  }
  v16 = sub_405484(0LL, a5);
  if ( !v16 )
    return 0xFFFFFFFFLL;
  for ( i = 0; ; ++i )
  {
    if ( i >= 0x3A2F8 )
    {
      sub_4056FD(v16);
      *__errno_location() = 17;
      return 0xFFFFFFFFLL;
    }
    for ( j = 0LL; j < a5; ++j )
      a1[v15 - a5 - a2 + j] = byte_407BE0[sub_4054EA(v16, 61LL)];
    if ( a4 == 1 )
    {
      v11 = mkdir(a1, 0x1C0u);
      goto LABEL_21;
    }
    if ( a4 == 2 )
      break;
    if ( a4 )
      __assert_fail("! \"invalid KIND in __gen_tempname\"", "../../src/lib/tempname.c", 0x128u, "gen_tempname_len");
    v6 = a3;
    LOBYTE(v6) = a3 & 0x3C | 0xC2;
    v11 = open(a1, v6, 384LL);
LABEL_21:
    if ( v11 >= 0 )
    {
      *__errno_location() = v12;
      goto LABEL_28;
    }
    if ( *__errno_location() != 17 )
    {
      v11 = -1;
      goto LABEL_28;
    }
LABEL_25:
    ;
  }
  if ( (int)sub_406FA0(a1, &stat_buf) >= 0 )
    goto LABEL_25;
  if ( *__errno_location() == 2 )
  {
    *__errno_location() = v12;
    v11 = 0;
  }
  else
  {
    v11 = -1;
  }
LABEL_28:
  v13 = *__errno_location();
  sub_4056FD(v16);
  *__errno_location() = v13;
  return (unsigned int)v11;
}
