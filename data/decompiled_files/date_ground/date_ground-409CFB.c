#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409CFB(_DWORD *a1, const char *a2, char a3)
{
  size_t v3; // rax
  _DWORD *v5; // rax
  char *v7; // [rsp+28h] [rbp-48h]
  char *v8; // [rsp+28h] [rbp-48h]
  int *v9; // [rsp+30h] [rbp-40h]
  _DWORD *v10; // [rsp+30h] [rbp-40h]
  unsigned __int64 i; // [rsp+38h] [rbp-38h]
  unsigned __int64 j; // [rsp+38h] [rbp-38h]
  unsigned __int64 v13; // [rsp+40h] [rbp-30h]
  size_t v14; // [rsp+48h] [rbp-28h]
  int v15[8]; // [rsp+50h] [rbp-20h] BYREF

  v7 = 0LL;
  v14 = strlen(a2);
  if ( (a3 & 8) != 0 && (v7 = strchr(a2, 46)) != 0LL )
    v3 = v7 - a2;
  else
    v3 = v14;
  v13 = v3;
  if ( v3 != 8 && v13 != 10 && v13 != 12 )
    return 1LL;
  if ( v7 )
  {
    if ( (a3 & 8) == 0 )
      return 1LL;
    if ( v14 - v13 != 3 )
      return 1LL;
  }
  for ( i = 0LL; i < v13; ++i )
  {
    if ( (unsigned int)(a2[i] - 48) > 9 )
      return 1LL;
  }
  v13 >>= 1;
  for ( j = 0LL; j < v13; ++j )
    v15[j] = 10 * (a2[2 * j] - 48) + a2[2 * j + 1] - 48;
  v9 = v15;
  if ( (a3 & 1) != 0 )
  {
    if ( (unsigned int)sub_409C09((__int64)a1, v15, v13 - 4, a3) )
      return 1LL;
    v9 = &v15[v13 - 4];
    v13 = 4LL;
  }
  a1[4] = *v9 - 1;
  a1[3] = v9[1];
  a1[2] = v9[2];
  v5 = v9 + 3;
  v10 = v9 + 4;
  a1[1] = *v5;
  v13 -= 4LL;
  if ( (a3 & 2) != 0 && (unsigned int)sub_409C09((__int64)a1, v10, v13, a3) )
    return 1LL;
  if ( v7 )
  {
    v8 = v7 + 1;
    if ( (unsigned int)(*v8 - 48) > 9 || (unsigned int)(v8[1] - 48) > 9 )
      return 1LL;
    *a1 = 10 * (*v8 - 48) + v8[1] - 48;
  }
  else
  {
    *a1 = 0;
  }
  return 0LL;
}
