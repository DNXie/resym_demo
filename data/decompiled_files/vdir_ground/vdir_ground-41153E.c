#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_41153E(__int64 a1, __int64 a2, __int64 a3)
{
  while ( a3-- )
    *(_BYTE *)(a1 + a3) = tolower(*(unsigned __int8 *)(a2 + a3));
  return a1;
}
