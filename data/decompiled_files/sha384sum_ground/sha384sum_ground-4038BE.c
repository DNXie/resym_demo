#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4038BE(char *a1, unsigned __int64 a2, size_t *a3)
{
  unsigned __int64 result; // rax
  size_t v4; // rax
  void *v5; // rax
  size_t v7; // [rsp+10h] [rbp-30h]
  char *src; // [rsp+18h] [rbp-28h]
  size_t v9; // [rsp+28h] [rbp-18h]
  size_t v10; // [rsp+28h] [rbp-18h]
  size_t v11; // [rsp+30h] [rbp-10h]
  size_t n; // [rsp+38h] [rbp-8h]

  src = a1;
  v7 = a2;
  result = a3[10];
  if ( result )
  {
    v11 = a3[10];
    v4 = a2;
    if ( 256 - v11 <= a2 )
      v4 = 256 - v11;
    n = v4;
    memcpy((char *)a3 + v11 + 88, a1, v4);
    a3[10] += n;
    if ( a3[10] > 0x80 )
    {
      sub_403AFA(a3 + 11, a3[10] & 0xFFFFFFFFFFFFFF80LL, a3);
      a3[10] &= 0x7FuLL;
      memcpy(a3 + 11, (char *)a3 + ((v11 + n) & 0xFFFFFFFFFFFFFF80LL) + 88, a3[10]);
    }
    src = &a1[n];
    result = n;
    v7 = a2 - n;
  }
  if ( v7 > 0x7F )
  {
    result = (unsigned __int8)src & 7;
    if ( ((unsigned __int8)src & 7) != 0 )
    {
      while ( v7 > 0x80 )
      {
        v5 = memcpy(a3 + 11, src, 0x80uLL);
        result = sub_403AFA(v5, 128LL, a3);
        src += 128;
        v7 -= 128LL;
      }
    }
    else
    {
      sub_403AFA(src, v7 & 0xFFFFFFFFFFFFFF80LL, a3);
      result = v7 & 0xFFFFFFFFFFFFFF80LL;
      src += v7 & 0xFFFFFFFFFFFFFF80LL;
      v7 &= 0x7Fu;
    }
  }
  if ( v7 )
  {
    v9 = a3[10];
    memcpy((char *)a3 + v9 + 88, src, v7);
    v10 = v7 + v9;
    if ( v10 > 0x7F )
    {
      sub_403AFA(a3 + 11, 128LL, a3);
      v10 -= 128LL;
      memcpy(a3 + 11, a3 + 27, v10);
    }
    result = (unsigned __int64)a3;
    a3[10] = v10;
  }
  return result;
}
