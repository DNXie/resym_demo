#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401D38(int a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r12
  char *v6; // rbx
  int *v7; // rax
  __blksize_t v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  char *v14; // rax
  __int64 v15; // rbx
  char *v16; // rax
  __int64 v17; // rbx
  char *v18; // rax
  __int64 v19; // rbx
  char *v20; // rax
  __int64 v21; // r12
  char *v22; // rbx
  int *v23; // rax
  signed __int64 length; // [rsp+20h] [rbp-C0h]
  __blksize_t v28; // [rsp+28h] [rbp-B8h]
  struct stat stat_buf; // [rsp+40h] [rbp-A0h] BYREF

  if ( (byte_60C2E1 || a5 && a4 < 0) && (unsigned int)sub_409210(a1, &stat_buf) )
  {
    v5 = sub_4036FB(a2);
    v6 = gettext("cannot fstat %s");
    v7 = __errno_location();
    error(0, *v7, v6, v5);
    return 0LL;
  }
  if ( byte_60C2E1 )
  {
    if ( stat_buf.st_blksize <= 0 || stat_buf.st_blksize > 0x2000000000000000uLL )
      v9 = 512LL;
    else
      v9 = stat_buf.st_blksize;
    v28 = v9;
    if ( (__int64)0x8000000000000000LL / v9 > (__int64)a3 || 0x7FFFFFFFFFFFFFFFLL / v9 < (__int64)a3 )
    {
      v10 = sub_4036FB(a2);
      v11 = gettext("overflow in %ld * %ld byte blocks for file %s");
      error(0, 0, v11, a3, v28, v10);
      return 0LL;
    }
    a3 *= v9;
  }
  if ( a5 )
  {
    if ( a4 >= 0 )
      v12 = a4;
    else
      v12 = stat_buf.st_size;
    if ( a4 < 0 )
    {
      if ( (stat_buf.st_mode & 0xF000) != 0x8000 )
      {
        v13 = sub_4036FB(a2);
        v14 = gettext("cannot get the size of %s");
        error(0, 0, v14, v13);
        return 0LL;
      }
      if ( stat_buf.st_size < 0 )
      {
        v15 = sub_4036FB(a2);
        v16 = gettext("%s has unusable, apparently negative size");
        error(0, 0, v16, v15);
        return 0LL;
      }
    }
    switch ( a5 )
    {
      case 2:
        if ( a3 >= v12 )
          v12 = a3;
        length = v12;
        break;
      case 3:
        if ( a3 <= v12 )
          v12 = a3;
        length = v12;
        break;
      case 4:
        length = v12 / a3 * a3;
        break;
      case 5:
        if ( (((a3 + v12 - 1) / a3 * a3) & 0x8000000000000000LL) != 0LL )
        {
          v17 = sub_4036FB(a2);
          v18 = gettext("overflow rounding up size of file %s");
          error(0, 0, v18, v17);
          return 0LL;
        }
        length = (a3 + v12 - 1) / a3 * a3;
        break;
      default:
        if ( (__int64)(0x7FFFFFFFFFFFFFFFLL - v12) < (__int64)a3 )
        {
          v19 = sub_4036FB(a2);
          v20 = gettext("overflow extending size of file %s");
          error(0, 0, v20, v19);
          return 0LL;
        }
        length = a3 + v12;
        break;
    }
  }
  else
  {
    length = a3;
  }
  if ( length < 0 )
    length = 0LL;
  if ( ftruncate(a1, length) != -1 )
    return 1LL;
  v21 = sub_4036FB(a2);
  v22 = gettext("failed to truncate %s at %ld bytes");
  v23 = __errno_location();
  error(0, *v23, v22, v21, length);
  return 0LL;
}
