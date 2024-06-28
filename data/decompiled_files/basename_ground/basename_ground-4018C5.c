#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4018C5(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // [rsp+10h] [rbp-10h]
  _BYTE *v4; // [rsp+18h] [rbp-8h]

  v4 = (_BYTE *)sub_401948(a1);
  if ( *v4 )
  {
    v3 = sub_4019B1(v4);
    if ( v4[v3] == 47 )
      ++v3;
    result = sub_403FA4(v4, v3);
  }
  else
  {
    v1 = sub_4019B1(a1);
    result = sub_403FA4(a1, v1);
  }
  return result;
}
