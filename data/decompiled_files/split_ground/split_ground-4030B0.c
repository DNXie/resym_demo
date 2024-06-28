#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_4030B0(__int64 a1)
{
  const char *v1; // rbx
  int *v2; // rax
  char v3; // [rsp+17h] [rbp-39h]
  _BYTE *src; // [rsp+18h] [rbp-38h]
  size_t n; // [rsp+20h] [rbp-30h]
  size_t na; // [rsp+20h] [rbp-30h]
  _BYTE *dest; // [rsp+28h] [rbp-28h]
  unsigned __int64 v8; // [rsp+38h] [rbp-18h]

  v3 = 0;
  n = 0LL;
  dest = (_BYTE *)sub_4088C8(a1);
  do
  {
    v8 = sub_4053C5(0LL, &dest[n], a1 - n);
    if ( v8 < a1 - n && *__errno_location() )
    {
      v1 = s1;
      v2 = __errno_location();
      error(1, *v2, "%s", v1);
    }
    na = v8 + n;
    if ( na != a1 )
    {
      if ( !na )
        break;
      v3 = 1;
    }
    src = &dest[na];
    if ( na == a1 )
    {
      while ( src > dest && *(src - 1) != 10 )
        --src;
    }
    if ( src == dest )
      src = &dest[na];
    sub_402C91(1, (__int64)dest, src - dest);
    n = dest - src + na;
    if ( n )
      memmove(dest, src, n);
  }
  while ( v3 != 1 );
  free(dest);
}
