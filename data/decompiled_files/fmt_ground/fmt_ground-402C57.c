#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402C57(char **a1)
{
  char *v1; // rax
  int v2; // edx
  __int64 result; // rax
  int i; // [rsp+14h] [rbp-Ch]
  char *v5; // [rsp+18h] [rbp-8h]

  v5 = *a1;
  for ( i = *((_DWORD *)a1 + 2); i; --i )
  {
    v1 = v5++;
    putchar_unlocked(*v1);
  }
  v2 = *((_DWORD *)a1 + 2);
  result = (unsigned int)(v2 + dword_608288);
  dword_608288 += v2;
  return result;
}
