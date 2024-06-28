#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_403109(char *a1, unsigned __int64 a2, unsigned int *a3)
{
  unsigned __int64 result; // rax
  size_t v4; // rax
  void *v5; // rax
  size_t v7; // [rsp+10h] [rbp-30h]
  char *src; // [rsp+18h] [rbp-28h]
  size_t v9; // [rsp+28h] [rbp-18h]
  size_t v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+30h] [rbp-10h]
  size_t n; // [rsp+38h] [rbp-8h]

  src = a1;
  v7 = a2;
  result = a3[6];
  if ( (_DWORD)result )
  {
    v11 = a3[6];
    v4 = a2;
    if ( 128 - v11 <= a2 )
      v4 = 128 - v11;
    n = v4;
    memcpy((char *)a3 + v11 + 28, a1, v4);
    a3[6] += n;
    if ( a3[6] > 0x40 )
    {
      sub_403330(a3 + 7, a3[6] & 0xFFFFFFC0, a3);
      a3[6] &= 0x3Fu;
      memcpy(a3 + 7, (char *)a3 + ((v11 + n) & 0xFFFFFFFFFFFFFFC0LL) + 28, a3[6]);
    }
    src = &a1[n];
    result = n;
    v7 = a2 - n;
  }
  if ( v7 > 0x3F )
  {
    result = (unsigned __int8)src & 3;
    if ( ((unsigned __int8)src & 3) != 0 )
    {
      while ( v7 > 0x40 )
      {
        v5 = memcpy(a3 + 7, src, 0x40uLL);
        result = sub_403330(v5, 64LL, a3);
        src += 64;
        v7 -= 64LL;
      }
    }
    else
    {
      sub_403330(src, v7 & 0xFFFFFFFFFFFFFFC0LL, a3);
      result = v7 & 0xFFFFFFFFFFFFFFC0LL;
      src += v7 & 0xFFFFFFFFFFFFFFC0LL;
      v7 &= 0x3Fu;
    }
  }
  if ( v7 )
  {
    v9 = a3[6];
    memcpy((char *)a3 + v9 + 28, src, v7);
    v10 = v7 + v9;
    if ( v10 > 0x3F )
    {
      sub_403330(a3 + 7, 64LL, a3);
      v10 -= 64LL;
      memcpy(a3 + 7, a3 + 23, v10);
    }
    result = (unsigned __int64)a3;
    a3[6] = v10;
  }
  return result;
}
