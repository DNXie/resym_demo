#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402EB8(__int64 *a1, int a2)
{
  __int64 *v3; // [rsp+4h] [rbp-18h]
  unsigned int v4; // [rsp+18h] [rbp-4h]

  v3 = a1;
  if ( !a1 )
    v3 = &qword_6082A0;
  v4 = *((_DWORD *)v3 + 1);
  *((_DWORD *)v3 + 1) = a2;
  return v4;
}
