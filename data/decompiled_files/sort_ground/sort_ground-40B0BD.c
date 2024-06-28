#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 sub_40B0BD()
{
  __int64 i; // [rsp+8h] [rbp-38h]
  char v2[40]; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int64 v3; // [rsp+38h] [rbp-8h]

  v3 = __readfsqword(0x28u);
  for ( i = qword_61DA08; i; i = *(_QWORD *)(i + 64) )
  {
    if ( *(unsigned __int8 *)(i + 53)
       + *(unsigned __int8 *)(i + 52)
       + *(unsigned __int8 *)(i + 50)
       + *(unsigned __int8 *)(i + 54)
       + (*(unsigned __int8 *)(i + 51) | *(unsigned __int8 *)(i + 56) | (*(_QWORD *)(i + 32) != 0LL)) > 1 )
    {
      *(_BYTE *)(i + 55) = 0;
      *(_BYTE *)(i + 49) = *(_BYTE *)(i + 55);
      *(_BYTE *)(i + 48) = *(_BYTE *)(i + 49);
      sub_406428(i, v2);
      sub_40B084((__int64)v2);
    }
  }
  return __readfsqword(0x28u) ^ v3;
}
