#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_4021A2(unsigned __int64 a1, int a2)
{
  char *v2; // rax
  size_t v3; // rax
  unsigned __int64 v4; // [rsp+8h] [rbp-28h]
  size_t v5; // [rsp+20h] [rbp-10h]
  size_t v6; // [rsp+28h] [rbp-8h]

  v4 = a1;
  v5 = 0LL;
  if ( a2 == 5 || a2 == 6 || a2 == 7 )
  {
    v6 = strlen(s);
    while ( 1 )
    {
      v4 /= v6;
      if ( !v4 )
        break;
      ++v5;
    }
    v5 += a1 % v6 != 0;
  }
  if ( n )
  {
    if ( n < v5 )
    {
      v2 = gettext("the suffix length needs to be at least %zu");
      error(1, 0, v2, v5);
    }
  }
  else
  {
    v3 = 2LL;
    if ( v5 >= 2 )
      v3 = v5;
    n = v3;
  }
}
