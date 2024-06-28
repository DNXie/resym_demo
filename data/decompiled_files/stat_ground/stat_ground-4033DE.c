#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4033DE(const char *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  const char *v5; // rax
  int i; // [rsp+40h] [rbp-30h]
  __int64 v8; // [rsp+48h] [rbp-28h]

  if ( a3 == 100 )
  {
    sub_402D3C(a1, a2, a5[6]);
    return 0LL;
  }
  if ( a3 <= 0x64 )
  {
    if ( a3 == 97 )
    {
      sub_402D3C(a1, a2, a5[4]);
      return 0LL;
    }
    if ( a3 > 0x61 )
    {
      if ( a3 == 98 )
        sub_402D3C(a1, a2, a5[2]);
      else
        sub_402D84(a1, a2, a5[5]);
      return 0LL;
    }
    if ( a3 != 83 )
    {
      if ( a3 != 84 )
        goto LABEL_33;
      v5 = sub_4022AD(a5);
      sub_402CF4(a1, a2, (__int64)v5);
      return 0LL;
    }
LABEL_30:
    sub_402D84(a1, a2, a5[1]);
    return 0LL;
  }
  if ( a3 == 108 )
  {
    sub_402D84(a1, a2, a5[8]);
    return 0LL;
  }
  if ( a3 <= 0x6C )
  {
    if ( a3 == 102 )
    {
      sub_402D3C(a1, a2, a5[3]);
    }
    else
    {
      if ( a3 != 105 )
        goto LABEL_33;
      v8 = 0LL;
      for ( i = 0; i < 2 && (unsigned __int64)(4LL * i) <= 7; ++i )
        v8 |= (unsigned __int64)*((unsigned int *)a5 + 1 - i + 14) << (32 * (unsigned __int8)i);
      sub_402E14(a1, a2, v8);
    }
    return 0LL;
  }
  switch ( a3 )
  {
    case 's':
      goto LABEL_30;
    case 't':
      sub_402E14(a1, a2, *a5);
      break;
    case 'n':
      sub_402CF4(a1, a2, a4);
      break;
    default:
LABEL_33:
      fputc_unlocked(63, stdout);
      return 0LL;
  }
  return 0LL;
}
