#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402FCF(_QWORD *a1)
{
  unsigned int v2; // [rsp+18h] [rbp-108h]
  int v3; // [rsp+1Ch] [rbp-104h]
  char v4[256]; // [rsp+20h] [rbp-100h] BYREF

  v2 = 256;
  memset(v4, 0, sizeof(v4));
  a1[2] = -2LL;
  while ( 1 )
  {
    v3 = sub_402C37(a1, 0LL);
    if ( v3 == -1 )
      break;
    v2 -= (unsigned __int8)v4[v3] ^ 1;
    v4[v3] = 1;
  }
  return v2;
}
