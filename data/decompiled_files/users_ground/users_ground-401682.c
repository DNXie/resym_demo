#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_401682(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v5; // [rsp+8h] [rbp-38h]
  char v6; // [rsp+1Fh] [rbp-21h]
  unsigned __int64 i; // [rsp+20h] [rbp-20h]
  size_t j; // [rsp+20h] [rbp-20h]
  size_t nmemb; // [rsp+28h] [rbp-18h]
  _QWORD *base; // [rsp+30h] [rbp-10h]

  v5 = a1;
  base = (_QWORD *)sub_403E9E(a1, 8LL);
  nmemb = 0LL;
  while ( v5-- )
  {
    if ( *(_BYTE *)(a2 + 44) && *(_WORD *)a2 == 7 )
      base[nmemb++] = sub_40419E(a2);
    a2 += 384LL;
  }
  qsort(base, nmemb, 8uLL, compar);
  for ( i = 0LL; i < nmemb; ++i )
  {
    if ( nmemb - 1 <= i )
      v3 = 10;
    else
      v3 = 32;
    v6 = v3;
    fputs_unlocked((const char *)base[i], stdout);
    putchar_unlocked(v6);
  }
  for ( j = 0LL; j < nmemb; ++j )
    free((void *)base[j]);
  free(base);
}
