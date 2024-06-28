#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405459(__int64 a1, unsigned int a2, __int64 a3, __off_t *a4)
{
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  __off_t v8; // rbx
  __int64 v9; // rax
  __off_t v10; // rdx
  __off_t v11; // rbx
  unsigned int v14; // [rsp+24h] [rbp-CCh]
  __off_t v15; // [rsp+28h] [rbp-C8h]
  __int64 v16; // [rsp+38h] [rbp-B8h]
  struct stat stat_buf; // [rsp+50h] [rbp-A0h] BYREF

  if ( (unsigned int)sub_40C6D0(a2, &stat_buf) )
  {
    v4 = sub_408FA1(a1);
    v5 = gettext("cannot fstat %s");
    v6 = __errno_location();
    error(0, *v6, v5, v4);
    return 0LL;
  }
  if ( byte_61031F )
  {
    if ( byte_610329 != 1 && (stat_buf.st_mode & 0xF000) == 0x8000 && a3 >= 0 )
    {
      sub_40213B(a2, a3, 1, a1);
      *a4 += a3;
    }
    else
    {
      v14 = sub_402E7D(a1, a2, a3, a4);
      if ( v14 )
        return v14 >> 31;
    }
    v8 = *a4;
    *a4 = v8 + sub_401FCB(a1, a2, 0xFFFFFFFFFFFFFFFFLL);
  }
  else
  {
    if ( byte_610329 == 1 || (stat_buf.st_mode & 0xF000) != 0x8000 || a3 < 0 )
      return sub_402B59(a1, a2, a3, a4);
    v15 = sub_40213B(a2, 0LL, 1, a1);
    v16 = sub_40213B(a2, 0LL, 2, a1) - v15;
    v9 = 0LL;
    if ( v16 >= 0 )
      v9 = v16;
    if ( v9 > a3 )
      v10 = sub_40213B(a2, -a3, 2, a1);
    else
      v10 = sub_40213B(a2, v15, 0, a1);
    *a4 = v10;
    v11 = *a4;
    *a4 = v11 + sub_401FCB(a1, a2, a3);
  }
  return 1LL;
}
