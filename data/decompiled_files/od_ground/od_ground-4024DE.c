#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4024DE(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _BYTE *v6; // rax
  unsigned __int64 result; // rax
  char v8; // [rsp+0h] [rbp-60h]
  char v11[12]; // [rsp+30h] [rbp-30h] BYREF
  int v12; // [rsp+3Ch] [rbp-24h]
  int v13; // [rsp+40h] [rbp-20h]
  int v14; // [rsp+44h] [rbp-1Ch]
  _BYTE *v15; // [rsp+48h] [rbp-18h]
  unsigned __int64 i; // [rsp+50h] [rbp-10h]
  const char *v17; // [rsp+58h] [rbp-8h]

  v15 = (_BYTE *)a3;
  v12 = a6;
  for ( i = a1; ; --i )
  {
    result = a2;
    if ( a2 >= i )
      break;
    v13 = (i - 1) * a6 / a1;
    v6 = v15++;
    v14 = *v6 & 0x7F;
    if ( v14 == 127 )
    {
      v17 = "del";
    }
    else if ( v14 > 32 )
    {
      v11[0] = v14;
      v11[1] = 0;
      v17 = v11;
    }
    else
    {
      v17 = (const char *)(4LL * v14 + 4253280);
    }
    sub_407DDE((unsigned int)"%*s", v12 - v13 + a5, (_DWORD)v17, v12 - v13 + a5, a5, a6, v8);
    v12 = v13;
  }
  return result;
}
