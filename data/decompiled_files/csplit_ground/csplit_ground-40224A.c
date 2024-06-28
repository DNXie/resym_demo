#include "/share/binary_recovery/clang-parser/defs.hh"
bool sub_40224A()
{
  __int64 v1; // rbx
  __int64 *v2; // rdi
  unsigned __int64 v3; // [rsp+8h] [rbp-38h]
  __int64 v4; // [rsp+10h] [rbp-30h]
  char *dest; // [rsp+18h] [rbp-28h]
  __int64 *ptr; // [rsp+20h] [rbp-20h]
  __int64 v7; // [rsp+28h] [rbp-18h]

  v3 = 0x1FFFLL;
  if ( byte_60B348 )
    return 0;
  if ( n > 0x1FFF )
    v3 = n;
  while ( 1 )
  {
    ptr = sub_4020D6(v3);
    v4 = *ptr;
    dest = (char *)ptr[5];
    if ( n )
    {
      memcpy(dest, src, n);
      dest += n;
      ptr[1] += n;
      v4 -= n;
      n = 0LL;
    }
    v1 = ptr[1];
    ptr[1] = v1 + sub_401D45((__int64)dest, v4);
    v2 = ptr;
    v7 = sub_401F26(ptr);
    if ( !v7 )
    {
      v2 = ptr;
      sub_402177((__int64)ptr);
    }
    if ( v7 || byte_60B348 )
      break;
    if ( 0xFFFFFFFFFFFFFFFFLL / *ptr <= 1 )
      sub_401CAF(v2, v4, 0xFFFFFFFFFFFFFFFFLL % *ptr);
    v3 = 2 * *ptr;
    sub_402177((__int64)ptr);
    free(ptr);
  }
  if ( v7 )
    sub_4021D9(ptr);
  else
    free(ptr);
  return v7 != 0;
}
