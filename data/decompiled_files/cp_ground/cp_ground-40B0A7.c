#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40B0A7(const char *a1, int a2)
{
  int v2; // eax
  bool v4; // [rsp+17h] [rbp-29h]
  void *dest; // [rsp+18h] [rbp-28h] BYREF
  size_t v6; // [rsp+20h] [rbp-20h]
  __int64 v7; // [rsp+28h] [rbp-18h]
  size_t n; // [rsp+30h] [rbp-10h]
  unsigned __int64 v9; // [rsp+38h] [rbp-8h]

  v7 = strlen(a1);
  v4 = 1;
  n = strlen(src) + 1;
  v6 = n;
  if ( n <= 8 )
    v6 = 9LL;
  v9 = v7 + v6 + 1;
  dest = (void *)sub_4126C5(v9);
  memcpy(dest, a1, v7 + 1);
  if ( a2 != 1 )
  {
    v2 = sub_40AD74((__int64 *)&dest, v9, v7);
    switch ( v2 )
    {
      case 1:
        v4 = 0;
        break;
      case 0:
        return dest;
      case 2:
        v4 = a2 == 2;
        break;
    }
  }
  if ( v4 )
    memcpy((char *)dest + v7, src, n);
  sub_40AC5C((const char *)dest, v7, 126);
  return dest;
}
