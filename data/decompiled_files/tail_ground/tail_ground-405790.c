#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405790(__int64 a1, unsigned int a2, size_t a3, signed __int64 *a4)
{
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  __int64 v8; // rbx
  unsigned int v11; // [rsp+2Ch] [rbp-B4h]
  __off_t v12; // [rsp+30h] [rbp-B0h]
  signed __int64 v13; // [rsp+38h] [rbp-A8h]
  struct stat stat_buf; // [rsp+40h] [rbp-A0h] BYREF

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
    v11 = sub_402FFF(a1, a2, a3, a4);
    if ( v11 )
      return v11 >> 31;
    v8 = *a4;
    *a4 = v8 + sub_401FCB(a1, a2, 0xFFFFFFFFFFFFFFFFLL);
    return 1LL;
  }
  v12 = -1LL;
  if ( byte_610329 != 1 && (stat_buf.st_mode & 0xF000) == 0x8000 )
  {
    v12 = lseek(a2, 0LL, 1);
    if ( v12 != -1 )
    {
      v13 = lseek(a2, 0LL, 2);
      if ( v13 > v12 )
      {
        *a4 = v13;
        return !v13 || (unsigned __int8)sub_40228B(a1, a2, a3, v12, v13, a4) == 1;
      }
    }
  }
  if ( v12 != -1 )
    sub_40213B(a2, v12, 0, a1);
  return sub_4026A9(a1, a2, a3, a4);
}
