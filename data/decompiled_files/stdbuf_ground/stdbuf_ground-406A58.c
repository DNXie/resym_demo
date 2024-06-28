#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406A58(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r12
  unsigned __int8 *v3; // rbx
  unsigned __int8 v5; // [rsp+1Eh] [rbp-12h]
  unsigned __int8 v6; // [rsp+1Fh] [rbp-11h]

  v2 = a1;
  v3 = a2;
  if ( a1 == a2 )
    return 0LL;
  do
  {
    v5 = sub_4029B5(*v2);
    v6 = sub_4029B5(*v3);
    if ( !v5 )
      break;
    ++v2;
    ++v3;
  }
  while ( v5 == v6 );
  return v5 - (unsigned int)v6;
}
