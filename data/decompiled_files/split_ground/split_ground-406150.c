#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406150(__int64 *a1, unsigned __int8 a2, char a3)
{
  __int64 *v3; // rax
  unsigned int v5; // [rsp+24h] [rbp-Ch]

  if ( a1 )
    v3 = a1;
  else
    v3 = &qword_6106E0;
  v5 = (*((_DWORD *)v3 + (a2 >> 5) + 2) >> (a2 & 0x1F)) & 1;
  *((_DWORD *)v3 + (a2 >> 5) + 2) ^= (v5 ^ a3 & 1) << (a2 & 0x1F);
  return v5;
}
