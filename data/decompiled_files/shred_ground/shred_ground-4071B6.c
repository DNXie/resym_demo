#include "/share/binary_recovery/clang-parser/defs.hh"
size_t *__fastcall sub_4071B6(size_t *a1, char *a2, size_t a3)
{
  size_t *result; // rax
  size_t i; // [rsp+20h] [rbp-10h]
  char *v7; // [rsp+28h] [rbp-8h]

  for ( i = *a1; a3 > i; i = 2048LL )
  {
    memcpy(a2, (char *)a1 + 2048 - i + 2080, i);
    a2 += i;
    a3 -= i;
    if ( ((unsigned __int8)a2 & 7) == 0 )
    {
      v7 = a2;
      while ( a3 > 0x7FF )
      {
        sub_4073D8(a1 + 1, v7);
        v7 += 2048;
        a3 -= 2048LL;
        if ( !a3 )
        {
          result = a1;
          *a1 = 0LL;
          return result;
        }
      }
      a2 = v7;
    }
    sub_4073D8(a1 + 1, a1 + 260);
  }
  memcpy(a2, (char *)a1 + 2048 - i + 2080, a3);
  result = a1;
  *a1 = i - a3;
  return result;
}
