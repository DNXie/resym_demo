#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_415946(const char *a1)
{
  __int64 v3; // [rsp+18h] [rbp-58h]
  char v4[4]; // [rsp+20h] [rbp-50h] BYREF
  int v5; // [rsp+24h] [rbp-4Ch] BYREF
  char i; // [rsp+2Ch] [rbp-44h]
  const char *v7; // [rsp+30h] [rbp-40h]
  __int64 v8; // [rsp+38h] [rbp-38h]
  char v9; // [rsp+40h] [rbp-30h]
  int v10; // [rsp+44h] [rbp-2Ch]
  unsigned __int64 v11; // [rsp+68h] [rbp-8h]

  v11 = __readfsqword(0x28u);
  if ( __ctype_get_mb_cur_max() <= 1 )
    return strlen(a1);
  v3 = 0LL;
  v7 = a1;
  v4[0] = 0;
  memset(&v5, 0, 8uLL);
  for ( i = 0; ; i = 0 )
  {
    sub_415766((__int64)v4);
    if ( v9 == 1 && !v10 )
      break;
    ++v3;
    v7 += v8;
  }
  return v3;
}
