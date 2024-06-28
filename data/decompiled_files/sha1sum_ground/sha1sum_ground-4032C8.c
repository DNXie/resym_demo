#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4032C8(char *a1, unsigned __int64 a2, unsigned int *a3)
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
  result = a3[7];
  if ( (_DWORD)result )
  {
    v11 = a3[7];
    v4 = a2;
    if ( 128 - v11 <= a2 )
      v4 = 128 - v11;
    n = v4;
    memcpy((char *)a3 + v11 + 32, a1, v4);
    a3[7] += n;
    if ( a3[7] > 0x40 )
    {
      sub_4034EF(a3 + 8, a3[7] & 0xFFFFFFC0, a3);
      a3[7] &= 0x3Fu;
      memcpy(a3 + 8, (char *)a3 + ((v11 + n) & 0xFFFFFFFFFFFFFFC0LL) + 32, a3[7]);
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
        v5 = memcpy(a3 + 8, src, 0x40uLL);
        result = sub_4034EF(v5, 64LL, a3);
        src += 64;
        v7 -= 64LL;
      }
    }
    else
    {
      sub_4034EF(src, v7 & 0xFFFFFFFFFFFFFFC0LL, a3);
      result = v7 & 0xFFFFFFFFFFFFFFC0LL;
      src += v7 & 0xFFFFFFFFFFFFFFC0LL;
      v7 &= 0x3Fu;
    }
  }
  if ( v7 )
  {
    v9 = a3[7];
    memcpy((char *)a3 + v9 + 32, src, v7);
    v10 = v7 + v9;
    if ( v10 > 0x3F )
    {
      sub_4034EF(a3 + 8, 64LL, a3);
      v10 -= 64LL;
      memcpy(a3 + 8, a3 + 24, v10);
    }
    result = (unsigned __int64)a3;
    a3[7] = v10;
  }
  return result;
}
