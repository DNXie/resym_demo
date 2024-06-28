#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401C3E(unsigned int a1, char a2, _BYTE *a3)
{
  unsigned int v5; // [rsp+1Ch] [rbp-24h]
  unsigned int v6; // [rsp+1Ch] [rbp-24h]
  _BYTE *v7; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  _BYTE *v10; // [rsp+38h] [rbp-8h]

  v9 = -1LL;
  v5 = sub_40AFC0(a3, &v7, 10LL, &v8, &locale);
  if ( v5 && v5 != 2 )
    sub_40AEDA(v5, a1, (unsigned int)a2, &longopts, a3);
  if ( v7 == a3 || !v8 )
    return 0LL;
  if ( *v7 == 58 )
  {
    v10 = v7 + 1;
    v6 = sub_40AFC0(v7 + 1, &v7, 10LL, &v9, &locale);
    if ( v6 )
      sub_40AEDA(v6, a1, (unsigned int)a2, &longopts, a3);
    if ( v10 == v7 || v9 < v8 )
      return 0LL;
  }
  if ( *v7 )
    return 0LL;
  qword_6103A0 = v8;
  qword_610260 = v9;
  return 1LL;
}
