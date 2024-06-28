#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_401CF7(__int64 a1, int a2, char a3)
{
  char *result; // rax
  int i; // [rsp+14h] [rbp-1Ch]
  int j; // [rsp+14h] [rbp-1Ch]
  char *dest; // [rsp+18h] [rbp-18h]
  __int64 v8; // [rsp+20h] [rbp-10h]
  char *v9; // [rsp+28h] [rbp-8h]

  v8 = a2;
  for ( i = 0; i < a2; ++i )
    v8 += strlen(*(const char **)(8LL * i + a1));
  dest = (char *)sub_406EC3(v8);
  for ( j = 0; j < a2; ++j )
  {
    v9 = stpcpy(dest, *(const char **)(8LL * j + a1));
    *(_QWORD *)(a1 + 8LL * j) = dest;
    dest = v9 + 1;
    *v9 = a3;
  }
  result = dest;
  *(_QWORD *)(a1 + 8LL * a2) = dest;
  return result;
}
