#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40277C(char *a1, char **a2, unsigned __int64 *a3)
{
  char *v3; // rax
  int v6; // [rsp+1Ch] [rbp-Ch]
  unsigned __int64 v7; // [rsp+20h] [rbp-8h]

  v7 = 0LL;
  while ( (unsigned int)(*a1 - 48) <= 9 )
  {
    v3 = a1++;
    v6 = *v3 - 48;
    if ( ~(__int64)v6 / 0xAuLL < v7 )
      return 0LL;
    v7 = 10 * v7 + v6;
  }
  *a2 = a1;
  *a3 = v7;
  return 1LL;
}
