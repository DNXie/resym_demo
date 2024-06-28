#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403A23(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64))
{
  __int64 result; // rax
  char *v4; // rbx
  int *v5; // rax
  int v7; // [rsp+28h] [rbp-38h]
  unsigned __int64 v8; // [rsp+30h] [rbp-30h]
  unsigned __int64 v9; // [rsp+38h] [rbp-28h]
  __int64 n; // [rsp+40h] [rbp-20h]
  unsigned __int64 v11; // [rsp+48h] [rbp-18h]

  v7 = 0x7FFFFFFF;
  v8 = 0LL;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v8 < v9 )
      goto LABEL_5;
    result = a3(a1, a2);
    v9 = result;
    if ( !result )
      return result;
    v8 = 0LL;
LABEL_5:
    v11 = v8;
    if ( v7 == 0x7FFFFFFF )
    {
      while ( v8 < v9 && byte_60D280[(unsigned __int8)sub_4015CD(*(_BYTE *)(a1 + v8))] != 1 )
        v8 += 2LL;
      if ( v8 == v9 && byte_60D280[(unsigned __int8)sub_4015CD(*(_BYTE *)(v8 - 1 + a1))] )
        --v8;
      if ( v8 < v9 )
      {
        v7 = *(char *)(a1 + v8);
        n = v8 - v11 + 1;
        if ( v8 && *(char *)(v8 - 1 + a1) == v7 )
          n = v8 - v11;
        ++v8;
      }
      else
      {
        n = v9 - v11;
      }
      if ( n && fwrite_unlocked((const void *)(a1 + v11), 1uLL, n, stdout) != n )
      {
        v4 = gettext("write error");
        v5 = __errno_location();
        error(1, *v5, v4);
      }
    }
    if ( v7 != 0x7FFFFFFF )
    {
      while ( v8 < v9 && *(char *)(a1 + v8) == v7 )
        ++v8;
      if ( v8 < v9 )
        v7 = 0x7FFFFFFF;
    }
  }
}
