#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404102(const char *a1, _DWORD *a2)
{
  char v3; // al
  char *v4; // [rsp+18h] [rbp-28h] BYREF
  const char *v5; // [rsp+20h] [rbp-20h]
  unsigned __int64 i; // [rsp+28h] [rbp-18h]
  int v7[4]; // [rsp+30h] [rbp-10h] BYREF

  v5 = a1;
  for ( i = 0LL; i <= 3; ++i )
  {
    if ( (unsigned int)sub_403FE3(v5, 16, &v4, &v7[i], 58) )
      return 0LL;
    v5 = v4 + 1;
  }
  *a2 = v7[0];
  a2[1] = v7[1];
  a2[2] = v7[2];
  a2[3] = v7[3];
  for ( i = 0LL; i <= 0x1F; ++i )
  {
    if ( i > 0x1E )
      v3 = 0;
    else
      v3 = 58;
    if ( (unsigned int)sub_404072(v5, 16, &v4, (_BYTE *)a2 + i + 17, v3) )
      return 0LL;
    v5 = v4 + 1;
  }
  return 1LL;
}
