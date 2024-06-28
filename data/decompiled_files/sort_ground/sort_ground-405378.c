#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405378(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v2; // ebx
  __int64 result; // rax
  unsigned int v6; // [rsp+1Ch] [rbp-14h]

  while ( byte_61D5E0[(unsigned __int8)sub_402B35(*a1)] )
    ++a1;
  while ( byte_61D5E0[(unsigned __int8)sub_402B35(*a2)] )
    ++a2;
  v2 = sub_4052A7(a1);
  v6 = v2 - sub_4052A7(a2);
  if ( v6 )
    result = v6;
  else
    result = sub_4169F1(a1, a2, (unsigned int)dword_61D5C0, (unsigned int)dword_61D5C4);
  return result;
}
