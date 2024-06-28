#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40A8E5(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax

  if ( a2 && *a2 )
    result = (unsigned int)dword_417140[sub_414896(a1, a2, off_4170E0, dword_417140, 4LL, off_61B398)];
  else
    result = 2LL;
  return result;
}
