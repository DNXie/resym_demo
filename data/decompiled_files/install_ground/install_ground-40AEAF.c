#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40AEAF(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax

  if ( a2 && *a2 )
    result = (unsigned int)dword_41BCE0[sub_413A0C(a1, a2, off_41BC80, dword_41BCE0, 4LL, off_620418)];
  else
    result = 2LL;
  return result;
}
