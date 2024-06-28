#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_40A844(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v3; // rax
  _BYTE *v4; // rdx
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  _BYTE *v7; // rdx
  _BYTE *result; // rax
  _BYTE *v11; // [rsp+20h] [rbp-8h]

  v11 = a2;
  if ( *a2 != 46 || a2[1] )
  {
    while ( *v11 )
    {
      v3 = a1++;
      v4 = v11++;
      *v3 = *v4;
    }
    if ( v11 > a2 && *(v11 - 1) != 47 )
    {
      v5 = a1++;
      *v5 = 47;
    }
  }
  while ( *a3 )
  {
    v6 = a1++;
    v7 = a3++;
    *v6 = *v7;
  }
  result = a1;
  *a1 = 0;
  return result;
}
