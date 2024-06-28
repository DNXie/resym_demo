#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_4043FD(FILE *a1, __int64 a2, __int64 a3)
{
  size_t result; // rax
  size_t v4; // rax
  int v5; // [rsp+24h] [rbp-80Ch]
  size_t v6; // [rsp+28h] [rbp-808h] BYREF
  void *ptr; // [rsp+30h] [rbp-800h]
  size_t n; // [rsp+38h] [rbp-7F8h]
  char v9[2008]; // [rsp+40h] [rbp-7F0h] BYREF
  unsigned __int64 v10; // [rsp+818h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  v6 = 2000LL;
  ptr = (void *)sub_404912(v9, &v6, a2, a3);
  n = v6;
  if ( ptr )
  {
    v4 = fwrite(ptr, 1uLL, n, a1);
    if ( v4 >= n )
    {
      if ( ptr != v9 )
        free(ptr);
      if ( n <= 0x7FFFFFFF )
      {
        result = n;
      }
      else
      {
        *__errno_location() = 75;
        sub_4045FC(a1);
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      if ( ptr != v9 )
      {
        v5 = *__errno_location();
        free(ptr);
        *__errno_location() = v5;
      }
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    sub_4045FC(a1);
    result = 0xFFFFFFFFLL;
  }
  return result;
}
