#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_402C1D(__int64 a1, __int64 a2, const char *a3, const char *a4)
{
  char *v4; // rax
  char *v5; // rax
  char *v6; // rdx
  char *dest; // [rsp+28h] [rbp-18h]
  char *i; // [rsp+30h] [rbp-10h]
  unsigned __int64 v12; // [rsp+38h] [rbp-8h]

  dest = (char *)(a1 + 1);
  v12 = a1 + a2;
  for ( i = (char *)(a1 + 1); (unsigned __int64)i < v12 && strchr("'-+ #0I", *i); ++i )
  {
    if ( strchr(a3, *i) )
    {
      v4 = dest++;
      *v4 = *i;
    }
  }
  while ( (unsigned __int64)i < v12 )
  {
    v5 = dest++;
    v6 = i++;
    *v5 = *v6;
  }
  return strcpy(dest, a4);
}
